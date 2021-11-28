#include<graphics.h>
#include<stdio.h>
#include<Windows.h>
#include <iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#pragma comment(lib,"Winmm.lib")

#pragma warning(disable : 4996)
typedef struct administrator
{
	int id;//工号
	char department[100];//学院
	char name[100];//姓名
	char sex[10];//性别
	char password[100];//密码
	int phone_number;//电话号
	char email[100];//邮箱
} admin;

typedef struct student
{
	int id;//学号
	char department[100];//学院
	char major[100];//专业
	char name[100];//姓名
	char sex[10];//性别
	char password[100];//密码
	int phone_number;//电话号
	char email[100];//邮箱
} students;

typedef struct teacher {
	int id;//工号
	char department[100];//学院
	char name[100];//姓名
	char sex[10];//性别
	char password[100];//密码
	int phone_number;//电话号
	char email[100];//邮箱
} teachers;

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
} courses;

typedef struct people {
	student stu;
	teachers tea;
	admin adm;
} person;


int strstr_cnt(const char* string, const char* substring)//查询一个字符串在另一个字符串中出现的次数
{
	int i, j, k, count = 0;
	for (i = 0; string[i]; i++)
		for (j = i, k = 0; string[j] == substring[k]; j++, k++)
			if (!substring[k + 1])
				count++;
	return(count);
}

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


//返回课程编号
void sort_accroding_to_number_of_student(int order[]) {//将数组order根据人数写入课程号排序//返回排好序的课程序号数组

	int total_course_num = 0;

	total_course_num = get_total_course_num();




	FILE* course_f;
	int stu_id = 0;
	int *course_population =NULL;
	course_population = (int*)malloc(1000000 * sizeof(int));//因为课程号六位所以最大有1000000个班
	//for (int i = 0; i < 10000000000; i++) {

	//	course_population[i] = 0;
	//	//printf("第%d\n", i);
	//}



	//获取所有课程人数大小
	char file_id[100];
	for (int course_num = 100001; course_num < 100001 + total_course_num; course_num++) {
		sprintf_s(file_id, "bin\\course_students\\%d.txt", course_num);
		fopen_s(&course_f, file_id, "r");
		course_population[course_num] = 0;
		while(fscanf_s(course_f, ("%d"), &stu_id) != EOF)
		course_population[course_num]++;
		fclose(course_f);
//		printf("课号为%d的课程人数%d\n",course_num,course_population[course_num]);
	}


	int* course_population_order;//存储课程编号
	course_population_order = (int*)malloc(sizeof(int)* 1000000);
	for (int course_num = 100001,i = 0; course_num < 100001 + total_course_num; i++,course_num++) {
		course_population_order[i] = course_num;
	}

	//连带课程编号再一起排序
	for (int course_num = 100001 ,i=0; course_num < 100001 + total_course_num; i++,course_num++) {
		for (int course_num = 100001, i=0; course_num < 100001 + total_course_num; i++,course_num++) {
			if (course_population[course_num] < course_population[course_num + 1]) {
				//排序人数
				int tmp_course_population = 0;
				tmp_course_population = course_population[course_num + 1];
				course_population[course_num + 1] = course_population[course_num];
				course_population[course_num] = tmp_course_population;
				//排序课程号
				int tmp_course_num = 0;
				tmp_course_num = course_population_order[i + 1];
				course_population_order[i + 1] = course_population_order[i];
				course_population_order[i] = tmp_course_num;

			}

		}
	}
//	printf("排序 选课人数\n");
//	for (int course_num = 100001; course_num < 100001 + total_course_num; course_num++) {
//		printf("%d\n",course_population[course_num]);
//	}
//
	//printf("排序_课程号\n");
	//for (int course_num = 100001,i=0; course_num < 100001 + total_course_num;i++, course_num++) {
	//	printf("%d\n", course_population_order[i]);
	//}

	for (int course_num = 100001, i = 0; course_num < 100001 + total_course_num;i++, course_num++) {
		order[i]= course_population_order[i];
	}

	free(course_population_order);
	free(course_population);


	return ;
}//


courses* get_course_info(void) {

	FILE* course_list;
	//数总共行数
	int total_course_num = get_total_course_num();
	//获取信息
	int id_course = 0, id_teacher = 0, limt_population = 0, score = 0;
	char course_name[100], book[100], term1[100], term2[100], time[100], room[50];
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
		for (int n = 0; n < (dou_num + 2 * (dou_num + 1)); n++)
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
	}
	fclose(course_list);
	return course_out;
}



int get_course_population(int course_id) {
	//获取所有课程人数大小
	FILE* course_file;
	char file_id[100];
	int course_population = 0;
	int stu_id = 0;

	sprintf_s(file_id, "bin\\course_students\\%d.txt", course_id);
	fopen_s(&course_file, file_id, "r");
	course_population = 0;

	while (fscanf_s(course_file, ("%d"), &stu_id) != EOF)
		course_population++;
	fclose(course_file);
	printf("课号为%d的课程人数%d\n", course_id, course_population);
	return course_population;

}

//获取某课程限制人数
int get_course_limt_population(int course_id) {
	courses* course_o;
	course_o = (courses*)malloc(sizeof(courses) * get_total_course_num() + sizeof(courses));
	int limt = 0;

	course_o = get_course_info();
	int i = 0;
	for (; i < get_total_course_num(); i++) {
		if (course_o[i].id == course_id)
			break;
	}


	limt = course_o[i].limit_number;
	free(course_o);
	//	printf("课号为%d的课程限制人数为%d\n", course_id, course_o[i].limit_number);
	return limt;

}

int get_course_chosen_amount_student(int student_id) {
	//获取学生已选课数量
	FILE* student_file;
	char file_id[100];
	int course_chosen_amount = 0;
	int stu_id = 0;

	sprintf_s(file_id, "bin\\student_course\\%d.txt", student_id);
	fopen_s(&student_file, file_id, "r");
	course_chosen_amount = 0;

	while (fscanf_s(student_file, ("%d"), &stu_id) != EOF)
		course_chosen_amount++;
	fclose(student_file);
	printf("学号为%d的已选课数%d\n", student_id, course_chosen_amount);
	return course_chosen_amount;
}

int* get_course_chosen_id_student(int student_id) {
	FILE* student_file;
	char file_id[100];

	sprintf_s(file_id, "bin\\student_course\\%d.txt", student_id);
	fopen_s(&student_file, file_id, "r");


	int* course_chosen_id;
	course_chosen_id = (int*)malloc(sizeof(int) * get_course_chosen_amount_student(student_id));
	for (int i = 0; i < get_course_chosen_amount_student(student_id); i++) {
		fscanf_s(student_file, ("%d"), &course_chosen_id[i]);
	}
	fclose(student_file);
	//for (int i = 0; i < get_course_chosen_amount_student(student_id); i++)
	//	printf("学号为%d的学生的选课有%d\n", student_id, course_chosen_id[i]);
	return course_chosen_id;
}

bool is_course_time_conflict(int course_id_1, int course_id_2) {
	courses* all_courses;
	int time_1[80] = { 0 }, time_2[80] = {0};
	char dou[5] = { ',' };
	all_courses = get_course_info();
	int ci_shu_1 = 0, ci_shu_2 = 0;
	for (int i = 0; i < get_total_course_num(); i++) {
		if (all_courses[i].id == course_id_1) {
			ci_shu_1 =1 + strstr_cnt(all_courses[i].time_s, dou);
			for (int n = 0; n < 80; n++) {
				time_1[n] = all_courses[i].time[n];	
			}
		}
		if (all_courses[i].id == course_id_2) {
			ci_shu_2 = 1 + strstr_cnt(all_courses[i].time_s, dou);
			for (int n = 0; n < 80; n++) {
				time_2[n] = all_courses[i].time[n];	
			}
				
		}
	}
	printf("次数1：%d\n", ci_shu_1);
	for (int i = 0; i < ci_shu_1 ; i++) {
		for (int j = 0; j < ci_shu_2 ; j++) {
			if (time_1[i] == time_2[j])
				return true;
		}
	}
	return false;
}

//返回课程编号,根据课余量
void sort_accroding_to_number_of_left(int order[]) {//将数组order根据人数写入课程号排序//返回排好序的课程序号数组

	int total_course_num = 0;

	total_course_num = get_total_course_num();




	FILE* course_f;
	int stu_id = 0;
	int* course_population = NULL;
	course_population = (int*)malloc((1000000) * sizeof(int));//因为课程号六位所以最大有1000000个班
	//for (int i = 0; i < 10000000000; i++) {

	//	course_population[i] = 0;
	//	//printf("第%d\n", i);
	//}



	//获取所有课程人数大小
	char file_id[100];
	for (int course_num = 100001; course_num < 100001 + total_course_num; course_num++) {
		sprintf_s(file_id, "bin\\course_students\\%d.txt", course_num);
		fopen_s(&course_f, file_id, "r");
		course_population[course_num] = 0;
		while (fscanf_s(course_f, ("%d"), &stu_id) != EOF)
			course_population[course_num]++;
		fclose(course_f);
		//		printf("课号为%d的课程人数%d\n",course_num,course_population[course_num]);
	}

	//获取所有课程课余量大小
	int* course_left_population;
	course_left_population = (int*)malloc(sizeof(int) * 1000000);
	for (int course_num = 100001, i = 0; course_num < 100001 + total_course_num; i++, course_num++)
	{
		course_left_population[course_num] = get_course_limt_population(course_num) - course_population[course_num];
	}
	
	
	int* course_population_order;//存储课程编号
	course_population_order = (int*)malloc(sizeof(int) * 1000000);
	for (int course_num = 100001, i = 0; course_num < 100001 + total_course_num; i++, course_num++) {
		course_population_order[i] = course_num;
	}

	//连带课程编号再一起排序
	for (int course_num = 100001, i = 0; course_num < 100001 + total_course_num; i++, course_num++) {
		for (int course_num = 100001, i = 0; course_num < 100001 + total_course_num; i++, course_num++) {
			if (course_left_population[course_num] < course_left_population[course_num + 1]) {
				//排序人数
				int tmp_course_left_population = 0;
				tmp_course_left_population = course_left_population[course_num + 1];
				course_left_population[course_num + 1] = course_left_population[course_num];
				course_left_population[course_num] = tmp_course_left_population;
				//排序课程号
				int tmp_course_num = 0;
				tmp_course_num = course_population_order[i + 1];
				course_population_order[i + 1] = course_population_order[i];
				course_population_order[i] = tmp_course_num;

			}

		}
	}
	//	printf("排序 选课人数\n");
	//	for (int course_num = 100001; course_num < 100001 + total_course_num; course_num++) {
	//		printf("%d\n",course_population[course_num]);
	//	}
	//
		//printf("排序_课程号\n");
		//for (int course_num = 100001,i=0; course_num < 100001 + total_course_num;i++, course_num++) {
		//	printf("%d\n", course_population_order[i]);
		//}

	for (int course_num = 100001, i = 0; course_num < 100001 + total_course_num; i++, course_num++) {
		order[i] = course_population_order[i];
	}
	free(course_left_population);
	free(course_population_order);
	free(course_population);

	return ;
}



int main() {
	//if (is_course_time_conflict(100001, 100002))
	//	printf("true\n");
	//else
	//	printf("false\n");
	//get_course_chosen_id_student(2019000003);
	//get_course_chosen_amount_student(2019000001);
	//get_course_population(100001);
	//get_course_limt_population(100003);

	int* course_population_order;//存储课程编号
	course_population_order = (int*)malloc(sizeof(int) * 1000000);



	sort_accroding_to_number_of_student(course_population_order);
	int total_course_num = get_total_course_num();

	printf("排序_课程号_主函数\n");
	for (int course_num = 100001,i=0; course_num < 100001 + total_course_num;i++, course_num++) {
		printf("%d\n", course_population_order[i]);
	}
	return 0;
}

