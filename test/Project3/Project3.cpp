#pragma once
#include<graphics.h>
#include<stdio.h>
#include<Windows.h>
#include <iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#pragma comment(lib,"Winmm.lib")
#pragma comment( lib, "MSIMG32.LIB")

//#pragma warning(disable : 4996)

typedef struct student
{
	int id;//学号
	char department[100];//学院
	char major[100];//专业
	char name[100];//姓名
	char sex[100];//性别
	char password[100];//密码
	long long phone_number;//电话号
	char email[100];//邮箱
} students;


typedef struct course {
	int id;//课程编号
	char name[100];//课程名称
	int teacher_number;//教师工号
	char book[100];//教材
	int limit_number;//限制人数
	FILE* students;//学生名单
	int start_year, start_mounth, start_week;
	char term_start[100];
	char term_end[100];
	int end_year, end_mounth, end_week;
	int time[80];//上课时间
	char time_s[100];
	int score;//学分
	int class_hours;//学时
	bool ismust;//是否必修
	char place[50];//上课地点
	FILE* introduction;//简介
	char school[100];//学院
} courses;


//获取总学生数
int get_total_student_num(void) {
	int total_student_num = 0;
	char tmp[2000];
	FILE* student_list;

	fopen_s(&student_list, "bin//user_student.txt", "r");
	while (fgets(tmp, 2000, student_list) != NULL)
	{
		total_student_num++;
	}
	fclose(student_list);
	//	printf("总学生数%d\n", total_student_num);
	return total_student_num;
}

//获取学生信息读入结构体数组
students* get_student_info(void) {

	FILE* student_list;
	//数总共行数
	int total_student_num = get_total_student_num();
	//获取信息
	int id_student = 0;
	long long phone_number = 0;
	char school[100], sex[100], email[100], password[100], name[100];
	fopen_s(&student_list, "bin//user_student.txt", "r");

	students* student_out;
	student_out = (students*)malloc(sizeof(students) * total_student_num + sizeof(students));


	for (int i = 0; i < total_student_num; i++) {
		fscanf_s(student_list, ("%d"), &id_student);
		fscanf_s(student_list, ("%lld"), &phone_number);
		fscanf_s(student_list, ("%s"), school, 100);
		fscanf_s(student_list, ("%s"), sex, 100);
		fscanf_s(student_list, ("%s"), email, 100);
		fscanf_s(student_list, ("%s"), password, 100);
		fscanf_s(student_list, ("%s"), name, 100);

		student_out[i].id = id_student;
		student_out[i].phone_number = phone_number;
		for (int h = 0; h < 100; h++)
			student_out[i].department[h] = school[h];
		for (int h = 0; h < 100; h++)
			student_out[i].sex[h] = sex[h];
		for (int h = 0; h < 100; h++)
			student_out[i].email[h] = email[h];
		for (int h = 0; h < 100; h++)
			student_out[i].password[h] = password[h];
		for (int h = 0; h < 100; h++)
			student_out[i].name[h] = name[h];

	}
	fclose(student_list);
	return student_out;
}


//获取总课程数
int get_total_course_num(void) {
	int total_course_num = 0;
	char tmp[2000];
	FILE* course_list;
	//数总共行数
	fopen_s(&course_list, "bin//course_list.txt", "r");
	while (fgets(tmp, 2000, course_list) != NULL)
	{
		total_course_num++;
	}
	fclose(course_list);
	//	printf("总课程数%d\n", total_course_num);
	return total_course_num;
}


//学生更改电话
int student_phone_change(int student_id, long long new_phone_num) {

	int total_student_num = get_total_student_num();
	students* all_stu;
	all_stu = get_student_info();
	for (int i = 0; i < get_total_student_num(); i++) {
		if (all_stu[i].id == student_id) {
			all_stu[i].phone_number = new_phone_num;
			break;
		}
	}
	FILE* student_file;

	fopen_s(&student_file, "bin//user_student.txt", "w");

	for (int i = 0; i < total_student_num ; i++)
		fprintf_s(student_file, "%d %lld %s %s %s %s %s\n", all_stu[i].id, all_stu[i].phone_number, all_stu[i].department, all_stu[i].sex, all_stu[i].email, all_stu[i].password, all_stu[i].name);

	fclose(student_file);




	free(all_stu);
	return 0;
}


//获取传入课程当前人数
int get_course_population(int course_id) {
	//获取课程人数大小
	FILE* course_file;
	char file_id[100];
	int course_population = 0;
	int stu_id = 0;

	sprintf_s(file_id, "bin\\course_students\\%d.txt", course_id);
	fopen_s(&course_file, file_id, "r");
	course_population = 0;
	//	if (course_file != NULL)
	{
		//		printf("卧槽\n");
		while (fscanf_s(course_file, ("%d"), &stu_id) != EOF)
			course_population++;
		fclose(course_file);
	}
			printf("课号为%d的课程人数%d\n",course_id,course_population);
	return course_population;

}


//教师删除课程
bool teacher_delete_course(int course_number) {
	int num = 0, count = 0;
	bool is_success = 1;
	char course_introduction_filename[50], course_students_filename[50], student_course_filename[50], teacher_course_filename[50],
		student_id[11] = { 0 }, course_id[7] = { 0 }, course_info_tot[200], course_info_separated[10][100] = { 0 }, linedata[200] = { 0 };
	FILE* fp_read_course_students, * fp_read_student_course, * fp_rewrite_student_course, * fp_read_course_list, * fp_rewrite_course_list,
		* fp_read_teacher_course, * fp_rewrite_teacher_course;
	errno_t err;
	sprintf_s(course_introduction_filename, 50, "bin//course_introduction//%d.txt", course_number);
	remove(course_introduction_filename);
	//删除课程简介文件。
	sprintf_s(course_students_filename, 50, "bin//course_students//%d.txt", course_number);
	_itoa_s(course_number, course_id, 10);
	if ((err = fopen_s(&fp_read_course_students, course_students_filename, "r+")) == 0) {
		while ((fscanf_s(fp_read_course_students, "%s", student_id, 11)) != EOF) {
			sprintf_s(student_course_filename, 50, "bin//student_course//%s.txt", student_id);
			err = fopen_s(&fp_read_student_course, student_course_filename, "r+");
			err = fopen_s(&fp_rewrite_student_course, "bin//student_course//tmp.txt", "w+");
			while ((fscanf_s(fp_read_student_course, "%s", linedata, 7)) != EOF) {
				if (strcmp(linedata, course_id) != 0)
					fprintf(fp_rewrite_student_course, "%s ", linedata);
			}
			fclose(fp_read_student_course);
			fclose(fp_rewrite_student_course);
			remove(student_course_filename);
			rename("bin//student_course//tmp.txt", student_course_filename);
		}
		fclose(fp_read_course_students);
	}
	else {
		is_success = false;
		//       printf("未找到课程的学生名单信息文件！\n");
	}

	remove(course_students_filename);
	//删除课程的学生名单信息文件。
	err = fopen_s(&fp_read_course_list, "bin//course_list.txt", "r+");
	err = fopen_s(&fp_rewrite_course_list, "bin//tmp.txt", "w+");
	while (fgets(linedata, sizeof(linedata), fp_read_course_list)) {
		if (strstr(linedata, course_id))
			strcpy_s(course_info_tot, linedata);
		else
			fputs(linedata, fp_rewrite_course_list);
	}
	fclose(fp_read_course_list);
	fclose(fp_rewrite_course_list);
	remove("bin/course_list.txt");
	rename("bin//tmp.txt", "bin//course_list.txt");
	//删除课程信息文件中的该课程。
	for (int i = 0; i < 200; i++) {
		if (course_info_tot[i] != ' ') {
			course_info_separated[num][i - count] = course_info_tot[i];
		}
		else {
			count = count + strlen(course_info_separated[num]) + 1;
			num++;
		}
	}
	sprintf_s(teacher_course_filename, 50, "bin//teacher_course//%s.txt", course_info_separated[2]);
	//从课程信息文件中提取出该课程的编号。
	err = fopen_s(&fp_read_teacher_course, teacher_course_filename, "r+");
	err = fopen_s(&fp_rewrite_teacher_course, "bin//teacher_course//tmp.txt", "w+");
	while ((fscanf_s(fp_read_teacher_course, "%s", linedata, 7)) != EOF) {
		if (strcmp(linedata, course_id) != 0)
			fprintf(fp_rewrite_teacher_course, "%s ", linedata);
	}
	fclose(fp_read_teacher_course);
	fclose(fp_rewrite_teacher_course);
	remove(teacher_course_filename);
	rename("bin//teacher_course//tmp.txt", teacher_course_filename);
	//删除教师开课信息文件中的该课程编号。
	return is_success;
}


void teacher_add_course(courses course) {
	char course_introduction_filename[100], course_students_filename[100], teacher_course_filename[100], student_id[11] = { 0 }, course_id[7] = { 0 },
		linedata[11] = { 0 };
	FILE* fp_create_course_introduction, * fp_create_course_students, * fp_rewrite_teacher_course, * fp_rewrite_course_list;
	errno_t err;
	sprintf_s(course_introduction_filename, 100, "bin//course_introduction//%d.txt", course.id);
	err = fopen_s(&fp_create_course_introduction, course_introduction_filename, "w+");
	fprintf(fp_create_course_introduction, "这是%d号课程的简介。", course.id);
	fclose(fp_create_course_introduction);
	//添加课程简介文件。
	sprintf_s(course_students_filename, 100, "bin//course_students//%d.txt", course.id);
	err = fopen_s(&fp_create_course_students, course_students_filename, "w+");
	fclose(fp_create_course_students);
	//添加课程学生信息名单文件。
	sprintf_s(teacher_course_filename, 100, "bin//teacher_course//%d.txt", course.teacher_number);
	err = fopen_s(&fp_rewrite_teacher_course, teacher_course_filename, "a+");
	fprintf(fp_rewrite_teacher_course, "%d ", course.id);
	fclose(fp_rewrite_teacher_course);
	//向教师开课信息文件中添加该课程的编号。
	err = fopen_s(&fp_rewrite_course_list, "bin//course_list.txt", "a+");
	fprintf(fp_rewrite_course_list, "%d %s %d %s %d 起始%d-%d学年第一学期第%d周 终止%d-%d学年第一学期第%d周 ",
		course.id, course.name, course.teacher_number, course.book, course.limit_number, course.start_year, course.end_year, course.start_week,
		course.start_year, course.end_year, course.end_week);
	for (int i = 0; course.time[i] != 0; i++)
	{
		if (i == 0)
			fprintf(fp_rewrite_course_list, "%d", course.time[i]);
		else
			fprintf(fp_rewrite_course_list, ",%d", course.time[i]);
	}
	fprintf(fp_rewrite_course_list, " %d %s %s %d\n", course.score, course.place, course.school, course.ismust);
	fclose(fp_rewrite_course_list);
	//向课程信息文件中添加该课程的信息。
	return;
}



//查询一个字符串在另一个字符串中出现的次数
int strstr_cnt(const char* string, const char* substring) {
	int i, j, k, count = 0;
	for (i = 0; string[i]; i++)
		for (j = i, k = 0; string[j] == substring[k]; j++, k++)
			if (!substring[k + 1])
				count++;
	return(count);
}


//获取课程信息读入结构体数组
courses* get_course_info(void) {

	FILE* course_list;
	//数总共行数
	int total_course_num = get_total_course_num();
	//获取信息
	int id_course = 0, id_teacher = 0, limt_population = 0, score = 0, is_must = -1;
	char course_name[100], book[100], term1[100], term2[100], time[100], room[50], school[100];
	fopen_s(&course_list, "bin//course_list.txt", "r");

	courses* course_out;
	course_out = (courses*)malloc(sizeof(courses) * total_course_num + sizeof(courses));


	char dou[5] = { ',' };
	int dou_num = 0;
	int tmp_shi_wei = 0;
	for (int i = 0; i < total_course_num; i++) {
		fscanf_s(course_list, ("%d"), &id_course);
		fscanf_s(course_list, ("%s"), course_name, 100);
		fscanf_s(course_list, ("%d"), &id_teacher);
		fscanf_s(course_list, ("%s"), book, 100);
		fscanf_s(course_list, ("%d"), &limt_population);
		fscanf_s(course_list, ("%s"), term1, 100);
		fscanf_s(course_list, ("%s"), term2, 100);
		fscanf_s(course_list, ("%s"), time, 100);
		fscanf_s(course_list, ("%d"), &score);
		fscanf_s(course_list, ("%s"), room, 50);
		fscanf_s(course_list, ("%s"), school, 100);
		fscanf_s(course_list, ("%d"), &is_must);

		course_out[i].id = id_course;
		for (int h = 0; h < 100; h++)
			course_out[i].name[h] = course_name[h];
		course_out[i].teacher_number = id_teacher;
		for (int h = 0; h < 100; h++)
			course_out[i].book[h] = book[h];
		course_out[i].limit_number = limt_population;
		for (int h = 0; h < 100; h++)
			course_out[i].term_start[h] = term1[h];
		for (int h = 0; h < 100; h++)
			course_out[i].term_end[h] = term2[h];

		for (int p = 0; p < 100; p++)
			course_out[i].time_s[p] = time[p];
		dou_num = strstr_cnt(time, dou);//逗号个数
		for (int n = 0; n < 80; n++)
			course_out[i].time[n] = 0;
		for (int h = 0, k = 0; h < (dou_num + 2 * (dou_num + 1)); h++) {
			k = (h / 3);//h为在字符串中的位置，k为在第几组

			if (h % 3 != 2) {
				if (h == 3 * k) {
					course_out[i].time[k] += ((int)time[h] - 48) * 10;
				}
				else
					course_out[i].time[k] += ((int)time[h] - 48);
			}
		}
		course_out[i].score = score;

		for (int h = 0; h < 50; h++)
			course_out[i].place[h] = room[h];
		for (int x = 0; x < 100; x++)
			course_out[i].school[x] = school[x];
		if (is_must == 1)
			course_out[i].ismust = true;
		else
			course_out[i].ismust = false;
	}
	fclose(course_list);
	return course_out;
}





//获取某课程每周总共有多少节课
int get_course_time_amount(int course_id) {
	courses* all_courses;
	all_courses = get_course_info();
	int course_time = 0;
	int k = 0;
	for (int i = 0; i < get_total_course_num(); i++) {
		if (all_courses[i].id == course_id) {
			for (; all_courses[i].time[k] != 0; k++)
			{
				course_time++;
			}

			return course_time;
		}

	}

}


//获取某老师的课程编号数组，教师教课课号
void get_coursenum_teacher(int teacher_num, int* course_num) {
	int i = 0;
	FILE* teacher_course;
	errno_t err;
	char id3[500];
	sprintf_s(id3, "bin//teacher_course//%d.txt", teacher_num);
	err = fopen_s(&teacher_course, id3, "r");

	while (!feof(teacher_course))
	{
		fscanf_s(teacher_course, "%d ", &course_num[i]);
		i++;
	}
	fclose(teacher_course);
	return;
}



//获取一个教师有多少节课
int count_course_num_teacher(int teacher_num) {
	FILE* teacher_course;
	errno_t err;
	int a, count = 0;
	char id[500];

	sprintf_s(id, "bin//teacher_course//%d.txt", teacher_num);
	//	printf("%s", id);
	err = fopen_s(&teacher_course, id, "r");
	while (fscanf_s(teacher_course, "%d", &a) != EOF)
		++count;
	//	printf("\n已经开设的课数为%d ", count);
	fclose(teacher_course);
	return count;//一个教师有多少节课
}


//复制两个课程
void courses_copy_single(courses& copy_out, courses& copy_in) {


	copy_out.id = copy_in.id;
	for (int n = 0; n < 100; n++) {
		copy_out.book[n] = copy_in.book[n];
		copy_out.name[n] = copy_in.name[n];
		copy_out.time_s[n] = copy_in.time_s[n];
		copy_out.term_end[n] = copy_in.term_end[n];
		copy_out.term_start[n] = copy_in.term_start[n];
	}
	copy_out.class_hours = copy_in.class_hours;
	copy_out.end_mounth = copy_in.end_mounth;
	copy_out.end_year = copy_in.end_year;
	copy_out.ismust = copy_in.ismust;
	copy_out.limit_number = copy_in.limit_number;
	copy_out.score = copy_in.limit_number;
	for (int n = 0; n < 50; n++)
		copy_out.place[n] = copy_in.place[n];
	copy_out.start_mounth = copy_in.start_mounth;
	copy_out.start_year = copy_in.start_year;
	copy_out.teacher_number = copy_in.teacher_number;
	for (int n = 0; n < 80; n++)
		copy_out.time[n] = copy_in.time[n];



}



//获取某教师所教课课程结构数组
courses* get_teacher_course_info(int teacher_id) {
	courses* all_courses;
	all_courses = get_course_info();
	courses* teacher_course;
	teacher_course = (courses*)malloc(sizeof(courses) * count_course_num_teacher(teacher_id));

	for (int i = 0, n = 0; i < count_course_num_teacher(teacher_id); i++) {
		if (all_courses[i].teacher_number == teacher_id) {
			courses_copy_single(teacher_course[n], all_courses[i]);
			n++;
		}
	}



	free(all_courses);


	return teacher_course;
}




//获取老师每周总共有多少节课
int get_times_per_week_teacher(int teacher_id) {
	int times = 0;
	int* courses_id;
	courses_id = (int*)malloc(sizeof(int) * count_course_num_teacher(teacher_id));
	get_coursenum_teacher(teacher_id, courses_id);

	int cou = 0;//获取教师有多少门课
	cou = count_course_num_teacher(teacher_id);

	for (int i = 0; i < cou; i++) {
		times += get_course_time_amount(courses_id[i]);
	}


	return times;
}

//获取老师已经被占用的时间 返回所有课的所有时间组成的数组
int* time_have_been_used_teacher(int teacher_id) {
	int* used;
	used = (int*)malloc(sizeof(int) * get_times_per_week_teacher(teacher_id));
	int n = 0;//课程数
	courses* courses_haved;
	courses_haved = get_teacher_course_info(teacher_id);
	int time_have_been_used[100] = { '0' };


	for (int k = 0; k < count_course_num_teacher(teacher_id); k++)
		for (int i = 0; i < get_course_time_amount(courses_haved[k].id); i++)
		{
			used[n] = courses_haved[k].time[i];
			n++;
		}

	return used;
}


int main() {
	for(int i=0;i<9;i++)
		printf("%d\n", time_have_been_used_teacher(2017000001)[i]);


}