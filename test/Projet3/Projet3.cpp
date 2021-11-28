#pragma once
#include<graphics.h>
#include<stdio.h>
#include<Windows.h>
#include <iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#pragma comment(lib,"Winmm.lib")
#pragma comment( lib, "MSIMG32.LIB")

//#pragma warning(disable : 4996)

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
	printf("课号为%d的课程人数%d\n",course_id,course_population);
	return course_population;




}
int main() {
	_getch();
	get_course_population(100001);
	return 0;
}