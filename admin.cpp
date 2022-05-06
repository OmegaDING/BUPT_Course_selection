#include "public.h"

// 学生选课管理系统
// 2019级 - 电管 - 丁丁的玩具车队 - 小学期作业
// 演示地址： https://www.bilibili.com/video/BV12Z4y1P7QQ?spm_id_from=333.999.0.0
// WeChat：dky1251001066
// GitHub：https://github.com/OmegaDING

//管理员添加学生
void admin_add_student(students student)
{
	char student_course_filename[100];
	FILE* fp_create_student_course, * fp_rewrite_user_student;
	errno_t err;
	sprintf_s(student_course_filename, 100, "bin//student_course//%d.txt", student.id);
	err = fopen_s(&fp_create_student_course, student_course_filename, "w");
	fclose(fp_create_student_course);
	//添加学生选课信息文件。
	err = fopen_s(&fp_rewrite_user_student, "bin//user_student.txt", "a");
	fprintf(fp_rewrite_user_student, "%d %lld %s %s %s %s %s\n", student.id, student.phone_number, student.department,
		student.sex, student.email, student.password, student.name);
	//向学生信息文件中添加该学生的信息。
	fclose(fp_rewrite_user_student);
}


//管理员添加老师
void admin_add_teacher(teachers teacher)
{
	char teacher_course_filename[100];
	FILE* fp_create_teacher_course, * fp_rewrite_user_teacher;
	errno_t err;
	sprintf_s(teacher_course_filename, 100, "bin//teacher_course//%d.txt", teacher.id);
	err = fopen_s(&fp_create_teacher_course, teacher_course_filename, "w+");
	fclose(fp_create_teacher_course);
	//添加教师开课信息文件。
	err = fopen_s(&fp_rewrite_user_teacher, "bin//user_teacher.txt", "a+");
	fprintf(fp_rewrite_user_teacher, "%d %lld %s %s %s %s\n", teacher.id, teacher.phone_number, teacher.department,
		teacher.email, teacher.password, teacher.name);
	fclose(fp_rewrite_user_teacher);
	//向教师信息文件中添加该教师的信息。
}