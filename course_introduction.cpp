#include"public.h"

char* get_course_introduction(int course_id) {
	char course_introduction[2000] = {'\0'};
	
	char tmp[100];
	FILE* introduction;
	sprintf_s(tmp, "bin\\course_introduction\\%d.txt", course_id);
	fopen_s(&introduction, tmp, "r");
	fscanf_s(introduction, "%s", course_introduction, 2000);
	fclose(introduction);
	return course_introduction;
}

void rewrite_course_introduction(char* introduction_nuw, int course_id) {
	
	char tmp[100];
	FILE* introduction;
	sprintf_s(tmp, "bin\\course_introduction\\%d.txt", course_id);
	fopen_s(&introduction, tmp, "w");
	fprintf_s(introduction, "%s", introduction_nuw);
	fclose(introduction);
	


}

void modify_course_book(int course_id,char* book) {
	courses* all_cou;
	all_cou = get_course_info();

	int total_course_num = get_total_course_num();
	for (int i = 0;i < total_course_num;i++)
		if (all_cou[i].id == course_id)
			strcpy_s(all_cou[i].book, book);
	FILE* course_file;
	char tmp[100];
	sprintf_s(tmp, "bin//course_list.txt");
	fopen_s(&course_file, tmp, "w");
	
	int k = 0;
	for (int i = 0;i < total_course_num;i++) {
		if (all_cou[i].ismust)
			k = 1;
		else
			k = 0;
		fprintf(course_file, "%d %s %d %s %d %s %s %s %d %s %s %d\n", all_cou[i].id, all_cou[i].name, all_cou[i].teacher_number, all_cou[i].book, all_cou[i].limit_number, all_cou[i].term_start, all_cou[i].term_end, all_cou[i].time_s, all_cou[i].score, all_cou[i].place, all_cou[i].school, k);
	}
	fclose(course_file);

}
void modify_course_limt_population(int course_id,int new_limt) {
	courses* all_cou;
	all_cou = get_course_info();

	int total_course_num = get_total_course_num();
	for (int i = 0;i < total_course_num;i++)
		if (all_cou[i].id == course_id)
			all_cou[i].limit_number = new_limt;
	FILE* course_file;
	char tmp[100];
	sprintf_s(tmp, "bin//course_list.txt");
	fopen_s(&course_file, tmp, "w");

	int k = 0;
	for (int i = 0;i < total_course_num;i++) {
		if (all_cou[i].ismust)
			k = 1;
		else
			k = 0;
		fprintf(course_file, "%d %s %d %s %d %s %s %s %d %s %s %d\n", all_cou[i].id, all_cou[i].name, all_cou[i].teacher_number, all_cou[i].book, all_cou[i].limit_number, all_cou[i].term_start, all_cou[i].term_end, all_cou[i].time_s, all_cou[i].score, all_cou[i].place, all_cou[i].school, k);
	}
	fclose(course_file);
}