#include "public.h"

// ѧ��ѡ�ι���ϵͳ
// 2019�� - ��� - ��������߳��� - Сѧ����ҵ
// ��ʾ��ַ�� https://www.bilibili.com/video/BV12Z4y1P7QQ?spm_id_from=333.999.0.0
// WeChat��dky1251001066
// GitHub��https://github.com/OmegaDING

//�ַ�������ת��
void TcharToChar(const TCHAR* tchar, char* _char)//tcharתchar//wchar_t
{
	int iLength;
	//��ȡ�ֽڳ���   
	iLength = WideCharToMultiByte(CP_ACP, 0, tchar, -1, NULL, 0, NULL, NULL);
	//��tcharֵ����_char    
	WideCharToMultiByte(CP_ACP, 0, tchar, -1, _char, iLength, NULL, NULL);
}
void CharToTchar(const char* _char, TCHAR* tchar)//charתtchar��wchar_t
{
	int iLength;
	iLength = MultiByteToWideChar(CP_ACP, 0, _char, strlen(_char) + 1, NULL, 0);
	MultiByteToWideChar(CP_ACP, 0, _char, strlen(_char) + 1, tchar, iLength);
}

//��ȡ�ܿγ���
int get_total_course_num(void) {
	int total_course_num = 0;
	char tmp[2000];
	FILE* course_list;
	//���ܹ�����
	fopen_s(&course_list, "bin//course_list.txt", "r");
	if(course_list != NULL)
		while (fgets(tmp, 2000, course_list) != NULL)
		{
			total_course_num++;
		}
	if(course_list !=NULL)
		fclose(course_list);
//	printf("�ܿγ���%d\n", total_course_num);
	return total_course_num;
}

//��ȡ��ѧ����
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
	//	printf("��ѧ����%d\n", total_student_num);
	return total_student_num;
}

//��ȡ�ܽ�ʦ��
int get_total_teacher_num(void) {
	int total_teacher_num = 0;
	char tmp[2000];
	FILE* teacher_list;

	fopen_s(&teacher_list, "bin//user_teacher.txt", "r");
	while (fgets(tmp, 2000, teacher_list) != NULL)
	{
		total_teacher_num++;
	}
	fclose(teacher_list);
	//	printf("�ܽ�ʦ��%d\n", total_student_num);
	return total_teacher_num;
}

//��ѯһ���ַ�������һ���ַ����г��ֵĴ���
int strstr_cnt(const char* string, const char* substring) {
	int i, j, k, count = 0;
	for (i = 0;string[i];i++)
		for (j = i, k = 0;string[j] == substring[k];j++, k++)
			if (!substring[k + 1])
				count++;
	return(count);
}



//��ȡ�γ���Ϣ����ṹ������
courses* get_course_info(void) {

	FILE* course_list;
	//���ܹ�����
	int total_course_num = get_total_course_num();
	//��ȡ��Ϣ
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
		dou_num = strstr_cnt(time, dou);//���Ÿ���
		for (int n = 0; n < 80; n++)
			course_out[i].time[n] = 0;
		for (int h = 0, k = 0; h < (dou_num + 2 * (dou_num + 1)); h++) {
			k = (h / 3);//hΪ���ַ����е�λ�ã�kΪ�ڵڼ���

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




//��ȡѧ����Ϣ����ṹ������
students* get_student_info(void) {

	FILE* student_list;
	//���ܹ�����
	int total_student_num = get_total_student_num();
	//��ȡ��Ϣ
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

//��ȡ��ʦ��Ϣ����ṹ������
teachers* get_teacher_info(void) {

	FILE* teacher_list;
	//�ܽ�ʦ����
	int total_teacher_num = get_total_teacher_num();
	//��ȡ��Ϣ
	int id_teacher = 0;
	long long phone_number = 0;
	char school[100],  email[100], password[100], name[100];
	fopen_s(&teacher_list, "bin//user_teacher.txt", "r");

	teachers* teacher_out;
	teacher_out = (teachers*)malloc(sizeof(teachers) * total_teacher_num + sizeof(teachers));


	for (int i = 0; i < total_teacher_num; i++) {
		fscanf_s(teacher_list, ("%d"), &id_teacher);
		fscanf_s(teacher_list, ("%lld"), &phone_number);
		fscanf_s(teacher_list, ("%s"), school, 100);
		fscanf_s(teacher_list, ("%s"), email, 100);
		fscanf_s(teacher_list, ("%s"), password, 100);
		fscanf_s(teacher_list, ("%s"), name, 100);

		teacher_out[i].id = id_teacher;
		teacher_out[i].phone_number = phone_number;
		for (int h = 0; h < 100; h++)
			teacher_out[i].department[h] = school[h];
		for (int h = 0; h < 100; h++)
			teacher_out[i].email[h] = email[h];
		for (int h = 0; h < 100; h++)
			teacher_out[i].password[h] = password[h];
		for (int h = 0; h < 100; h++)
			teacher_out[i].name[h] = name[h];

	}
	fclose(teacher_list);
	return teacher_out;
}



// ͸����ͼ����
// ������
//		dstimg: Ŀ�� IMAGE ����ָ�롣NULL ��ʾĬ�ϴ���
//		x, y:	Ŀ����ͼλ��
//		srcimg: Դ IMAGE ����ָ�롣NULL ��ʾĬ�ϴ���
//		transparentcolor: ͸��ɫ��srcimg �ĸ���ɫ�����Ḵ�Ƶ� dstimg �ϣ��Ӷ�ʵ��͸����ͼ
void transparentimage(IMAGE* dstimg, int x, int y, IMAGE* srcimg, UINT transparentcolor)
{
	HDC dstDC = GetImageHDC(dstimg);
	HDC srcDC = GetImageHDC(srcimg);
	int w = srcimg->getwidth();
	int h = srcimg->getheight();

	// ʹ�� Windows GDI ����ʵ��͸��λͼ
	TransparentBlt(dstDC, x, y, w, h, srcDC, 0, 0, w, h, transparentcolor);
}


//��ȡ����γ̵�ǰ����
int get_course_population(int course_id) {
	//��ȡ�γ�������С
	FILE* course_file;
	char file_id[100];
	int course_population=0;
	int stu_id = 0;
	errno_t err;
		sprintf_s(file_id, "bin\\course_students\\%d.txt", course_id);
		err = fopen_s(&course_file, file_id, "r");
		course_population = 0;
		//if (course_file != NULL)
		{
	//		printf("�Բ�\n");
			while ((fscanf_s(course_file, ("%d"), &stu_id)) != EOF)
				course_population++;
			fclose(course_file);
		}
		//		printf("�κ�Ϊ%d�Ŀγ�����%d\n",course_id,course_population);
		return course_population;

}

//��ȡĳ�γ���������
int get_course_limt_population(int course_id) {
	courses* course_o;
//	course_o = (courses*)malloc(sizeof(courses) * get_total_course_num() + sizeof(courses));
	int limt = 0;

	course_o = get_course_info();
	int i = 0;
	for (; i < get_total_course_num(); i++) {
		if (course_o[i].id == course_id) {
			limt = course_o[i].limit_number;
			break;
		}
			
	}


	
	free(course_o);
//	printf("�κ�Ϊ%d�Ŀγ���������Ϊ%d\n", course_id, course_o[i].limit_number);
	return limt;

}

//��ȡѧ����ѡ������
int get_course_chosen_amount_student(int student_id) {
	
	FILE* student_file;
	char file_id[100];
	int course_chosen_amount = 0;
	int stu_id = 0;//�����ж��Ƿ�����һ������ʱ����

	sprintf_s(file_id, "bin\\student_course\\%d.txt", student_id);
	fopen_s(&student_file, file_id, "r");
	course_chosen_amount = 0;
	//if (student_file != NULL)
	{
		while (fscanf_s(student_file, ("%d"), &stu_id) != EOF)
			course_chosen_amount++;
		fclose(student_file);

	}
//	printf("ѧ��Ϊ%d����ѡ����%d\n", student_id, course_chosen_amount);
	return course_chosen_amount;
}

//��ȡĳѧ����ѡ�εĿκ�
int* get_course_chosen_id_student(int student_id) {
	FILE* student_file;
	char file_id[100];

	sprintf_s(file_id, "bin\\student_course\\%d.txt", student_id);
	fopen_s(&student_file, file_id, "r");


	int* course_chosen_id;
	course_chosen_id = (int*)malloc(sizeof(int) * get_course_chosen_amount_student(student_id));
	//if (student_file != NULL)
	{
		for (int i = 0; i < get_course_chosen_amount_student(student_id); i++) {
			fscanf_s(student_file, ("%d"), &course_chosen_id[i]);
		}
		fclose(student_file);

	}
	
	//for (int i = 0; i < get_course_chosen_amount_student(student_id); i++)
	//	printf("ѧ��Ϊ%d��ѧ����ѡ����%d\n", student_id, course_chosen_id[i]);
	return course_chosen_id;
}


//��ȡһ����ʦ�ж��ٽڿ�
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
	//	printf("\n�Ѿ�����Ŀ���Ϊ%d ", count);
	fclose(teacher_course);
	return count;//һ����ʦ�ж��ٽڿ�
}


//��ȡĳ��ʦ�Ŀγ̱�����飬��ʦ�̿οκ�
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


//�ж������γ�ʱ���Ƿ��ͻ
bool is_course_time_conflict(int course_id_1, int course_id_2) {
	courses* all_courses;
	int time_1[80] = { 0 }, time_2[80] = { 0 };
	char dou[5] = { ',' };
	all_courses = get_course_info();
	int ci_shu_1 = 0, ci_shu_2 = 0;
	for (int i = 0; i < get_total_course_num(); i++) {
		if (all_courses[i].id == course_id_1) {
			ci_shu_1 = 1 + strstr_cnt(all_courses[i].time_s, dou);
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
//	printf("����1��%d\n", ci_shu_1);
	for (int i = 0; i < ci_shu_1; i++) {
		for (int j = 0; j < ci_shu_2; j++) {
			if (time_1[i] == time_2[j])
				return true;
		}
	}
	return false;
}



//���������γ�����
void courses_copy(courses* copy_out, courses* copy_in) {
	for (int i = 0; i < get_total_course_num(); i++) {

		copy_out[i].id = copy_in[i].id;
		for (int n = 0; n < 100; n++) {
			copy_out[i].book[n] = copy_in[i].book[n];
			copy_out[i].name[n] = copy_in[i].name[n];
			copy_out[i].time_s[n] = copy_in[i].time_s[n];
			copy_out[i].term_end[n] = copy_in[i].term_end[n];
			copy_out[i].term_start[n] = copy_in[i].term_start[n];
		}
		copy_out[i].class_hours = copy_in[i].class_hours;
		copy_out[i].end_mounth = copy_in[i].end_mounth;
		copy_out[i].end_year = copy_in[i].end_year;
		copy_out[i].ismust = copy_in[i].ismust;
		copy_out[i].limit_number = copy_in[i].limit_number;
		copy_out[i].score = copy_in[i].limit_number;
		for (int n = 0; n < 50; n++)
			copy_out[i].place[n] = copy_in[i].place[n];
		copy_out[i].start_mounth = copy_in[i].start_mounth;
		copy_out[i].start_year = copy_in[i].start_year;
		copy_out[i].teacher_number = copy_in[i].teacher_number;
		for (int n = 0; n < 80; n++)
			copy_out[i].time[n] = copy_in[i].time[n];

	}

}

//���������γ�
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


//������ѧ��id�Ĳ���ȫ�ṹ������ȫ�ṹ
void load_student(person& current_user) {

	students* all_student;
	all_student = get_student_info();
	for (int i = 0; i < get_total_student_num(); i++) {
		if (current_user.stu.id == all_student[i].id)
		{
			current_user.stu.phone_number = all_student[i].phone_number;
			for (int h = 0; h < 100; h++)
				current_user.stu.department[h] = all_student[i].department[h];
			
			for (int h = 0; h < 100; h++)
				current_user.stu.sex[h] = all_student[i].sex[h];
			for (int h = 0; h < 100; h++)
				current_user.stu.email[h] = all_student[i].email[h];
			for (int h = 0; h < 100; h++)
				current_user.stu.password[h] = all_student[i].password[h];
			for (int h = 0; h < 100; h++)
				current_user.stu.name[h] = all_student[i].name[h];
			free(all_student);
			return;
		}
	}



	free(all_student);
	return;
}


//��ȡĳ��ʦ���̿ογ̽ṹ����
courses* get_teacher_course_info(int teacher_id) {
	courses* all_courses;
	all_courses = get_course_info();
	courses* teacher_course;
	teacher_course = (courses*)malloc(sizeof(courses) * count_course_num_teacher(teacher_id));

	for (int i = 0,n=0; i < get_total_course_num(); i++) {
		if (all_courses[i].teacher_number == teacher_id) {
			courses_copy_single(teacher_course[n], all_courses[i]);
				n++;
		}
	}



	free(all_courses);


	return teacher_course;
}


//����id�����ʦ
void load_teacher(person& current_user) {
	teacher* all_teacher;
	all_teacher = get_teacher_info();
	for (int i = 0; i < get_total_student_num(); i++) {
		if (current_user.tea.id == all_teacher[i].id)
		{
			current_user.tea.phone_number = all_teacher[i].phone_number;
			for (int h = 0; h < 100; h++)
				current_user.tea.department[h] = all_teacher[i].department[h];
			for (int h = 0; h < 100; h++)
				current_user.tea.email[h] = all_teacher[i].email[h];
			for (int h = 0; h < 100; h++)
				current_user.tea.password[h] = all_teacher[i].password[h];
			for (int h = 0; h < 100; h++)
				current_user.tea.name[h] = all_teacher[i].name[h];
			free(all_teacher);
			return;
		}
	}



	free(all_teacher);
	return;
}


//��ȡ����γ���ѧ��id����
int* get_course_chosen_student_list(int course_id) {
	int* student_id_list;
	student_id_list = (int*)malloc(sizeof(int) * get_course_population(course_id));
	
	FILE* course_file;
	char file_id[100];
	int course_population = get_course_population(course_id);

	sprintf_s(file_id, "bin\\course_students\\%d.txt", course_id);
	fopen_s(&course_file, file_id, "r");
	//	if (course_file != NULL)
	{
		//		printf("�Բ�\n");
		for (int i = 0; i < course_population; i++)
			fscanf_s(course_file, ("%d"), &student_id_list[i]);
		
		fclose(course_file);
	}
	
	return student_id_list;
}

//��������ѧ����Ϣ
void students_copy_single(students& copy_out, student& copy_in) {


	copy_out.id = copy_in.id;
	copy_out.phone_number = copy_in.phone_number;
	for (int n = 0; n < 100; n++) {
		copy_out.department[n] = copy_in.department[n];
		copy_out.name[n] = copy_in.name[n];
		copy_out.email[n] = copy_in.email[n];
		copy_out.password[n] = copy_in.password[n];
		copy_out.sex[n] = copy_in.sex[n];
	}
	

}


//��ȡĳ�γ�ÿ���ܹ��ж��ٽڿ�
int get_course_time_amount(int course_id) {
	courses* all_courses;
	all_courses = get_course_info();
	int course_time=0;
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
	return -1;
}






