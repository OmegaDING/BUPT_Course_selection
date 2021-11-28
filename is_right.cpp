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


	if (type == 0) {//老师
		FILE* user_teacher_list;
		//数总共行数
		fopen_s(&user_teacher_list, "bin//user_teacher.txt", "r");
		while (fgets(tmp, 2000, user_teacher_list) != NULL)
		{
			line_num++;
		}
		fclose(user_teacher_list);
		//验证正确
		fopen_s(&user_teacher_list, "bin//user_teacher.txt", "r");
		for (int i = 0;i < line_num;i++) {
			fscanf_s(user_teacher_list, ("%d %d %s"), &id_read, &phone, school, 20);
			fscanf_s(user_teacher_list, ("%s"), email, 100);
			fscanf_s(user_teacher_list, ("%s"), password, 100);
			fscanf_s(user_teacher_list, ("%s"), name, 20);

			if (id_read == id) {//若读入id正确
//				printf("%d %d %s %s %s %s \n", id_read, phone, school, email, password, name);//调试用输出读入数据
				if (strcmp(input_password, password) == 0)//比较id密码正确
				{
					fclose(user_teacher_list);
					return true;
				}
				else
					fclose(user_teacher_list);
				
			}
		}
	}

	if (type == 1) {//学生
		FILE* user_student_list;
		//数总共行数
		fopen_s(&user_student_list, "bin//user_student.txt", "r");
		while (fgets(tmp, 2000, user_student_list) != NULL)
		{
			line_num++;
		}
		fclose(user_student_list);
		//验证正确
		fopen_s(&user_student_list, "bin//user_student.txt", "r");
		for (int i = 0;i < line_num ;i++) {
			fscanf_s(user_student_list, ("%d %d %s"), &id_read, &phone, school, 20);
			fscanf_s(user_student_list, ("%s"), sex, 20);
			fscanf_s(user_student_list, ("%s"), email, 100);
			fscanf_s(user_student_list, ("%s"), password, 100);
			fscanf_s(user_student_list, ("%s"), name, 20);

			if (id_read == id) {//若读入id正确
//				printf("%d %d %s %s %s %s %s\n", id_read, phone, school, sex, email, password, name);//调试用输出读入数据
				if (strcmp(input_password, password) == 0)//比较id密码正确
				{
					fclose(user_student_list);
					return true;
				}
				else
					fclose(user_student_list);
			}
		}
	}

	if (type == 2) {//管理员
		FILE* user_admin_list;
		fopen_s(&user_admin_list, "bin//user_admin_list.txt", "r");
		while (fgets(tmp, 2000, user_admin_list) != NULL)
		{
			line_num++;
		}
		fclose(user_admin_list);
		//验证正确
		fopen_s(&user_admin_list, "bin//user_admin_list.txt", "r");
	
		for (int i = 0;i < line_num;i++) {
			fscanf_s(user_admin_list, ("%d "), &id_read);
			fscanf_s(user_admin_list, ("%s"), password, 100);

			if (id_read == id) {//若读入id正确
//				printf("%d  %s \n", id_read, password);//调试用输出读入数据

				if (strcmp(input_password, password) == 0)//比较id密码正确
				{
					fclose(user_admin_list);
					return true;
				}
				else
					fclose(user_admin_list);
			}
		}
	}


	return false;//因为没有找到id所以返回错误
}

//判断是否满足选课条件
int is_allowed_to_choose(int course_id, int student_id) {
	int type = 0;//0为允许，-1因为课排满了，-2因为自己的课满了，-3因为自己的课冲突了

	if (get_course_limt_population(course_id) <= get_course_population(course_id))
		type = -1;

	if (get_course_chosen_amount_student(student_id) >= 3)
		type = -2;


	//判断传入的两个课程时间是否冲突
	int* course_chosen_id;
	course_chosen_id = get_course_chosen_id_student(student_id);
	for (int i = 0; i < get_course_chosen_amount_student(student_id); i++)
		if (is_course_time_conflict(course_chosen_id[i], course_id))
			type = -3;

	return type;
}



////判断邮箱是否正确
//bool is_email_right(char* email) {
//	char a[2] = { '.' };
//	char b[2] = { '@' };
//	if (strstr_cnt(email, a) != 0 && strstr_cnt(email, b) != 0)
//		return true;
//	else
//		return false;
//}

//判断电话号是否正确
bool is_phone_num_right(long long phone) {
	if (phone >= 10000000000 && phone<100000000000)
		return true;
	else
		return false;
}

//判断是否允许删除课程
bool is_allowed_to_del_course(int course_id) {
	//能到这里的肯定时教师本人的课所以不考虑误删
	if (get_course_population(course_id) < 30)
		return true;
	else
		return false;
}


//判断是否允许开设此课程
int is_allowed_to_launch_course(courses& cou) {//返回-1开设课程已满，返回-2课程名冲突，-3课程号冲突，-4上课时间冲突,-5有信息未修改写入0
	
											   
											   //判断选修课数量
	if (get_amount_of_elective_course_teacher(cou.teacher_number) >= 2) //课程从0开始计算，<2为两门
	{
		if(cou.ismust==false)
			return -1;
	}




	//判断课程名与课程号是否冲突
	courses* all_course;
	all_course = get_course_info();
	for (int i = 0; i < get_total_course_num(); i++) {
		if (strcmp(cou.name, all_course[i].name) == 0)//课程名冲突
			return -2;
		if (cou.id ==all_course[i].id)//课程号冲突
			return -3;
	}
	free(all_course);





	//判断上课时间是否冲突
	char dou[5] = { ',' };
	int* used_time;
	used_time = time_have_been_used_teacher(cou.teacher_number);

	int course_time[80]{ '0' };
	int dou_num = strstr_cnt(cou.time_s, dou);//逗号个数
	for (int h = 0, k = 0; h < (dou_num + 2 * (dou_num + 1)); h++) {
		k = (h / 3);//h为在字符串中的位置，k为在第几组

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



	//符合条件
	return 0;
}


//判断邮箱正确
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
			//第一位不能是"@'。
			position_of_at = i;
			break;
		}
		else
			return false;
	}
	//检查"@"前面的字符的合法性。
	if (position_of_at == 0)
		return false;
	//检查是否有"@"。
	for (int i = position_of_at + 1; email[i] != '\0'; i++)
	{
		if ((email[i] >= 48 && email[i] <= 57) || (email[i] >= 65 && email[i] <= 90) || (email[i] >= 97 && email[i] <= 122))
			;
		else if (email[i] == 46)
		{
			if (i == position_of_at + 1)
				return false;
			//"@"后面不能紧跟着"."。
			position_of_dot = i;
			break;
		}
		else
			return false;
	}
	//检查"@"与"."之间的字符的合法性。
	if (position_of_dot == 0)
		return false;
	//检查是否有"."。
	if (email[position_of_dot + 1] == '\0')
		return false;
	//检查"."后面是否为空。
	for (int i = position_of_dot + 1; email[i] != '\0'; i++)
	{
		if ((email[i] >= 65 && email[i] <= 90) || (email[i] >= 97 && email[i] <= 122))
			;
		else
			return false;
	}
	//检查"."之后的字符的合法性，设定为只允许是字母。
	return true;
}

//检查上课时间是否正确
bool examine_course_time(char* course_time)
{
	int position_of_at = 0, position_of_dot = 0;
	for (int i = 0; course_time[i] != '\0'; i++)
	{
		if ((i + 1) % 3 != 0)
		{
			if ((course_time[i] < 48) || (course_time[i] > 57))
				return false;
			//判断是否为数字。
			else if ((course_time[i] == 48) || (course_time[i + 1] == 48))
				return false;
			//判断输入的数字是否为"00"。
		}
		else
		{
			if (course_time[i] != 44)
				return false;
			//判断分隔符是否为","。
		}
	}
	return true;
}

//检查上课地点正确
bool examine_course_place(char* course_place)
{
	int i = 0;
	for (; course_place[i] != '\0'; i++)
	{
		if (i == 1) {
			if (course_place[i] != 45)
				return false;
		}
		//判断第二位是否为"-"。
		else {
			if ((course_place[i] < 48) || (course_place[i] > 57))
				return false;
		}
		//判断其他为是否为数字。
		if ((i == 0) || (i == 2)) {
			if (course_place[i] == 48)
				return false;
		}
		//判断第一位或第三位是否为零。
		if (i == 3) {
			if ((course_place[i] == 48) && (course_place[i+1] == 48))
				return false;
		}
		//判断第四位和第五位是否均为零。
	}
	if (i < 5)
		return false;
	//判断上课地点信息是否小于五位。
	return true;
}