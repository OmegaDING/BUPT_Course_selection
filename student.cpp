#include"public.h"

//ȷ��ѧ���Ѿ�ѡ�Σ����ļ��м��������Ϣ
void student_select_course(int student_number, int course_number) {
	char student_course_filename[50], course_students_filename[50];
	FILE* fp_rewrite_student_course, * fp_rewrite_course_students;
	errno_t err;
	sprintf_s(student_course_filename, 50, "bin//student_course//%d.txt", student_number);
	err = fopen_s(&fp_rewrite_student_course, student_course_filename, "a+");
	fprintf(fp_rewrite_student_course, "%d ", course_number);
	fclose(fp_rewrite_student_course);
	//��ѧ��������Ϣ�ļ�����Ӹÿγ̡�
	sprintf_s(course_students_filename, 50, "bin//course_students//%d.txt", course_number);
	err = fopen_s(&fp_rewrite_course_students, course_students_filename, "a+");
	fprintf(fp_rewrite_course_students, "%d ", student_number);
	fclose(fp_rewrite_course_students);
	//��γ̵�ѧ��������Ϣ�ļ�����Ӹ�ѧ����ѧ�š�
	return;
}


//���ؿγ̱��,����ѡ������
void sort_accroding_to_number_of_student(int order[]) {//������order��������д��γ̺�����//�����ź���Ŀγ��������

	int total_course_num = 0;

	total_course_num = get_total_course_num();




	FILE* course_f;
	int stu_id = 0;
	int* course_population = NULL;
	course_population = (int*)malloc(1000000 * sizeof(int));//��Ϊ�γ̺���λ���������1000000����
	//for (int i = 0; i < 10000000000; i++) {

	//	course_population[i] = 0;
	//	//printf("��%d\n", i);
	//}



	//��ȡ���пγ�������С
	char file_id[100];
	for (int course_num = 100001; course_num < 100001 + total_course_num; course_num++) {
		sprintf_s(file_id, "bin\\course_students\\%d.txt", course_num);
		fopen_s(&course_f, file_id, "r");
		course_population[course_num] = 0;
		if (course_f == NULL)
		{
			continue;
		}
		while (fscanf_s(course_f, ("%d"), &stu_id) != EOF)
			course_population[course_num]++;
		fclose(course_f);
		//		printf("�κ�Ϊ%d�Ŀγ�����%d\n",course_num,course_population[course_num]);
	}


	int* course_population_order;//�洢�γ̱��
	course_population_order = (int*)malloc(sizeof(int) * 1000000);
	for (int course_num = 100001, i = 0; course_num < 100001 + total_course_num; i++, course_num++) {
		course_population_order[i] = course_num;
	}

	//�����γ̱����һ������
	for (int course_num = 100001, i = 0; course_num < 100001 + total_course_num; i++, course_num++) {
		for (int course_num = 100001, i = 0; course_num < 100001 + total_course_num; i++, course_num++) {
			if (course_population[course_num] < course_population[course_num + 1]) {
				//��������
				int tmp_course_population = 0;
				tmp_course_population = course_population[course_num + 1];
				course_population[course_num + 1] = course_population[course_num];
				course_population[course_num] = tmp_course_population;
				//����γ̺�
				int tmp_course_num = 0;
				tmp_course_num = course_population_order[i + 1];
				course_population_order[i + 1] = course_population_order[i];
				course_population_order[i] = tmp_course_num;

			}

		}
	}
	//	printf("���� ѡ������\n");
	//	for (int course_num = 100001; course_num < 100001 + total_course_num; course_num++) {
	//		printf("%d\n",course_population[course_num]);
	//	}
	//
		//printf("����_�γ̺�\n");
		//for (int course_num = 100001,i=0; course_num < 100001 + total_course_num;i++, course_num++) {
		//	printf("%d\n", course_population_order[i]);
		//}

	for (int course_num = 100001, i = 0; course_num < 100001 + total_course_num; i++, course_num++) {
		order[i] = course_population_order[i];
	}

	free(course_population_order);
	free(course_population);

	return ;
}

//���ؿγ̱��,���ݿ�����
void sort_accroding_to_number_of_left(int order[]) {//������order��������д��γ̺�����//�����ź���Ŀγ��������

	int total_course_num = 0;

	total_course_num = get_total_course_num();




	FILE* course_f;
	int stu_id = 0;
	int* course_population = NULL;
	course_population = (int*)malloc((1000000) * sizeof(int));//��Ϊ�γ̺���λ���������1000000����
	//for (int i = 0; i < 10000000000; i++) {

	//	course_population[i] = 0;
	//	//printf("��%d\n", i);
	//}



	//��ȡ���пγ�������С
	char file_id[100];
	for (int course_num = 100001; course_num < 100001 + total_course_num; course_num++) {
		sprintf_s(file_id, "bin\\course_students\\%d.txt", course_num);
		fopen_s(&course_f, file_id, "r");
		course_population[course_num] = 0;
		if (course_f == NULL)
			continue;
		while (fscanf_s(course_f, ("%d"), &stu_id) != EOF)
			course_population[course_num]++;
		
		fclose(course_f);
		//		printf("�κ�Ϊ%d�Ŀγ�����%d\n",course_num,course_population[course_num]);
	}

	//��ȡ���пγ̿�������С
	int* course_left_population;
	course_left_population = (int*)malloc(sizeof(int) * 1000000);
	for (int course_num = 100001, i = 0; course_num < 100001 + total_course_num; i++, course_num++)
	{
		course_left_population[course_num] = get_course_limt_population(course_num) - course_population[course_num];
	}


	int* course_population_order;//�洢�γ̱��
	course_population_order = (int*)malloc(sizeof(int) * 1000000);
	for (int course_num = 100001, i = 0; course_num < 100001 + total_course_num; i++, course_num++) {
		course_population_order[i] = course_num;
	}

	//�����γ̱����һ������
	for (int course_num = 100001, i = 0; course_num < 100001 + total_course_num; i++, course_num++) {
		for (int course_num = 100001, i = 0; course_num < 100001 + total_course_num; i++, course_num++) {
			if (course_left_population[course_num] < course_left_population[course_num + 1]) {
				//��������
				int tmp_course_left_population = 0;
				tmp_course_left_population = course_left_population[course_num + 1];
				course_left_population[course_num + 1] = course_left_population[course_num];
				course_left_population[course_num] = tmp_course_left_population;
				//����γ̺�
				int tmp_course_num = 0;
				tmp_course_num = course_population_order[i + 1];
				course_population_order[i + 1] = course_population_order[i];
				course_population_order[i] = tmp_course_num;

			}

		}
	}
	//	printf("���� ѡ������\n");
	//	for (int course_num = 100001; course_num < 100001 + total_course_num; course_num++) {
	//		printf("%d\n",course_population[course_num]);
	//	}
	//
		//printf("����_�γ̺�\n");
		//for (int course_num = 100001,i=0; course_num < 100001 + total_course_num;i++, course_num++) {
		//	printf("%d\n", course_population_order[i]);
		//}

	for (int course_num = 100001, i = 0; course_num < 100001 + total_course_num; i++, course_num++) {
		order[i] = course_population_order[i];
	}
	free(course_left_population);
	free(course_population_order);
	free(course_population);

	return;
}



//���������ؿγ̽ṹ����
courses* search_course(char* key_word) {
	courses* cou;
	cou = get_course_info();
	courses* course_search_result;
	course_search_result = (courses*)malloc(sizeof(courses) * get_total_course_num() );


	for (int i = 0,k=0;i < get_total_course_num();i++) {
		if ((strstr_cnt(cou[i].name, key_word) != 0 )||(strstr_cnt(cou[i].school,key_word) !=0)) 
		{
			
			course_search_result[k].id = cou[i].id;
			for (int n = 0; n < 100; n++) {
				course_search_result[k].book[n] = cou[i].book[n];
				course_search_result[k].name[n] = cou[i].name[n];
				/*course_search_result[k].time_s[n] = cou[i].time_s[n];
				course_search_result[k].term_end[n] = cou[i].term_end[n];
				course_search_result[k].term_start[n] = cou[i].term_start[n];*/
			}
			/*course_search_result[k].class_hours = cou[i].class_hours;
			course_search_result[k].end_mounth = cou[i].end_mounth;
			course_search_result[k].end_year = cou[i].end_year;
			course_search_result[k].ismust = cou[i].ismust;*/
			course_search_result[k].limit_number = cou[i].limit_number;
			course_search_result[k].score = cou[i].limit_number;
			for (int n = 0; n < 50; n++)
				course_search_result[k].place[n] = cou[i].place[n];
			/*course_search_result[k].start_mounth = cou[i].start_mounth;
			course_search_result[k].start_year = cou[i].start_year;*/
			course_search_result[k].teacher_number = cou[i].teacher_number;
			for(int n=0 ;n<80;n++)
				course_search_result[k].time[n] = cou[i].time[n];
			for (int x = 0;x < 100;x++)
				course_search_result[k].school[x] = cou[i].school[x];

			course_search_result[k].ismust = cou[i].ismust;

			k++;
		}
	}
	free(cou);
	return course_search_result;
}


//���������ط��Ͽγ̵�����
int get_search_course_amount(char* key_word) {
	courses* cou;
	cou = get_course_info();
	courses* course_search_result;
	course_search_result = (courses*)malloc(sizeof(courses) * get_total_course_num());

	int k = 0;
	for (int i = 0; i < get_total_course_num(); i++) {
		if ((strstr_cnt(cou[i].name, key_word) != 0)  || (strstr_cnt(cou[i].school, key_word) != 0)) {
			/*course_search_result[k].id = cou[i].id;
			for (int n = 0; n < 100; n++) {
				course_search_result[k].book[n] = cou[i].book[n];
				course_search_result[k].name[n] = cou[i].name[n];
				course_search_result[k].time_s[n] = cou[i].time_s[n];
				course_search_result[k].term_end[n] = cou[i].term_end[n];
				course_search_result[k].term_start[n] = cou[i].term_start[n];
			}
			course_search_result[k].class_hours = cou[i].class_hours;
			course_search_result[k].end_mounth = cou[i].end_mounth;
			course_search_result[k].end_year = cou[i].end_year;
			course_search_result[k].ismust = cou[i].ismust;
			course_search_result[k].limit_number = cou[i].limit_number;
			course_search_result[k].score = cou[i].limit_number;
			for (int n = 0; n < 50; n++)
				course_search_result[k].place[n] = cou[i].place[n];
			course_search_result[k].start_mounth = cou[i].start_mounth;
			course_search_result[k].start_year = cou[i].start_year;
			course_search_result[k].teacher_number = cou[i].teacher_number;
			for (int n = 0; n < 80; n++)
				course_search_result[k].time[n] = cou[i].time[n];*/

			k++;
		}
	}
	free(cou);
	free(course_search_result);
	return k;
}



//����ѡ����������γ̣������γ̽ṹ����
void sort_number_of_stu(courses* cou_order) {
	courses* total_cou;
	total_cou = get_course_info();
	int* cou_num_order;
	cou_num_order = (int*)malloc(sizeof(int) * get_total_course_num());
	sort_accroding_to_number_of_student(cou_num_order);
	for(int i=0;i<get_total_course_num();i++)
		for (int j = 0; j < get_total_course_num(); j++)
			if (total_cou[j].id == cou_num_order[i]) {
	//			cou_order[i].id = cou_num_order[i];

				courses_copy_single((cou_order[i]), (total_cou[j]));

			/*	sprintf_s(tmp_char, "%d", cou_order[i].id);
				CharToTchar(tmp_char, tmp_wchar);
				MessageBox(NULL, tmp_wchar, TEXT("Msg"), 0);*/

				
			}

	free(cou_num_order);
	free(total_cou);
	return ;
}


//���ݿ���������γ̣������γ̽ṹ����
void sort_number_of_left(courses *order) {

	courses* total_cou;
	total_cou = get_course_info();
	int* cou_num_order;
	cou_num_order = (int*)malloc(sizeof(int) * get_total_course_num());
	sort_accroding_to_number_of_left(cou_num_order);
	for (int i = 0; i < get_total_course_num(); i++)
		for (int j = 0; j < get_total_course_num(); j++)
			if (total_cou[j].id == cou_num_order[i]) {
				//			cou_order[i].id = cou_num_order[i];

				courses_copy_single((order[i]), (total_cou[j]));

				/*	sprintf_s(tmp_char, "%d", cou_order[i].id);
					CharToTchar(tmp_char, tmp_wchar);
					MessageBox(NULL, tmp_wchar, TEXT("Msg"), 0);*/


			}

	free(cou_num_order);
	free(total_cou);
	return ;






}

//����ĳѧ����ѡ��
void course_chosen(int student_id,courses* cour_chosen) {
	int* cour_chosen_id;
	cour_chosen_id = get_course_chosen_id_student(student_id);
	courses* all_courses;
	all_courses = get_course_info();
	for (int j = 0, k = 0; j < get_total_course_num(); j++) {
		for (int i = 0; i < get_total_course_num(); i++) {
			if (all_courses[i].id == cour_chosen_id[j]) {
				courses_copy_single(cour_chosen[k], all_courses[i]);


				k++;
			}
		}
	}

	return;
}


//ɾ��ѧ���γ̣�ѧ��ɾ��
void student_delete_course(int student_number, int course_number) {
	char student_course_filename[50], course_students_filename[50], student_id[11] = { 0 }, course_id[7] = { 0 }, linedata[11] = { 0 };
	FILE* fp_read_student_course, * fp_rewrite_student_course, * fp_read_course_students, * fp_rewrite_course_students;
	errno_t err;
	sprintf_s(student_course_filename, 50, "bin//student_course//%d.txt", student_number);
	err = fopen_s(&fp_read_student_course, student_course_filename, "r+");
	err = fopen_s(&fp_rewrite_student_course, "bin//student_course//tmp.txt", "w+");
	_itoa_s(course_number, course_id, 10);
	while ((fscanf_s(fp_read_student_course, "%s", linedata, 11)) != EOF) {
		if (strcmp(linedata, course_id) != 0)
			fprintf(fp_rewrite_student_course, "%s ", linedata);
	}
	fclose(fp_read_student_course);
	fclose(fp_rewrite_student_course);
	remove(student_course_filename);
	rename("bin//student_course//tmp.txt", student_course_filename);
	//ɾ��ѧ��������Ϣ�ļ��еĸÿγ̡�
	sprintf_s(course_students_filename, 50, "bin//course_students//%d.txt", course_number);
	err = fopen_s(&fp_read_course_students, course_students_filename, "r+");
	err = fopen_s(&fp_rewrite_course_students, "bin//course_students//tmp.txt", "w+");
	_itoa_s(student_number, student_id, 10);
	while ((fscanf_s(fp_read_course_students, "%s", linedata, 11)) != EOF) {
		if (strcmp(linedata, student_id) != 0)
			fprintf(fp_rewrite_course_students, "%s ", linedata);
	}
	fclose(fp_read_course_students);
	fclose(fp_rewrite_course_students);
	remove(course_students_filename);
	rename("bin//course_students//tmp.txt", course_students_filename);
	//ɾ���γ̵�ѧ��������Ϣ�ļ��и�ѧ����ѧ�š�
	return;
}


//ѧ�����ĵ绰
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

	for (int i = 0; i < total_student_num; i++)
		fprintf_s(student_file, "%d %lld %s %s %s %s %s\n", all_stu[i].id, all_stu[i].phone_number, all_stu[i].department, all_stu[i].sex, all_stu[i].email, all_stu[i].password, all_stu[i].name);

	fclose(student_file);




	free(all_stu);
	return 0;
}

//ѧ����������
int student_email_change(int student_id, char*email) {

	int total_student_num = get_total_student_num();
	students* all_stu;
	all_stu = get_student_info();
	for (int i = 0; i < get_total_student_num(); i++) {
		if (all_stu[i].id == student_id) {
			strcpy_s(all_stu[i].email, email);
			break;
		}
	}
	FILE* student_file;

	fopen_s(&student_file, "bin//user_student.txt", "w");

	for (int i = 0; i < total_student_num; i++)
		fprintf_s(student_file, "%d %lld %s %s %s %s %s\n", all_stu[i].id, all_stu[i].phone_number, all_stu[i].department, all_stu[i].sex, all_stu[i].email, all_stu[i].password, all_stu[i].name);

	fclose(student_file);




	free(all_stu);
	return 0;
}

//ѧ����������
int student_password_change(int student_id, char* password) {

	int total_student_num = get_total_student_num();
	students* all_stu;
	all_stu = get_student_info();
	for (int i = 0; i < get_total_student_num(); i++) {
		if (all_stu[i].id == student_id) {
			strcpy_s(all_stu[i].password , password);
			break;
		}
	}
	FILE* student_file;

	fopen_s(&student_file, "bin//user_student.txt", "w");

	for (int i = 0; i < total_student_num; i++)
		fprintf_s(student_file, "%d %lld %s %s %s %s %s\n", all_stu[i].id, all_stu[i].phone_number, all_stu[i].department, all_stu[i].sex, all_stu[i].email, all_stu[i].password, all_stu[i].name);

	fclose(student_file);




	free(all_stu);
	return 0;
}



