#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
#define MAX_LINE 1024
int verify(int a, int b, char* inputpassword);
int main()
{
	int a = 0;
	char inputpassword[20] = { 'n','m','q','5','7','6' };
	verify(a, 0, inputpassword);
	return 0;
}
int verify(int type, int b, char* inputpassword)
{
	FILE* fp;
	errno_t err;
	int len;
	int numofline; 

	numofline = 0;




	int i = 0, compareresult;
	char studentnumber[20] = { 'a' };
	char phonenumber[20] = { 's' };
	char college[20] = { 'd' };
	char sex[20] = { 'f' };
	char email[20] = { 'g' };
	char password_right[20] = { 'b' };
	char teachernumber[20] = { 'h' };
	char teacherphonenumber[20] = { 'j' };
	char teachercollege[20] = { 'k' };
	char teacheremail[20] = { 'l' };
	char teacherpassword_right[20] = { 'm' };
	char teachername[20] = { 'n' };
	char adminnumber[20] = { 'o' };
	char adminpassword_right[20] = { 'p' };
	char buf[MAX_LINE];
	switch (type) {
	case 0://student
		if ((err = fopen_s(&fp, "bin\\user_student.txt", "r")) == 0) {
			printf("The file was opened\n");
		}
		else {
			printf("The file was not opened\n");
		}
		while (fgets(buf, MAX_LINE, fp) != NULL)
		{
			numofline++;
			len = strlen(buf);
			buf[len - 1] = '\0';
			//printf("%s %d \n",buf,len - 1); 打印全部
		}
		//printf("行数： %d \n", numofline);打印行数
		for (i = 0; i < numofline; i++) {
			fscanf_s(fp, "%s %s %s %s %s %s\n", studentnumber, 15, phonenumber, 15, college, 15, sex, 15, email, 15, password_right, 100);
			printf("%s %s %s %s %s %s\n", studentnumber, phonenumber, college, sex, email, password_right);
			compareresult = strcmp(inputpassword, password_right);
			if (compareresult == 0)
			{
				printf("the password is right\n");
				return 1;
			}
			else
			{
				printf("the password is wrong\n");
				return 0;
			}
		}
		break;
	case 1:
		if ((err = fopen_s(&fp, "C:\\Users\\ldl\\Desktop\\test_datafiles\\user_teacher.txt", "r")) == 0) {
			printf("The file was opened\n");
		}
		else {
			printf("The file was not opened\n");
		}
		while (fgets(buf, MAX_LINE, fp) != NULL)
		{
			numofline++;
			len = strlen(buf);
			buf[len - 1] = '\0';
			//printf("%s %d \n",buf,len - 1); 打印全部
		}
		//printf("行数： %d \n", numofline);打印行数
		for (i = 0; i < numofline; i++) {
			fscanf_s(fp, "%s %s %s %s %s %s\n", teachernumber, 15, teacherphonenumber, 15, teachercollege, 15, teacheremail, 15, teacherpassword_right, 15, teachername, 15);
			printf("%s %s %s %s %s %s\n", teachernumber, teacherphonenumber, teachercollege, teacheremail, teacherpassword_right, teachername);
			compareresult = strcmp(inputpassword, teacherpassword_right);
			if (compareresult == 0)
			{
				printf("the password is right\n");
				return 1;
			}
			else
			{
				printf("the password is wrong\n");
				return 0;
			}
			break;
	case 2:
		if ((err = fopen_s(&fp, "C:\\Users\\ldl\\Desktop\\test_datafiles\\user_admin_list", "r")) == 0) {
			printf("The file was opened\n");
		}
		else {
			printf("The file was not opened\n");
		}
		while (fgets(buf, MAX_LINE, fp) != NULL)
		{
			numofline++;
			len = strlen(buf);
			buf[len - 1] = '\0';
			//printf("%s %d \n",buf,len - 1); 打印全部
		}
		//printf("行数： %d \n", numofline);打印行数
		for (i = 0; i < numofline; i++) {
			fscanf_s(fp, "%s %s\n", adminnumber, 15, adminpassword_right, 15);
			printf("%s %s\n", adminnumber, adminpassword_right);
			compareresult = strcmp(inputpassword, adminpassword_right);
			if (compareresult == 0)
			{
				printf("the password is right\n");
				return 1;
			}
			else
			{
				printf("the password is wrong\n");
				return 0;
			}
			break;

		}
		}

	}
}