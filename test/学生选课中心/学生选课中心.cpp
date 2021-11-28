#ifndef MY_H_FILE //如果没有定义这个宏 
#define MY_H_FILE //定义这个宏 
#include<graphics.h>
#include<stdio.h>
#include<Windows.h>
#include <iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#pragma comment(lib,"Winmm.lib")
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
	int score;//学分
	int class_hours;//学时
	bool ismust;//是否必修
	char place[50];//上课地点
	FILE* introduction;//简介
} courses;

#endif 

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

int strstr_cnt(const char* string, const char* substring)
{
	int i, j, k, count = 0;
	for (i = 0;string[i];i++)
		for (j = i, k = 0;string[j] == substring[k];j++, k++)
			if (!substring[k + 1])
				count++;
	return(count);
}





courses* get_course_info(courses* course_out) {

	FILE* course_list;
	//数总共行数
	int total_course_num = get_total_course_num();
	//获取信息
	int id_course = 0, id_teacher = 0, limt_population = 0, score = 0;
	char course_name[50], book[50], term1[50], term2[50], time[50], room[50];
	fopen_s(&course_list, "bin//course_list.txt", "r");

	//courses* course_out;
	//course_out = (courses*)malloc(sizeof(courses) * total_course_num + sizeof(courses));


	char dou[5] = { ',' };
	int dou_num = 0;
	int tmp_shi_wei = 0;
	for (int i = 0;i < total_course_num;i++) {
		fscanf_s(course_list, ("%d"), &id_course);
		fscanf_s(course_list, ("%s"), course_name, 50);
		fscanf_s(course_list, ("%d"), &id_teacher);
		fscanf_s(course_list, ("%s"), book, 50);
		fscanf_s(course_list, ("%d"), &limt_population);
		fscanf_s(course_list, ("%s"), term1, 50);
		fscanf_s(course_list, ("%s"), term2, 50);
		fscanf_s(course_list, ("%s"), time, 50);
		fscanf_s(course_list, ("%d"), &score);
		fscanf_s(course_list, ("%s"), room, 50);
		course_out[i].id = id_course;
		for (int h = 0;h < 100;h++)
			course_out[i].name[h] = course_name[h];
		course_out[i].teacher_number = id_teacher;
		for (int h = 0;h < 100;h++)
			course_out[i].book[h] = book[h];
		course_out[i].limit_number = limt_population;
		for (int h = 0;h < 100;h++)
			course_out[i].term_start[h] = term1[h];
		for (int h = 0;h < 100;h++)
			course_out[i].term_end[h] = term2[h];


		dou_num = strstr_cnt(time, dou);//逗号个数
		for (int n = 0;n < (dou_num + 2 * (dou_num + 1));n++)
			course_out[i].time[n] = 0;
		for (int h = 0, k = 0;h < (dou_num + 2 * (dou_num + 1));h++) {
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

		for (int h = 0;h < 50;h++)
			course_out[i].place[h] = room[h];
	}
	fclose(course_list);
	return course_out;
}

int main() {
	courses* cou;
	cou = (courses*)malloc(get_total_course_num()* sizeof(courses));
	get_course_info(cou);
	char a[50];
	printf("请输入要查询的课程\n");
	scanf_s("%s",a,50);
	for (int i = 0;i < get_total_course_num();i++) {
		if (strstr_cnt(cou[i].name, a) != 0) {
			printf("%s\n", cou[i].name);
			printf("%s\n", cou[i].place);
		}
	}





}
