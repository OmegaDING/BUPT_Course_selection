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
	char sex[100];//性别
	char password[100];//密码
	long long phone_number;//电话号
	char email[100];//邮箱
} students;


typedef struct teacher {
	int id;//工号
	char department[100];//学院
	char name[100];//姓名
	char sex[10];//性别
	char password[100];//密码
	long long phone_number;//电话号
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
	char school[100];//学院
	int term;//起始学期
	int term2;//终止学期
} courses;

typedef struct people {
	student stu;
	teachers tea;
	admin adm;
} person;


#define MAX_POPULATION_PER_COURSE 100

bool is_password_right(int type, int id, char* input_password);
int get_total_course_num(void);
void sort_accroding_to_number_of_student(int order[]);//将数组order根据人数写入课程号排序//返回排好序的课程序号数组;
courses* get_course_info(void);
int strstr_cnt(const char* string, const char* substring);
void CharToTchar(const char* _char, TCHAR* tchar);//char转tchar；wchar_t
void TcharToChar(const TCHAR* tchar, char* _char);//tchar转char//wchar_t
void transparentimage(IMAGE* dstimg, int x, int y, IMAGE* srcimg, UINT transparentcolor);//透明贴图
int get_course_population(int course_id);
int get_course_limt_population(int course_id);
int get_course_chosen_amount_student(int student_id);
int* get_course_chosen_id_student(int student_id);
bool is_course_time_conflict(int course_id_1, int course_id_2);
int is_allowed_to_choose(int course_id, int student_id);
void student_select_course(int student_number, int course_number);
courses* search_course(char*);
int get_search_course_amount(char* key_word);
void courses_copy(courses* copy_out, courses* copy_in);
void sort_number_of_stu(courses*);
void courses_copy_single(courses& copy_out, courses& copy_in);
void sort_accroding_to_number_of_left(int order[]);
void sort_number_of_left(courses*);
void course_chosen(int student_id, courses* cour_chosen);
void student_delete_course(int, int);
int count_course_num_teacher(int teacher_num);
void get_coursenum_teacher(int teacher_num, int* course_num);
students* get_student_info(void);
int get_total_student_num(void);
void load_student(person& current_user);
int student_phone_change(int student_id, long long new_phone_num);
int student_email_change(int student_id, char* email);
int student_password_change(int student_id, char* password);
bool is_email_right(char* email);
bool is_phone_num_right(long long phone);
courses* get_teacher_course_info(int teacher_id);
teachers* get_teacher_info(void);
int get_total_teacher_num(void);
void load_teacher(person& current_user);
int check_course_details(int course_id);
bool add_course(int teacher_id);
int* get_course_chosen_student_list(int course_id);
void students_copy_single(students& copy_out, student& copy_in);
students* search_students_in_course(students* stu_in, char* name,int& amount);
bool is_allowed_to_del_course(int course_id);
bool teacher_delete_course(int);
void teacher_add_course(courses course);
bool teacher_modify_course_info(int course_id);
int get_amount_of_elective_course_teacher(int teacher_id);
int get_course_time_amount(int course_id);
int get_total_time_used_per_week_teacher(int teacher_id);
int* time_have_been_used_teacher(int teacher_id);
int* time_have_been_used_teacher(int teacher_id);
void load_course_time(courses& courses_add);
int is_allowed_to_launch_course(courses& cou);
int teacher_phone_change(int teacher_id, long long new_phone_num);
int teacher_email_change(int teacher_id, char* email);
int teacher_password_change(int teacher_id, char* password);
char* get_course_introduction(int course_id);
void rewrite_course_introduction(char* introduction_nuw, int course_id);
void modify_course_book(int course_id, char* book);
void modify_course_limt_population(int course_id, int new_limt);
void admin_add_student(students student);
void admin_add_teacher(teachers teacher);
void admin_add_teacher(teachers teacher);
void get_current_time(int& year, int& mounth, int& day, int& hour, int& min, int& second);
courses* search_course_from_list(courses* list, int len, char* key_word);
int get_search_course_amount(courses* list, int len, char* key_word);
bool examine_course_time(char* course_time);
bool examine_course_place(char* course_place);

