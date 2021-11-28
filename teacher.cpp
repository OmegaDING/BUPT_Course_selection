#include "public.h"

//������ѧ�������а�ѧ��������ѧ�������ط���������ѧ������
students* search_students_in_course(students* stu_in, char* name,int& amount) {
	students* stu_out;
	int k = 0;
	stu_out = (student*)malloc(sizeof(students) * MAX_POPULATION_PER_COURSE);
	for (int i = 0; i < get_total_student_num(); i++) {
		if (strstr_cnt(stu_in[i].name, name) != 0) {
			students_copy_single(stu_out[k], stu_in[i]);
			k++;
		}
	}
	amount = k;

	return stu_out;
}

//��ʦɾ���γ�
bool teacher_delete_course(int course_number) {
    int num = 0, count = 0;
    bool is_success = 1;
    char course_introduction_filename[50], course_students_filename[50], student_course_filename[50], teacher_course_filename[50],
        student_id[11] = { 0 }, course_id[7] = { 0 }, course_info_tot[200], course_info_separated[15][100] = { 0 }, linedata[200] = { 0 };
    FILE* fp_read_course_students, * fp_read_student_course, * fp_rewrite_student_course, * fp_read_course_list, * fp_rewrite_course_list,
        * fp_read_teacher_course, * fp_rewrite_teacher_course;
    errno_t err;
    sprintf_s(course_introduction_filename, 50, "bin//course_introduction//%d.txt", course_number);
    remove(course_introduction_filename);
    //ɾ���γ̼���ļ���
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
 //       printf("δ�ҵ��γ̵�ѧ��������Ϣ�ļ���\n");
    }
   
    remove(course_students_filename);
    //ɾ���γ̵�ѧ��������Ϣ�ļ���
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
    //ɾ���γ���Ϣ�ļ��еĸÿγ̡�
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
    //�ӿγ���Ϣ�ļ�����ȡ���ÿγ̵ı�š�
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
    //ɾ����ʦ������Ϣ�ļ��еĸÿγ̱�š�
    return is_success;
}

void teacher_add_course(courses course) {
    char course_introduction_filename[100], course_students_filename[100], teacher_course_filename[100], student_id[11] = { 0 }, course_id[7] = { 0 },
        linedata[11] = { 0 };
    FILE* fp_create_course_introduction, * fp_create_course_students, * fp_rewrite_teacher_course, * fp_rewrite_course_list;
    errno_t err;
    sprintf_s(course_introduction_filename, 100, "bin//course_introduction//%d.txt", course.id);
    err = fopen_s(&fp_create_course_introduction, course_introduction_filename, "w");
    fprintf(fp_create_course_introduction, "����%d�ſγ̵ļ�顣", course.id);
    fclose(fp_create_course_introduction);
    //��ӿγ̼���ļ���
    sprintf_s(course_students_filename, 100, "bin//course_students//%d.txt", course.id);
    err = fopen_s(&fp_create_course_students, course_students_filename, "w");
    fclose(fp_create_course_students);
    //��ӿγ�ѧ����Ϣ�����ļ���
    sprintf_s(teacher_course_filename, 100, "bin//teacher_course//%d.txt", course.teacher_number);
    err = fopen_s(&fp_rewrite_teacher_course, teacher_course_filename, "a");
    fprintf(fp_rewrite_teacher_course, "%d ", course.id);
    fclose(fp_rewrite_teacher_course);
    //���ʦ������Ϣ�ļ�����Ӹÿγ̵ı�š�

    err = fopen_s(&fp_rewrite_course_list, "bin//course_list.txt", "a");
    fprintf(fp_rewrite_course_list, "%d %s %d %s %d ��ʼ%04d-%04dѧ���",
        course.id, course.name, course.teacher_number, course.book, course.limit_number, course.start_year, course.end_year);
	if (course.term == 1)
		fprintf(fp_rewrite_course_list, "һ");
	else
		fprintf(fp_rewrite_course_list, "��");
	fprintf(fp_rewrite_course_list, "ѧ�ڵ�%02d�� ��ֹ%04d-%04dѧ���", course.start_week,
		course.start_year, course.end_year);
	if (course.term2 == 1)
		fprintf(fp_rewrite_course_list, "һ");
	else
		fprintf(fp_rewrite_course_list, "��");
	fprintf(fp_rewrite_course_list, "ѧ�ڵ�%02d�� ", course.end_week);
    for (int i = 0; course.time[i] != 0; i++)
    {
        if (i == 0)
            fprintf(fp_rewrite_course_list, "%02d", course.time[i]);
        else
            fprintf(fp_rewrite_course_list, ",%02d", course.time[i]);
    }
    fprintf(fp_rewrite_course_list, " %d %s %s %d\n", course.score, course.place, course.school, course.ismust);
    fclose(fp_rewrite_course_list);
    //��γ���Ϣ�ļ�����Ӹÿγ̵���Ϣ��
    return ;
}

//�����ʦ�м���ѡ�޿�
int get_amount_of_elective_course_teacher(int teacher_id) {
    courses* all_course;
    int amount_of_elective_course = 0;
    all_course = get_course_info();
    for (int i = 0; i < get_total_course_num(); i++) {
        if (all_course[i].teacher_number == teacher_id && all_course[i].ismust != true) {
            amount_of_elective_course++;
        }
    }
    free(all_course);
    return amount_of_elective_course;
}

//��ȡ��ʦÿ���ܹ��ж��ٽڿ�
int get_total_time_used_per_week_teacher(int teacher_id) {
    int times=0;
    int* courses_id;
    courses_id = (int*)malloc(sizeof(int) * count_course_num_teacher(teacher_id));
    get_coursenum_teacher(teacher_id, courses_id);

    int cou=0;//��ȡ��ʦ�ж����ſ�
    cou = count_course_num_teacher(teacher_id);

    for (int i = 0; i < cou; i++) {
        times += get_course_time_amount(courses_id[i]);
    }


    return times;
}


//��ȡ��ʦ�Ѿ���ռ�õ�ʱ�� �������пε�����ʱ����ɵ�����
int* time_have_been_used_teacher(int teacher_id) {
    int* used;
    used = (int*)malloc(sizeof(int) * get_total_time_used_per_week_teacher(teacher_id));
    int n = 0;//�γ���
    courses* courses_haved;
    courses_haved = get_teacher_course_info(teacher_id);
    int time_have_been_used[100] = { '0' };
   

    for(int k=0;k< count_course_num_teacher(teacher_id);k++)
        for (int i = 0; i < get_course_time_amount(courses_haved[k].id); i++)
        {
            used[n] =courses_haved[k].time[i];
            n++;
        }

    return used;
}


//ֻ�пγ̽ڴ��ַ�������γ̽ڴ�����
void load_course_time(courses& courses_add) {
    //���ַ�����������
    int dou_num = 0;
    char dou[5] = { ',' };
    dou_num = strstr_cnt(courses_add.time_s, dou);//���Ÿ���
    for (int n = 0; n < 80; n++)
        courses_add.time[n] = 0;

    for (int h = 0, k = 0; h < (dou_num + 2 * (dou_num + 1)); h++) {
        k = (h / 3);//hΪ���ַ����е�λ�ã�kΪ�ڵڼ���

        if (h % 3 != 2) {
            if (h == 3 * k) {
                courses_add.time[k] += ((int)courses_add.time_s[h] - 48) * 10;
            }
            else
                courses_add.time[k] += ((int)courses_add.time_s[h] - 48);
        }
    }
}


//��ʦ���ĵ绰
int teacher_phone_change(int teacher_id, long long new_phone_num) {

    int total_teacher_num = get_total_teacher_num();
    teachers* all_tea;
    all_tea = get_teacher_info();
    for (int i = 0; i < total_teacher_num; i++) {
        if (all_tea[i].id == teacher_id) {
            all_tea[i].phone_number = new_phone_num;
            break;
        }
    }
    FILE* teacher_file;

    fopen_s(&teacher_file, "bin//user_teacher.txt", "w");

    for (int i = 0; i < total_teacher_num; i++)
        fprintf_s(teacher_file, "%d %lld %s %s %s %s\n", all_tea[i].id, all_tea[i].phone_number, all_tea[i].department, all_tea[i].email, all_tea[i].password, all_tea[i].name);

    fclose(teacher_file);




    free(all_tea);
    return 0;
}





//��ʦ��������
int teacher_email_change(int teacher_id, char* email) {

    int total_teacher_num = get_total_teacher_num();
    teachers* all_tea;
    all_tea = get_teacher_info();
    for (int i = 0; i < total_teacher_num; i++) {
        if (all_tea[i].id == teacher_id) {
            strcpy_s(all_tea[i].email, email);
            break;
        }
    }
    FILE* teacher_file;

    fopen_s(&teacher_file, "bin//user_teacher.txt", "w");

    for (int i = 0; i < total_teacher_num; i++)
        fprintf_s(teacher_file, "%d %lld %s %s %s %s\n", all_tea[i].id, all_tea[i].phone_number, all_tea[i].department, all_tea[i].email, all_tea[i].password, all_tea[i].name);

    fclose(teacher_file);




    free(all_tea);
    return 0;
}

//��ʦ��������
int teacher_password_change(int teacher_id, char* password) {

    int total_teacher_num = get_total_teacher_num();
    teachers* all_tea;
    all_tea = get_teacher_info();
    for (int i = 0; i < total_teacher_num; i++) {
        if (all_tea[i].id == teacher_id) {
            strcpy_s(all_tea[i].password, password);
            break;
        }
    }
    FILE* teacher_file;

    fopen_s(&teacher_file, "bin//user_teacher.txt", "w");

    for (int i = 0; i < total_teacher_num; i++)
        fprintf_s(teacher_file, "%d %lld %s %s %s %s\n", all_tea[i].id, all_tea[i].phone_number, all_tea[i].department, all_tea[i].email, all_tea[i].password, all_tea[i].name);

    fclose(teacher_file);




    free(all_tea);
    return 0;
}


//���������ؿγ̽ṹ����
courses* search_course_from_list(courses* list, int len,char* key_word) {
	
	courses* course_search_result;
	course_search_result = (courses*)malloc(sizeof(courses) * get_total_course_num());


	for (int i = 0, k = 0;i < len;i++) {
		if ((strstr_cnt(list[i].name, key_word) != 0) || (strstr_cnt(list[i].school, key_word) != 0))
		{

			course_search_result[k].id = list[i].id;
			for (int n = 0; n < 100; n++) {
				course_search_result[k].book[n] = list[i].book[n];
				course_search_result[k].name[n] = list[i].name[n];
				/*course_search_result[k].time_s[n] = list[i].time_s[n];
				course_search_result[k].term_end[n] = list[i].term_end[n];
				course_search_result[k].term_start[n] = list[i].term_start[n];*/
			}
			/*course_search_result[k].class_hours = list[i].class_hours;
			course_search_result[k].end_mounth = list[i].end_mounth;
			course_search_result[k].end_year = list[i].end_year;
			course_search_result[k].ismust = list[i].ismust;*/
			course_search_result[k].limit_number = list[i].limit_number;
			course_search_result[k].score = list[i].limit_number;
			for (int n = 0; n < 50; n++)
				course_search_result[k].place[n] = list[i].place[n];
			/*course_search_result[k].start_mounth = cou[i].start_mounth;
			course_search_result[k].start_year = cou[i].start_year;*/
			course_search_result[k].teacher_number = list[i].teacher_number;
			for (int n = 0;n < 80;n++)
				course_search_result[k].time[n] = list[i].time[n];
			for (int x = 0;x < 100;x++)
				course_search_result[k].school[x] = list[i].school[x];

			course_search_result[k].ismust = list[i].ismust;

			k++;
		}
	}
	
	return course_search_result;
}


//���������ط��Ͽγ̵�����
int get_search_course_amount(courses* list, int len, char* key_word) {
	
	//courses* course_search_result;
	//course_search_result = (courses*)malloc(sizeof(courses) * get_total_course_num());

	int k = 0;
	for (int i = 0; i < len; i++) {
		if ((strstr_cnt(list[i].name, key_word) != 0) || (strstr_cnt(list[i].school, key_word) != 0)) {
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
	
	/*free(course_search_result);*/
	return k;
}



