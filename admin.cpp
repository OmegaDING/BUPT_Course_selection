#include "public.h"

// ѧ��ѡ�ι���ϵͳ
// 2019�� - ��� - ��������߳��� - Сѧ����ҵ
// ��ʾ��ַ�� https://www.bilibili.com/video/BV12Z4y1P7QQ?spm_id_from=333.999.0.0
// WeChat��dky1251001066
// GitHub��https://github.com/OmegaDING

//����Ա���ѧ��
void admin_add_student(students student)
{
	char student_course_filename[100];
	FILE* fp_create_student_course, * fp_rewrite_user_student;
	errno_t err;
	sprintf_s(student_course_filename, 100, "bin//student_course//%d.txt", student.id);
	err = fopen_s(&fp_create_student_course, student_course_filename, "w");
	fclose(fp_create_student_course);
	//���ѧ��ѡ����Ϣ�ļ���
	err = fopen_s(&fp_rewrite_user_student, "bin//user_student.txt", "a");
	fprintf(fp_rewrite_user_student, "%d %lld %s %s %s %s %s\n", student.id, student.phone_number, student.department,
		student.sex, student.email, student.password, student.name);
	//��ѧ����Ϣ�ļ�����Ӹ�ѧ������Ϣ��
	fclose(fp_rewrite_user_student);
}


//����Ա�����ʦ
void admin_add_teacher(teachers teacher)
{
	char teacher_course_filename[100];
	FILE* fp_create_teacher_course, * fp_rewrite_user_teacher;
	errno_t err;
	sprintf_s(teacher_course_filename, 100, "bin//teacher_course//%d.txt", teacher.id);
	err = fopen_s(&fp_create_teacher_course, teacher_course_filename, "w+");
	fclose(fp_create_teacher_course);
	//��ӽ�ʦ������Ϣ�ļ���
	err = fopen_s(&fp_rewrite_user_teacher, "bin//user_teacher.txt", "a+");
	fprintf(fp_rewrite_user_teacher, "%d %lld %s %s %s %s\n", teacher.id, teacher.phone_number, teacher.department,
		teacher.email, teacher.password, teacher.name);
	fclose(fp_rewrite_user_teacher);
	//���ʦ��Ϣ�ļ�����Ӹý�ʦ����Ϣ��
}