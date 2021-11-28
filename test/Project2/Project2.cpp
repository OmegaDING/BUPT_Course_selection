//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include<stdlib.h>
//
////#pragma warning(disable : 4996)
//
//bool is_password_right(int type, int id, char* input_password) {
//	
//	int id_read;
//	int phone;
//	char school[20];
//	char sex[20];
//	char email[100];
//	char password[100];
//	char name[20];
//
//	if (type == 0) {//老师
//		FILE* user_teacher_list;
//		fopen_s(&user_teacher_list, "bin//user_teacher.txt", "r");
//		for (int i = 0;i < 2000;i++) {
//			fscanf_s(user_teacher_list, ("%d %d %s"), &id_read, &phone, school, 20);
//			fscanf_s(user_teacher_list, ("%s"), email, 100);
//			fscanf_s(user_teacher_list, ("%s"), password, 100);
//			fscanf_s(user_teacher_list, ("%s"), name, 20);
//
//			if (id_read == id) {//若读入id正确
////				printf("%d %d %s %s %s %s \n", id_read, phone, school, email, password, name);//调试用输出读入数据
//				if (strcmp(input_password, password) == 0)//比较id密码正确
//					return true;
//			}
//		}
//	}
//
//	if (type == 1) {//学生
//		FILE* user_student_list;
//		fopen_s(&user_student_list, "bin//user_student.txt", "r");
//		for (int i = 0;i < 2000;i++) {
//			fscanf_s(user_student_list, ("%d %d %s"), &id_read, &phone, school, 20);
//			fscanf_s(user_student_list, ("%s"), sex, 20);
//			fscanf_s(user_student_list, ("%s"), email, 100);
//			fscanf_s(user_student_list, ("%s"), password, 100);
//			fscanf_s(user_student_list, ("%s"), name, 20);
//
//			if (id_read == id) {//若读入id正确
////				printf("%d %d %s %s %s %s %s\n", id_read, phone, school, sex, email, password, name);//调试用输出读入数据
//				if (strcmp(input_password, password) == 0)//比较id密码正确
//					return true;
//			}
//		}
//	}
//	
//	if (type == 2) {//管理员
//		FILE* user_admin_list;
//		fopen_s(&user_admin_list, "bin//user_admin_list.txt", "r");
//		for (int i = 0;i < 2000;i++) {
//			fscanf_s(user_admin_list, ("%d "), &id_read);
//			fscanf_s(user_admin_list, ("%s"), password, 100);
//
//			if (id_read == id) {//若读入id正确
////				printf("%d  %s \n", id_read, password);//调试用输出读入数据
//
//				if (strcmp(input_password, password) == 0)//比较id密码正确
//					return true;
//			}
//		}
//	}
//
//
//
//	return false;//因为没有找到id所以返回错误
//}
//
//int main() {
//	char input_password[100] = { 'O','S','M','4','6','0' };
//	if (is_password_right(2, 1001000003, input_password))
//		printf("right");
//	else
//		printf("wrong");
//
//}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
#pragma warning(disable : 4996)
bool isconflict(int* a, int* b);
int* section_back(int*);
int* section_back2(int*);
int search();
void class_infor(int, int*);

int main() {
	int count = 0;
	int q[10] = { 0 };
	int* result2 = section_back2(q);//result是从课程信息中读取的课程时间
	printf("您所查询的课程节次为：\n");
	for (count = 0; count < 4; count++) {
		printf("%d ", result2[count]);
		if (count == 3) {
			printf("\n");
		}//打印出课程节次
	}
	int p[10] = { 0 };
	int* result1 = section_back(p);//result是从课程信息中读取的课程时间
	for (count = 0; count < 4; count++) {
		printf("%d ", result1[count]);
		if (count == 3) {
			printf("\n");
		}//打印出课程节次
	}
	bool isconflict_result = isconflict(result1, result2);
	if (isconflict_result == true) {
		printf("true!");
	}
	if (isconflict_result == false) {
		printf("false!");
	}
	return 0;
}
bool isconflict(int* a, int* b) {//判断是否冲突
	int count = 1;
	int class1 = a[0];
	int class2 = b[0];
	int class1time, class2time, i = 0;
	//for (; i < 4; i++) {
		//printf("%d %d\n", a[i], b[i]);
	//}
	for (class1time = 0; class1time < 4; class1time++)
	{
		for (class2time = 0; class2time < 4; class2time++)
		{
			if (a[class1time] == b[class2time]) {
				count = 0;
			}
		}
	}
	if (count == 0) {
		return false;
	}
	if (count == 1) {
		return true;
	}
}

int* section_back2(int* q) {//查询并返回课程节次
	FILE* fp;  //文件指针
	char find_str[100]; //存储字符串的数组
	int line = 0;
	char file_str[1024];
	errno_t err;
	if ((err = fopen_s(&fp, "bin\\course_list.txt", "r")) == 0) {
		//printf("The file was opened\n");
	}
	else {
		printf("The file was not opened\n");
	}
	printf("input coursename to find:");
	gets_s(find_str, 100);  //获取输入的字符串
	while (fgets(file_str, sizeof(file_str), fp))//逐行循环读取文件，直到文件结束 
	{
		line++;
		if (strstr(file_str, find_str))  //检查字符串是否在该行中，如果在，则输出该行
		{
			//printf("%s in %d :%s\n", find_str, line, file_str);//这行可以输出课程信息
			FILE* fp1;
			errno_t errr;
			if ((errr = fopen_s(&fp1, "bin\\暂时储存查询的课程信息.txt", "w")) == 0) {
				//printf("The file was opened\n");
			}
			else {
				printf("The file was not opened\n");
			}
			//printf("%s", file_str);
			fprintf(fp1, file_str);
			//fclose(fp);
			//return 0;
			fclose(fp1);
		}
	}
	fclose(fp);//关闭文件，结束,到这里可以
	//file_str是信息字符串
	int i = 0, a, m, c = 0, d = 0, shiwei, * shijian = q;
	char section[2][50];//提取带逗好的课程
	int b[50][2];//提取·不带逗号的课
	char number[20] = { 0 };
	char name[20] = { 0 };
	char tname[20] = { 0 };
	char book[20] = { 0 };
	char number2[20] = { 0 };
	char start[60] = { 0 };
	char end[60] = { 0 };
	char time[40] = { 0 };
	char point[2] = { 0 };
	char site[20] = { 0 };
	FILE* fp2;
	errno_t errrr;
	if ((errrr = fopen_s(&fp2, "bin\\暂时储存查询的课程信息.txt", "r")) == 0) {
		//printf("The file was opened\n");
	}
	else {
		printf("The file was not opened\n");
	}
	fscanf_s(fp2, "%s%s%s%s%s%s%s%s%s%s\n", number, 15, name, 15, tname, 15, book, 15, number2, 15, start, 50, end, 50, time, 30, point, 2, site, 15);
	//printf("%s %s %s %s %s %s %s %s %s %s\n", number, name, tname, book, number2, start, end, time, point, site);
	for (a = 0; a < 20; a++) {
		section[i][a] = time[a];
		//把课程节数提取出来
	}
	int len = strlen(section[i]);
	for (m = 0; m < len; m++)
	{
		if (section[i][m] >= '0' && section[i][m] <= '9')
		{

			if (d % 2 == 0) {
				shiwei = ((int)section[i][m] - 48) * 10;
			}
			if (d % 2 == 1) {
				shijian[(m - 1) / 3] = shiwei + (int)section[i][m] - 48;
			}d++;
		}
	}
	return shijian;
}
int* section_back(int* p) {
	int  student_num = 2019000002;
	printf("please input your student number:\n");
	scanf("%d", &student_num);
	int classnum[2], * pp = classnum;
	class_infor(student_num, pp);
	int i = 0, j = 0;
	char course_id[11], course_info_tot[200] = { 0 };
	for (i = 0; i < 2; i++) {
		if (classnum[i] >= 0) {
			//printf("%d ", classnum[i]);
			_itoa_s(classnum[i], course_id, 10);
			FILE* fp_read_course_list;
			errno_t err;
			err = fopen_s(&fp_read_course_list, "bin\\course_list.txt", "r");
			while (fgets(course_info_tot, sizeof(course_info_tot), fp_read_course_list)) {
				if (strstr(course_info_tot, course_id)) {
					printf("%s", course_info_tot);//课程信息
					break;
				}
			}
			fclose(fp_read_course_list);
		}
	}//course_info_tot是课程信息
	FILE* fp1;
	errno_t errr;
	if ((errr = fopen_s(&fp1, "bin\\暂时储存查询的课程信息1.txt", "w")) == 0) {
		//printf("The file was opened\n");
	}
	else {
		printf("The file was not opened\n");
	}
	//printf("%s", file_str);
	fprintf(fp1, course_info_tot);
	//fclose(fp);
	//return 0;
	fclose(fp1);
	int a, m, c = 0, d = 0, shiwei, * shijian = p;
	char section[2][50];//提取带逗好的课程
	//int b[50][2];//提取·不带逗号的课
	char number[20] = { 0 };
	char name[20] = { 0 };
	char tname[20] = { 0 };
	char book[20] = { 0 };
	char number2[20] = { 0 };
	char start[60] = { 0 };
	char end[60] = { 0 };
	char time[40] = { 0 };
	char point[2] = { 0 };
	char site[20] = { 0 };
	FILE* fp2;
	errno_t errrr;
	if ((errrr = fopen_s(&fp2, "bin\\暂时储存查询的课程信息1.txt", "r")) == 0) {
		//printf("The file was opened\n");
	}
	else {
		printf("The file was not opened\n");
	}
	fscanf_s(fp2, "%s%s%s%s%s%s%s%s%s%s\n", number, 15, name, 15, tname, 15, book, 15, number2, 15, start, 50, end, 50, time, 30, point, 2, site, 15);
	//printf("%s %s %s %s %s %s %s %s %s %s\n", number, name, tname, book, number2, start, end, time, point, site);
	for (a = 0; a < 20; a++) {
		section[j][a] = time[a];
		//把课程节数提取出来
	}
	int len = strlen(section[j]);
	for (m = 0; m < len; m++)
	{
		if (section[j][m] >= '0' && section[j][m] <= '9')
		{

			if (d % 2 == 0) {
				shiwei = ((int)section[j][m] - 48) * 10;
			}
			if (d % 2 == 1) {
				shijian[(m - 1) / 3] = shiwei + (int)section[j][m] - 48;
			}d++;
		}
	}
	return shijian;
}
void class_infor(int student_number, int* pp) {//进入学生号和一个指针
	int stunum = student_number;
	FILE* fp;
	errno_t err;
	char id[100];
	sprintf_s(id, "bin\\student_course\\%d.txt", stunum);
	//printf("%s是id", id);
	if ((err = fopen_s(&fp, id, "r")) == 0)
	{
		printf("The file was opened\n");
	}
	else {
		printf("The file was not opened\n");
	}
	fscanf_s(fp, "%d %d", &pp[0], &pp[1]);
	// printf("%d %d", class_number[0], class_number[1]);
	return;
}

