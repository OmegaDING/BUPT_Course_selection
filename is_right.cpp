#include "public.h"
bool is_password_right(int type, int id, char* input_password) {

	int id_read=0;
	int phone =0;
	char school[20];
	char sex[20];
	char email[100];
	char password[100];
	char name[20];
	char tmp[2000];
	int line_num = 0;


	if (type == 0) {//��ʦ
		FILE* user_teacher_list;
		//���ܹ�����
		fopen_s(&user_teacher_list, "bin//user_teacher.txt", "r");
		while (fgets(tmp, 2000, user_teacher_list) != NULL)
		{
			line_num++;
		}
		fclose(user_teacher_list);
		//��֤��ȷ
		fopen_s(&user_teacher_list, "bin//user_teacher.txt", "r");
		for (int i = 0;i < line_num;i++) {
			fscanf_s(user_teacher_list, ("%d %d %s"), &id_read, &phone, school, 20);
			fscanf_s(user_teacher_list, ("%s"), email, 100);
			fscanf_s(user_teacher_list, ("%s"), password, 100);
			fscanf_s(user_teacher_list, ("%s"), name, 20);

			if (id_read == id) {//������id��ȷ
//				printf("%d %d %s %s %s %s \n", id_read, phone, school, email, password, name);//�����������������
				if (strcmp(input_password, password) == 0)//�Ƚ�id������ȷ
				{
					fclose(user_teacher_list);
					return true;
				}
				else
					fclose(user_teacher_list);
				
			}
		}
	}

	if (type == 1) {//ѧ��
		FILE* user_student_list;
		//���ܹ�����
		fopen_s(&user_student_list, "bin//user_student.txt", "r");
		while (fgets(tmp, 2000, user_student_list) != NULL)
		{
			line_num++;
		}
		fclose(user_student_list);
		//��֤��ȷ
		fopen_s(&user_student_list, "bin//user_student.txt", "r");
		for (int i = 0;i < line_num ;i++) {
			fscanf_s(user_student_list, ("%d %d %s"), &id_read, &phone, school, 20);
			fscanf_s(user_student_list, ("%s"), sex, 20);
			fscanf_s(user_student_list, ("%s"), email, 100);
			fscanf_s(user_student_list, ("%s"), password, 100);
			fscanf_s(user_student_list, ("%s"), name, 20);

			if (id_read == id) {//������id��ȷ
//				printf("%d %d %s %s %s %s %s\n", id_read, phone, school, sex, email, password, name);//�����������������
				if (strcmp(input_password, password) == 0)//�Ƚ�id������ȷ
				{
					fclose(user_student_list);
					return true;
				}
				else
					fclose(user_student_list);
			}
		}
	}

	if (type == 2) {//����Ա
		FILE* user_admin_list;
		fopen_s(&user_admin_list, "bin//user_admin_list.txt", "r");
		while (fgets(tmp, 2000, user_admin_list) != NULL)
		{
			line_num++;
		}
		fclose(user_admin_list);
		//��֤��ȷ
		fopen_s(&user_admin_list, "bin//user_admin_list.txt", "r");
	
		for (int i = 0;i < line_num;i++) {
			fscanf_s(user_admin_list, ("%d "), &id_read);
			fscanf_s(user_admin_list, ("%s"), password, 100);

			if (id_read == id) {//������id��ȷ
//				printf("%d  %s \n", id_read, password);//�����������������

				if (strcmp(input_password, password) == 0)//�Ƚ�id������ȷ
				{
					fclose(user_admin_list);
					return true;
				}
				else
					fclose(user_admin_list);
			}
		}
	}


	return false;//��Ϊû���ҵ�id���Է��ش���
}

//�ж��Ƿ�����ѡ������
int is_allowed_to_choose(int course_id, int student_id) {
	int type = 0;//0Ϊ����-1��Ϊ�������ˣ�-2��Ϊ�Լ��Ŀ����ˣ�-3��Ϊ�Լ��Ŀγ�ͻ��

	if (get_course_limt_population(course_id) <= get_course_population(course_id))
		type = -1;

	if (get_course_chosen_amount_student(student_id) >= 3)
		type = -2;


	//�жϴ���������γ�ʱ���Ƿ��ͻ
	int* course_chosen_id;
	course_chosen_id = get_course_chosen_id_student(student_id);
	for (int i = 0; i < get_course_chosen_amount_student(student_id); i++)
		if (is_course_time_conflict(course_chosen_id[i], course_id))
			type = -3;

	return type;
}



////�ж������Ƿ���ȷ
//bool is_email_right(char* email) {
//	char a[2] = { '.' };
//	char b[2] = { '@' };
//	if (strstr_cnt(email, a) != 0 && strstr_cnt(email, b) != 0)
//		return true;
//	else
//		return false;
//}

//�жϵ绰���Ƿ���ȷ
bool is_phone_num_right(long long phone) {
	if (phone >= 10000000000 && phone<100000000000)
		return true;
	else
		return false;
}

//�ж��Ƿ�����ɾ���γ�
bool is_allowed_to_del_course(int course_id) {
	//�ܵ�����Ŀ϶�ʱ��ʦ���˵Ŀ����Բ�������ɾ
	if (get_course_population(course_id) < 30)
		return true;
	else
		return false;
}


//�ж��Ƿ�������˿γ�
int is_allowed_to_launch_course(courses& cou) {//����-1����γ�����������-2�γ�����ͻ��-3�γ̺ų�ͻ��-4�Ͽ�ʱ���ͻ,-5����Ϣδ�޸�д��0
	
											   
											   //�ж�ѡ�޿�����
	if (get_amount_of_elective_course_teacher(cou.teacher_number) >= 2) //�γ̴�0��ʼ���㣬<2Ϊ����
	{
		if(cou.ismust==false)
			return -1;
	}




	//�жϿγ�����γ̺��Ƿ��ͻ
	courses* all_course;
	all_course = get_course_info();
	for (int i = 0; i < get_total_course_num(); i++) {
		if (strcmp(cou.name, all_course[i].name) == 0)//�γ�����ͻ
			return -2;
		if (cou.id ==all_course[i].id)//�γ̺ų�ͻ
			return -3;
	}
	free(all_course);





	//�ж��Ͽ�ʱ���Ƿ��ͻ
	char dou[5] = { ',' };
	int* used_time;
	used_time = time_have_been_used_teacher(cou.teacher_number);

	int course_time[80]{ '0' };
	int dou_num = strstr_cnt(cou.time_s, dou);//���Ÿ���
	for (int h = 0, k = 0; h < (dou_num + 2 * (dou_num + 1)); h++) {
		k = (h / 3);//hΪ���ַ����е�λ�ã�kΪ�ڵڼ���

		if (h % 3 != 2) {
			if (h == 3 * k) {
				course_time[k] += (cou.time_s[h] - 48) * 10;
			}
			else
				course_time[k] += (cou.time_s[h] - 48);
		}
	}
	int total_time_used_per_week_teacher = get_total_time_used_per_week_teacher(cou.teacher_number);
	for (int i=0;i<dou_num+1;i++)
		for (int k = 0; k < total_time_used_per_week_teacher; k++) {
			if (course_time[i] == used_time[k])
				return -4;
		}

	if (cou.start_year == 0 || cou.start_week == 0 || cou.term == 0 || cou.term2 == 0 || cou.end_year == 0 || cou.end_week == 0)
		return -5;
	if (cou.book[0] == '\0' || cou.name[0]=='\0' || cou.time_s[0] =='\0' ||cou.place[0] == '\0' || cou.school[0] =='\0')
		return -5;



	//��������
	return 0;
}


//�ж�������ȷ
bool is_email_right(char* email)
{
	int position_of_at = 0, position_of_dot = 0;
	for (int i = 0; email[i] != '\0'; i++)
	{
		if ((email[i] >= 48 && email[i] <= 57) || (email[i] >= 65 && email[i] <= 90) || (email[i] >= 97 && email[i] <= 122))
			;
		else if (email[i] == 64)
		{
			if (i == 0)
				return false;
			//��һλ������"@'��
			position_of_at = i;
			break;
		}
		else
			return false;
	}
	//���"@"ǰ����ַ��ĺϷ��ԡ�
	if (position_of_at == 0)
		return false;
	//����Ƿ���"@"��
	for (int i = position_of_at + 1; email[i] != '\0'; i++)
	{
		if ((email[i] >= 48 && email[i] <= 57) || (email[i] >= 65 && email[i] <= 90) || (email[i] >= 97 && email[i] <= 122))
			;
		else if (email[i] == 46)
		{
			if (i == position_of_at + 1)
				return false;
			//"@"���治�ܽ�����"."��
			position_of_dot = i;
			break;
		}
		else
			return false;
	}
	//���"@"��"."֮����ַ��ĺϷ��ԡ�
	if (position_of_dot == 0)
		return false;
	//����Ƿ���"."��
	if (email[position_of_dot + 1] == '\0')
		return false;
	//���"."�����Ƿ�Ϊ�ա�
	for (int i = position_of_dot + 1; email[i] != '\0'; i++)
	{
		if ((email[i] >= 65 && email[i] <= 90) || (email[i] >= 97 && email[i] <= 122))
			;
		else
			return false;
	}
	//���"."֮����ַ��ĺϷ��ԣ��趨Ϊֻ��������ĸ��
	return true;
}

//����Ͽ�ʱ���Ƿ���ȷ
bool examine_course_time(char* course_time)
{
	int position_of_at = 0, position_of_dot = 0;
	for (int i = 0; course_time[i] != '\0'; i++)
	{
		if ((i + 1) % 3 != 0)
		{
			if ((course_time[i] < 48) || (course_time[i] > 57))
				return false;
			//�ж��Ƿ�Ϊ���֡�
			else if ((course_time[i] == 48) || (course_time[i + 1] == 48))
				return false;
			//�ж�����������Ƿ�Ϊ"00"��
		}
		else
		{
			if (course_time[i] != 44)
				return false;
			//�жϷָ����Ƿ�Ϊ","��
		}
	}
	return true;
}

//����Ͽεص���ȷ
bool examine_course_place(char* course_place)
{
	int i = 0;
	for (; course_place[i] != '\0'; i++)
	{
		if (i == 1) {
			if (course_place[i] != 45)
				return false;
		}
		//�жϵڶ�λ�Ƿ�Ϊ"-"��
		else {
			if ((course_place[i] < 48) || (course_place[i] > 57))
				return false;
		}
		//�ж�����Ϊ�Ƿ�Ϊ���֡�
		if ((i == 0) || (i == 2)) {
			if (course_place[i] == 48)
				return false;
		}
		//�жϵ�һλ�����λ�Ƿ�Ϊ�㡣
		if (i == 3) {
			if ((course_place[i] == 48) && (course_place[i+1] == 48))
				return false;
		}
		//�жϵ���λ�͵���λ�Ƿ��Ϊ�㡣
	}
	if (i < 5)
		return false;
	//�ж��Ͽεص���Ϣ�Ƿ�С����λ��
	return true;
}