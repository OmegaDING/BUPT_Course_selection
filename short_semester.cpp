#include "public.h"


//公用
#define WIN_HIGH 800
#define WIN_WIDE 1280
#define logo_school_high 126//校徽
#define logo_school_wide 126
#define logo_school_motto_high 118//右上校训
#define logo_school_motto_wide 201

//首页

#define logo_hello_system_high 132//首页logo 课程管理系统
#define logo_hello_system_wide 349
#define logo_login_high 141//右上角登陆系统logo
#define logo_login_wide 236
#define logo_welcome_high 90//汉字欢迎登陆
#define logo_welcome_wide 310
#define logo_select_your_type_high 40 //汉字选择用户类型logo
#define logo_select_your_type_wide 275
#define button_firstpage_high 46//首页按钮
#define button_firstpage_wide 193
#define picture_1_high 439//首页图片
#define picture_1_wide 712

//登陆系统
#define main_login_page_wide 500//欢迎登陆
#define main_login_page_high 364

//学生系统
#define logo_course_selection_system_high 106//左上 汉字学生选课系统
#define logo_course_selection_system_wide 325
#define button_student_select_high 46//学生选课系统选项大小
#define button_student_select_wide 250
#define button_last_page_high 58//上一页按钮
#define button_last_page_wide 167
#define button_next_page_high 58//下一页按钮
#define button_next_page_wide 167
#define picture_2_high 488
#define picture_2_wide 732

#define button_up_high 37//下箭头按钮
#define button_up_wide 28
#define button_down_high 37//上箭头按钮
#define button_down_wide 28
#define button_ser_high 42//搜索放大镜
#define button_ser_wide 39
#define logo_query_according_to_course_name_high 41//根据学院、课程名查询
#define logo_query_according_to_course_name_wide 342
#define button_find_wide 110
#define button_find_high 53
#define button_delete_wide 100
#define button_delete_high 38
#define button_select_course_wide 100
#define button_select_course_high 38
#define logo_self_info_wide 124
#define logo_self_info_high 67

//教师系统
#define button_teacher_select_wide 249
#define button_teacher_select_high 85
#define logo_courses_have_been_set_wide 225
#define logo_courses_have_been_set_high 40
#define button_action_wide 58
#define button_action_high 28
#define button_action_small_wide 102
#define button_action_small_high 50
#define logo_search_according_to_the_course_name_wide 252
#define logo_search_according_to_the_course_name_high 37
#define logo_bupt_teacher_management_system_wide 332
#define logo_bupt_teacher_management_system_high 107
#define picture_3_wide 630
#define picture_3_high 420

//管理员系统


//logo
IMAGE img_administrator;
IMAGE bupt_teacher_management_system;
IMAGE course_management_blue;
IMAGE course_management_green;
IMAGE course_management_system;
IMAGE course_selection_management;
IMAGE course_selection_system;
IMAGE courses_have_been_set;
IMAGE button_delete;
IMAGE delete_course_selection_blue;
IMAGE delete_course_selection_green;
IMAGE find;
IMAGE last_page;
IMAGE login_system;
IMAGE logout;
IMAGE mailbox;
IMAGE modify;
IMAGE next_page;
IMAGE password;
IMAGE personal_information_management_blue_teacher;
IMAGE personal_information_management_green_student;
IMAGE personal_information_management_green_teacher;
IMAGE personal_information_management_blue_student;
IMAGE phonenumber;
IMAGE picture_1;
IMAGE picture_2;
IMAGE picture_3;
IMAGE query_according_to_course_name;
IMAGE query_course_selection_result_blue;
IMAGE query_course_selection_result_green;
IMAGE school;
IMAGE school_motto;
IMAGE search_according_to_the_course_name;
IMAGE search_course_blue;
IMAGE search_course_green;
IMAGE select_course_management_blue;
IMAGE select_course_management_green;
IMAGE select_your_type;
IMAGE ser;
IMAGE statistics;
IMAGE img_student;
IMAGE student_course_selection_center_blue;
IMAGE student_course_selection_center_green;
IMAGE img_teacher;
IMAGE time_now;
IMAGE up;
IMAGE down;
IMAGE welcome;
IMAGE search;
IMAGE button_exit;
IMAGE logout_teacher;
IMAGE add;
IMAGE picture_4;
IMAGE picture_login_stu_wait;
IMAGE picture_login_tea_wait;
IMAGE button_login;
IMAGE button_login_2;
IMAGE picture_5;
IMAGE button_back;
IMAGE button_back_2;
IMAGE button_select_course;
IMAGE button_been_select;
IMAGE button_delete_stu;
IMAGE refresh;
IMAGE button_lunch_course;
IMAGE button_lunch_give_up;
IMAGE button_chose_n;
IMAGE button_chose_y;
IMAGE button_course_lunched;
IMAGE button_course_not_lunched;
IMAGE button_exit2;
IMAGE button_verify;
IMAGE add_student_info_blue;
IMAGE add_student_info_green;
IMAGE add_teacher_info_blue;
IMAGE add_teacher_info_green;
IMAGE delete_stu_info_blue;
IMAGE delete_stu_info_green;
IMAGE delete_teacher_info_blue;
IMAGE delete_teacher_info_green;
IMAGE email;
IMAGE name;
IMAGE number;
IMAGE password2;
IMAGE phone;
IMAGE school2;
IMAGE stu_id;
IMAGE logo_total_teacher_num;
IMAGE logo_total_student_num;
IMAGE logo_total_course_num;
IMAGE num_1;
IMAGE num_2;
IMAGE num_3;
IMAGE num_4;
IMAGE num_5;
IMAGE num_6;
IMAGE num_7;
IMAGE num_8;
IMAGE num_9;
IMAGE num_0;
IMAGE admin_system;
IMAGE see_system_statue_blue;
IMAGE see_system_statue_green;
IMAGE system_statue;
IMAGE logout_admin;
IMAGE button_in_order;
IMAGE button_course_chosen_population;
IMAGE button_saturated;
IMAGE button_suggest_action;
IMAGE button_add_verify;
IMAGE mao;
IMAGE kuang;
IMAGE zhua1;
IMAGE zhua2;
IMAGE creater;
clock_t time_begin;




int login(person& current_user);
int start();
int student_selection_system(person& current_user);
int teacher_selection_system(person& current_user);
int admin_selection_system(person& current_user);
int type_and_verify_info(int type,person& current_user);
int current_year = 0, current_mounth = 0, current_day = 0, current_hour = 0, current_min = 0, current_second = 0;


// 学生选课管理系统
// 2019级 - 电管 - 丁丁的玩具车队 - 小学期作业
// 演示地址： https://www.bilibili.com/video/BV12Z4y1P7QQ?spm_id_from=333.999.0.0
// WeChat：dky1251001066
// GitHub：https://github.com/OmegaDING

int main()
{
	start();
	while (1) {
		person current_user;

		get_current_time(current_year, current_mounth, current_day, current_hour, current_min, current_second);
		//current_user = login();
		login(current_user);
		if (current_user.stu.id != 0)
			student_selection_system(current_user);

		else if (current_user.tea.id != 0)
			teacher_selection_system(current_user);

		else if (current_user.adm.id != 0)
			admin_selection_system(current_user);

	}
	//MessageBox(NULL, TEXT("Hello!"), TEXT("Msg"), 0);   
	
	EndBatchDraw();
	return 0;
}


int start() {
	initgraph(WIN_WIDE, WIN_HIGH);
	//载入
	loadimage(&img_administrator, _T("image\\img_administrator.png"));
	loadimage(&bupt_teacher_management_system, _T("image\\bupt_teacher_management_system.png"));
	loadimage(&course_management_blue, _T("image\\course_management_blue.png"));
	loadimage(&course_management_green, _T("image\\course_management_green.png"));
	loadimage(&course_management_system, _T("image\\course_management_system.png"));
	//loadimage(&course_selection_management, _T("image\\course_selection_management.png"));
	loadimage(&course_selection_system, _T("image\\course_selection_system.png"));
	loadimage(&courses_have_been_set, _T("image\\courses_have_been_set.png"));
	loadimage(&button_delete, _T("image\\button_delete.png"));
	loadimage(&delete_course_selection_blue, _T("image\\delete_course_selection_blue.png"));
	loadimage(&delete_course_selection_green, _T("image\\delete_course_selection_green.png"));
	loadimage(&down, _T("image\\down.png"));
	loadimage(&find, _T("image\\find.png"));
	loadimage(&last_page, _T("image\\last_page.png"));
	loadimage(&login_system, _T("image\\login_system.png"));
	loadimage(&logout, _T("image\\logout.png"));
	loadimage(&mailbox, _T("image\\mailbox.png"));
	loadimage(&modify, _T("image\\modify.png"));
	loadimage(&next_page, _T("image\\next_page.png"));
	loadimage(&password, _T("image\\password.png"));
	loadimage(&personal_information_management_blue_student, _T("image\\personal_information_management_blue_student.png"));
	loadimage(&personal_information_management_blue_teacher, _T("image\\personal_information_management_blue_teacher.png"));
	loadimage(&personal_information_management_green_student, _T("image\\personal_information_management_green_student.png"));
	loadimage(&personal_information_management_green_teacher, _T("image\\personal_information_management_green_teacher.png"));
	loadimage(&phonenumber, _T("image\\phonenumber.png"));
	loadimage(&picture_1, _T("image\\picture_1.png"));
	loadimage(&picture_2, _T("image\\picture_2.png"));
	loadimage(&picture_3, _T("image\\picture_3.png"));
	loadimage(&query_according_to_course_name, _T("image\\query_according_to_course_name.png"));
	loadimage(&query_course_selection_result_blue, _T("image\\query_course_selection_result_blue.png"));
	loadimage(&query_course_selection_result_green, _T("image\\query_course_selection_result_green.png"));
	loadimage(&school, _T("image\\school.png"));
	loadimage(&school_motto, _T("image\\school_motto.png"));
	loadimage(&search_according_to_the_course_name, _T("image\\search_according_to_the_course_name.png"));
	loadimage(&search_course_blue, _T("image\\search_course_blue.png"));
	loadimage(&search_course_green, _T("image\\search_course_green.png"));
	loadimage(&select_course_management_blue, _T("image\\select_course_management_blue.png"));
	loadimage(&select_course_management_green, _T("image\\select_course_management_green.png"));
	loadimage(&select_your_type, _T("image\\select_your_type.png"));
	loadimage(&ser, _T("image\\ser.png"));
	loadimage(&statistics, _T("image\\statistics.png"));
	loadimage(&img_student, _T("image\\img_student.png"));
	loadimage(&student_course_selection_center_blue, _T("image\\student_course_selection_center_blue.png"));
	loadimage(&student_course_selection_center_green, _T("image\\student_course_selection_center_green.png"));
	loadimage(&img_teacher, _T("image\\img_teacher.png"));
	loadimage(&time_now, _T("image\\time_now.png"));
	loadimage(&up, _T("image\\up.png"));
	loadimage(&welcome, _T("image\\welcome.png"));
	loadimage(&search, _T("image\\search.png"));
	loadimage(&logout_teacher, _T("image\\logout_teacher.png"));
	loadimage(&button_exit, _T("image\\button_exit.png"));
	loadimage(&add, _T("image\\add.png"));
	loadimage(&picture_4, _T("image\\picture_4.jpg"));
	loadimage(&picture_login_stu_wait, _T("image\\picture_login_stu_wait.png"));
	loadimage(&picture_login_tea_wait, _T("image\\picture_login_tea_wait.png"));
	loadimage(&button_login, _T("image\\button_login.jpg"));
	loadimage(&button_login_2, _T("image\\button_login_2.jpg"));
	loadimage(&picture_5, _T("image\\picture_5.jpg"));
	loadimage(&button_back, _T("image\\button_back.png"));
	loadimage(&button_back_2, _T("image\\button_back_2.png"));
	loadimage(&button_select_course, _T("image\\select_course.png"));
	loadimage(&button_been_select, _T("image\\button_been_select.png"));
	loadimage(&button_delete_stu, _T("image\\button_delete_stu.png"));
	loadimage(&refresh, _T("image\\refresh.png"));
	loadimage(&button_lunch_give_up, _T("image\\lunch_give_up.png"));
	loadimage(&button_lunch_course, _T("image\\lunch_course.png"));
	loadimage(&button_chose_n, _T("image\\chose_n.png"));
	loadimage(&button_chose_y, _T("image\\chose_y.png"));
	loadimage(&button_course_lunched, _T("image\\course_lunched.png"));
	loadimage(&button_exit2, _T("image\\exit.png"));
	loadimage(&button_verify, _T("image\\verify.png"));
	loadimage(&add_student_info_blue, _T("image\\admin\\add_student_info_blue.png"));
	loadimage(&add_student_info_green, _T("image\\admin\\add_student_info_green.png"));
	loadimage(&add_teacher_info_blue, _T("image\\admin\\add_teacher_info_blue.png"));
	loadimage(&add_teacher_info_green, _T("image\\admin\\add_teacher_info_green.png"));
	loadimage(&delete_stu_info_blue, _T("image\\admin\\delete_stu_info_blue.png"));
	loadimage(&delete_stu_info_green, _T("image\\admin\\delete_stu_info_green.png"));
	loadimage(&delete_teacher_info_blue, _T("image\\admin\\delete_teacher_info_blue.png"));
	loadimage(&delete_teacher_info_green, _T("image\\admin\\delete_teacher_info_green.png"));
	loadimage(&email, _T("image\\admin\\name.png"));
	loadimage(&number, _T("image\\admin\\number.png"));
	loadimage(&password2, _T("image\\admin\\password.png"));
	loadimage(&phone, _T("image\\admin\\phone.png"));
	loadimage(&school2, _T("image\\admin\\school.png"));
	loadimage(&stu_id, _T("image\\admin\\stu_id.png"));
	loadimage(&logo_total_course_num, _T("image\\admin\\total_course_num.png"));
	loadimage(&logo_total_student_num, _T("image\\admin\\total_student_num.png"));
	loadimage(&logo_total_teacher_num, _T("image\\admin\\total_teacher_num.png"));
	loadimage(&admin_system, _T("image\\admin\\admin_system.png"));
	loadimage(&system_statue, _T("image\\admin\\system_statue.png"));
	loadimage(&see_system_statue_blue, _T("image\\admin\\see_system_statue_blue.png"));
	loadimage(&see_system_statue_green, _T("image\\admin\\see_system_statue_green.png"));
	loadimage(&logout_admin, _T("image\\admin\\logout.png"));
	loadimage(&button_in_order, _T("image\\admin\\in_order.png"));
	loadimage(&button_course_chosen_population, _T("image\\admin\\course_chosen_population.png"));
	loadimage(&button_saturated, _T("image\\admin\\saturated.png"));
	loadimage(&button_suggest_action, _T("image\\admin\\suggest_action.png"));
	loadimage(&button_add_verify, _T("image\\admin\\add_verify.png"));
	loadimage(&button_course_not_lunched, _T("image\\courses_haven't_lunch.png"));

	loadimage(&mao, _T("image\\num\\mao.png"));
	loadimage(&num_1, _T("image\\num\\1.png"));
	loadimage(&num_2, _T("image\\num\\2.png"));
	loadimage(&num_3, _T("image\\num\\3.png"));
	loadimage(&num_4, _T("image\\num\\4.png"));
	loadimage(&num_5, _T("image\\num\\5.png"));
	loadimage(&num_6, _T("image\\num\\6.png"));
	loadimage(&num_7, _T("image\\num\\7.png"));
	loadimage(&num_8, _T("image\\num\\8.png"));
	loadimage(&num_9, _T("image\\num\\9.png"));
	loadimage(&num_0, _T("image\\num\\0.png"));
	loadimage(&kuang, _T("image\\num\\kuang.png"));
	loadimage(&zhua1, _T("image\\zhua1.jpg"));
	loadimage(&zhua2, _T("image\\zhua2.jpg"));
	loadimage(&creater, _T("image\\creater.jpg"));

	setbkcolor(WHITE);
	cleardevice();
	BeginBatchDraw();


	mciSendString(_T("open sound\\welcome.mp3 alias welcome"), NULL, 0, NULL);//载入欢迎语
	mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误提示音
	mciSendString(_T("open sound\\di.mp3 alias di"), NULL, 0, NULL);//载入滴滴
	mciSendString(_T("open sound\\di2.wav alias di2"), NULL, 0, NULL);//载入
	mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入
	mciSendString(_T("open sound\\login.mp3 alias login"), NULL, 0, NULL);//载入已登录
	mciSendString(_T("open sound\\logout.mp3 alias logout"), NULL, 0, NULL);//载入已登出
	mciSendString(_T("open sound\\exit_s.mp3 alias exit_s"), NULL, 0, NULL);//载入欢迎再次使用
	mciSendString(_T("open sound\\login_fail.mp3 alias login_fail"), NULL, 0, NULL);//载入登陆失败
	mciSendString(_T("open sound\\motto.mp3 alias motto"), NULL, 0, NULL);//载入校训
	mciSendString(_T("open sound\\modfiy_fail.mp3 alias modfiy_fail"), NULL, 0, NULL);//载入修改失败
	mciSendString(_T("open sound\\modify_successful.mp3 alias modify_successful"), NULL, 0, NULL);//载入修改成功
	mciSendString(_T("open sound\\add_fail.mp3 alias add_fail"), NULL, 0, NULL);//载入添加失败
	mciSendString(_T("open sound\\add_successful.mp3 alias add_successful"), NULL, 0, NULL);//载入添加成功

//	MessageBox(NULL, TEXT("播放"), TEXT("音乐"),0);//测试音乐播放正确
	mciSendString(_T("play welcome "), NULL, 0, NULL);//播放欢迎提示
//	mciSendString(_T("close welcome"), NULL, 0, NULL);
	//mciSendString(_T("play bkmusic repeat"), NULL, 0, NULL);//循环播放bgm

	time_begin = clock();//获取当前记时

	return 0;
}


int login(person &current_user) {
	MOUSEMSG m;		// 定义鼠标消息
	int type = -1;
	int  x = 400, y = WIN_HIGH - 100;
	while (1) {
		get_current_time(current_year, current_mounth, current_day, current_hour, current_min, current_second);
		//show
		cleardevice();
		putimage(20, 20, &school);
		putimage(20 + logo_school_wide, 35, &course_management_system);
		putimage(WIN_WIDE - logo_login_wide - 30, 20, &login_system);
		putimage(20 + logo_school_wide - 20, 20 + logo_hello_system_high + 40, &welcome);
		putimage(20 + logo_school_wide - 40, 20 + logo_hello_system_high + 40 + logo_welcome_high + 50, &select_your_type);

		putimage(20 + logo_school_wide, 20 + logo_hello_system_high + 40 + logo_welcome_high + 50 + logo_select_your_type_high + 15, &img_teacher);
		putimage(20 + logo_school_wide, 20 + logo_hello_system_high + 40 + logo_welcome_high + 50 + logo_select_your_type_high + 15 + button_firstpage_high + 10, &img_student);
		putimage(20 + logo_school_wide, 20 + logo_hello_system_high + 40 + logo_welcome_high + 50 + logo_select_your_type_high + 15 + (button_firstpage_high + 10) * 2, &img_administrator);
		putimage(20 + logo_school_wide, 20 + logo_hello_system_high + 40 + logo_welcome_high + 50 + logo_select_your_type_high + 15 + (button_firstpage_high + 10) * 3, &button_exit);
		putimage(WIN_WIDE - 60 - picture_1_wide, 20 + logo_login_high + 40, &picture_1);//显示图片

		
		//输出小时十位
		x = 550, y = WIN_HIGH - 100;
		switch (current_hour / 10) {
			case 1:
				 putimage(x ,y , &num_1);
				break;
			case 2:
				putimage(x , y, &num_2);
				break;
			case 3:
				putimage(x , y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x , y, &num_5);
				break;
			case 6:
				putimage(x , y, &num_6);
				break;
			case 7:
				putimage(x , y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x , y, &num_9);
				break;
			case 0:
				putimage(x , y, &num_0);
				break;
			}

		//输出小时个位
		x = 550 +33, y = WIN_HIGH - 100;
		switch (current_hour % 10) {
		case 1:
			putimage(x, y, &num_1);
			break;
		case 2:
			putimage(x, y, &num_2);
			break;
		case 3:
			putimage(x, y, &num_3);
			break;
		case 4:
			putimage(x, y, &num_4);
			break;
		case 5:
			putimage(x, y, &num_5);
			break;
		case 6:
			putimage(x, y, &num_6);
			break;
		case 7:
			putimage(x, y, &num_7);
			break;
		case 8:
			putimage(x, y, &num_8);
			break;
		case 9:
			putimage(x, y, &num_9);
			break;
		case 0:
			putimage(x, y, &num_0);
			break;
		}

		if (current_second % 2 == 0)
			putimage(550 + 66, WIN_HIGH - 100, &mao);

		//输出分钟十位
		x = 570 + 66, y = WIN_HIGH - 100;
		switch (current_min / 10) {
		case 1:
			putimage(x, y, &num_1);
			break;
		case 2:
			putimage(x, y, &num_2);
			break;
		case 3:
			putimage(x, y, &num_3);
			break;
		case 4:
			putimage(x, y, &num_4);
			break;
		case 5:
			putimage(x, y, &num_5);
			break;
		case 6:
			putimage(x, y, &num_6);
			break;
		case 7:
			putimage(x, y, &num_7);
			break;
		case 8:
			putimage(x, y, &num_8);
			break;
		case 9:
			putimage(x, y, &num_9);
			break;
		case 0:
			putimage(x, y, &num_0);
			break;
		}


		//输出分钟个位
		x = 570 + 99, y = WIN_HIGH - 100;
		switch (current_min % 10) {
		case 1:
			putimage(x, y, &num_1);
			break;
		case 2:
			putimage(x, y, &num_2);
			break;
		case 3:
			putimage(x, y, &num_3);
			break;
		case 4:
			putimage(x, y, &num_4);
			break;
		case 5:
			putimage(x, y, &num_5);
			break;
		case 6:
			putimage(x, y, &num_6);
			break;
		case 7:
			putimage(x, y, &num_7);
			break;
		case 8:
			putimage(x, y, &num_8);
			break;
		case 9:
			putimage(x, y, &num_9);
			break;
		case 0:
			putimage(x, y, &num_0);
			break;
		}




	
		FlushBatchDraw();

		while (MouseHit())  //这个函数用于检测当前是否有鼠标消息
		{
			int return_right=-1;
			m = GetMouseMsg();
			if (m.uMsg == WM_LBUTTONDOWN)//如果按左键
			{
				if (m.x > 20 + logo_school_wide && m.y > (20 + logo_hello_system_high + 40 + logo_welcome_high + 50 + logo_select_your_type_high + 15) && m.x < 20 + logo_school_wide + button_firstpage_wide && m.y < (20 + logo_hello_system_high + 40 + logo_welcome_high + 50 + logo_select_your_type_high + 15 + button_firstpage_high))
					type = 0;
				if (m.x > 20 + logo_school_wide && m.y > (20 + logo_hello_system_high + 40 + logo_welcome_high + 50 + logo_select_your_type_high + 15 + button_firstpage_high + 10) && m.x < 20 + logo_school_wide + button_firstpage_wide && m.y < (20 + logo_hello_system_high + 40 + logo_welcome_high + 50 + logo_select_your_type_high + 15 + button_firstpage_high + 10 +button_firstpage_high))
					type = 1;
				if (m.x > 20 + logo_school_wide && m.y > (20 + logo_hello_system_high + 40 + logo_welcome_high + 50 + logo_select_your_type_high + 15 + (button_firstpage_high + 10) * 2) && m.x < 20 + logo_school_wide + button_firstpage_wide && m.y < (20 + logo_hello_system_high + 40 + logo_welcome_high + 50 + logo_select_your_type_high + 15 + (button_firstpage_high + 10) * 2 +button_firstpage_high))
					type = 2;
				if (m.x > 20 + logo_school_wide && m.y > (20 + logo_hello_system_high + 40 + logo_welcome_high + 50 + logo_select_your_type_high + 15 + (button_firstpage_high + 10) * 3) && m.x < 20 + logo_school_wide + button_firstpage_wide && m.y < (20 + logo_hello_system_high + 40 + logo_welcome_high + 50 + logo_select_your_type_high + 15 + (button_firstpage_high + 10) * 3 + button_firstpage_high))
					type = 3;
				if (type != -1 && type != 3) {
					return_right = type_and_verify_info(type, current_user);
					if (return_right == 0) {//成功登陆
						mciSendString(_T("close login"), NULL, 0, NULL);//关闭已登录
						mciSendString(_T("open sound\\login.mp3 alias login"), NULL, 0, NULL);//载入已登录
						mciSendString(_T("play login "), NULL, 0, NULL);//播放已登录
						return 0;
					}
					else {//登陆失败
						mciSendString(_T("close login_fail"), NULL, 0, NULL);//关闭登陆失败
						mciSendString(_T("open sound\\login_fail.mp3 alias login_fail"), NULL, 0, NULL);//载入登陆失败提示音
						mciSendString(_T("play login_fail "), NULL, 0, NULL);//播放登陆失败提示音
						return -1;
					}
					
				}
				else if (type == 3) {//退出整个系统
					mciSendString(_T("play exit_s "), NULL, 0, NULL);//播放欢迎再次使用
					MessageBox(NULL, TEXT("确认退出？"), TEXT("欢迎您的再次使用！"), 0);
					exit(0);
				}
			}

			
		}
		Sleep(15);
	}
}


int student_selection_system(person &current_user) {
	int selet = 0;//标记当前选择状态
	MOUSEMSG m;		// 定义鼠标消息

	//载入当前学生
	load_student(current_user);


	courses* total_course;//定义储存课程的数组
	//total_course = (courses*)malloc(sizeof(courses) * get_total_course_num());

	int page_1 = 0;//第一页的所在页数
	int page_2 = 0;
	int page_2_state = 0;
	int page_3 = 0;
	int page_4 = 0;
	courses* current_course_page_2;
	current_course_page_2 = (courses*)malloc(sizeof(courses) * get_total_course_num());
	current_course_page_2 = get_course_info();
	wchar_t search_info_page2[50] = { 0 };
	char search_info_page2_char[50] = { '0' };

	courses* current_course_page_3;
	current_course_page_3 = (courses*)malloc(sizeof(courses) * get_total_course_num());
	course_chosen(current_user.stu.id, current_course_page_3);

	courses* current_course_page_4;
	current_course_page_4 = (courses*)malloc(sizeof(courses) * get_total_course_num());
	course_chosen(current_user.stu.id, current_course_page_4);

	LOGFONT f;
	gettextstyle(&f);						// 获取当前字体设置
	f.lfHeight = 38;						// 设置字体高度为 38
	_tcscpy_s(f.lfFaceName, _T("黑体"));		// 设置字体为“黑体”(高版本 VC 推荐使用 _tcscpy_s 函数)
	f.lfQuality = ANTIALIASED_QUALITY;		// 设置输出效果为抗锯齿  
	settextstyle(&f);						// 设置字体样式
	setbkmode(TRANSPARENT);
	total_course = get_course_info();//获取课程结构数组

	wchar_t tmp_w[100] = { '0' };//宽字符临时变量
	char tmp[100] = { '0' };
	int x = 0, y = 0;
	while (1) {

		
		if (selet == 0) {//默认展示页
			cleardevice();
			setbkcolor(WHITE);
			
			//获取当前时间
			get_current_time(current_year, current_mounth, current_day, current_hour, current_min, current_second);

			//输出小时十位
			x = 100, y = WIN_HIGH - 250;
			switch (current_hour / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出小时个位
			x = 100 + 33, y = WIN_HIGH - 250;
			switch (current_hour % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出冒号
			if (current_second % 2 == 0)
				putimage(100 + 66, WIN_HIGH - 250, &mao);

			//输出分钟十位
			x = 120 + 66, y = WIN_HIGH - 250;
			switch (current_min / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			//输出分钟个位
			x = 120 + 99, y = WIN_HIGH - 250;
			switch (current_min % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}



			putimage(20, 20, &school);
			putimage(20 + logo_school_wide, 35, &course_selection_system);
			putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);

			putimage(40, 20 + logo_school_high + 50, &student_course_selection_center_blue);
			putimage(40, 20 + logo_school_high + 50 + 1 * (button_student_select_high + 10), &search_course_blue);
			putimage(40, 20 + logo_school_high + 50 + 2 * (button_student_select_high + 10), &query_course_selection_result_blue);
			putimage(40, 20 + logo_school_high + 50 + 3 * (button_student_select_high + 10), &delete_course_selection_blue);
			putimage(40, 20 + logo_school_high + 50 + 4 * (button_student_select_high + 10), &personal_information_management_blue_student);
			putimage(40, 20 + logo_school_high + 50 + 5 * (button_student_select_high + 10), &logout);

			putimage(WIN_WIDE - 100 - picture_2_wide, 20 + logo_school_high + 50, &picture_2);//图片
		}
		if (selet == 1) {
			cleardevice();
			setbkcolor(WHITE);

			//获取当前时间
			get_current_time(current_year, current_mounth, current_day, current_hour, current_min, current_second);

			//输出小时十位
			x = 100, y = WIN_HIGH - 250;
			switch (current_hour / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出小时个位
			x = 100 + 33, y = WIN_HIGH - 250;
			switch (current_hour % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出冒号
			if (current_second % 2 == 0)
				putimage(100 + 66, WIN_HIGH - 250, &mao);

			//输出分钟十位
			x = 120 + 66, y = WIN_HIGH - 250;
			switch (current_min / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			//输出分钟个位
			x = 120 + 99, y = WIN_HIGH - 250;
			switch (current_min % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			putimage(20, 20, &school);
			putimage(20 + logo_school_wide, 35, &course_selection_system);
			putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);

			putimage(40, 20 + logo_school_high + 50, &student_course_selection_center_green);
			putimage(40, 20 + logo_school_high + 50 + 1 * (button_student_select_high + 10), &search_course_blue);
			putimage(40, 20 + logo_school_high + 50 + 2 * (button_student_select_high + 10), &query_course_selection_result_blue);
			putimage(40, 20 + logo_school_high + 50 + 3 * (button_student_select_high + 10), &delete_course_selection_blue);
			putimage(40, 20 + logo_school_high + 50 + 4 * (button_student_select_high + 10), &personal_information_management_blue_student);
			putimage(40, 20 + logo_school_high + 50 + 5 * (button_student_select_high + 10), &logout);

			//显示内容框
			setcolor(BLUE);
			rectangle(40 + button_student_select_wide + 50, 20 + logo_school_high + 50, WIN_WIDE - 50, WIN_HIGH - button_next_page_high - 100 - 40);

			putimage(WIN_WIDE - 50 - button_next_page_wide, WIN_HIGH - button_next_page_high - 100, &next_page);//上下页
			putimage(WIN_WIDE - 50 - 2 * button_next_page_wide - 40, WIN_HIGH - button_next_page_high - 100, &last_page);
			
			wchar_t tmp_wchar[100];
			char tmp_char[100];

			
			//sprintf_s(tmp_char,"%d" ,current_user.stu.id );
			//CharToTchar(tmp_char, tmp_wchar);
			//outtext(tmp_wchar);
			
			for (int i = 6*page_1,n=0; i < 6 +6 * page_1; n++,i++) {
				if (i <= get_total_course_num() -1) {
					sprintf_s(tmp_char, "%d", total_course[i].id);
					CharToTchar(tmp_char, tmp_wchar);
					outtextxy(30 + button_student_select_wide + 80, 20 + logo_school_high + 60 + n * 68, tmp_wchar);
			
					CharToTchar(total_course[i].name, tmp_wchar);
					outtextxy(30 + button_student_select_wide + 210, 20 + logo_school_high + 60 + n * 68, tmp_wchar);
			
					CharToTchar(total_course[i].place, tmp_wchar);
					outtextxy(30 + button_student_select_wide + 430, 20 + logo_school_high + 60 + n * 68, tmp_wchar);
				
					CharToTchar(total_course[i].book, tmp_wchar);
					outtextxy(30 + button_student_select_wide + 550, 20 + logo_school_high + 60 + n * 68, tmp_wchar);
				
					sprintf_s(tmp_char, "%d", total_course[i].limit_number);
					CharToTchar(tmp_char, tmp_wchar);
					outtextxy(30 + button_student_select_wide + 700, 20 + logo_school_high + 60 + n * 68, tmp_wchar);


					sprintf_s(tmp_char, "%d", get_course_population(total_course[i].id));
					CharToTchar(tmp_char, tmp_wchar);
					outtextxy(30 + button_student_select_wide + 760, 20 + logo_school_high + 60 + n * 68, tmp_wchar);

					putimage(WIN_WIDE - 50 - button_next_page_wide + 50, WIN_HIGH - button_next_page_high - 195 - (5-n)*68, &button_select_course);
				}
			}


		}
		if (selet == 2) {
			cleardevice();
			setbkcolor(WHITE);

			//获取当前时间
			get_current_time(current_year, current_mounth, current_day, current_hour, current_min, current_second);

			//输出小时十位
			x = 100, y = WIN_HIGH - 250;
			switch (current_hour / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出小时个位
			x = 100 + 33, y = WIN_HIGH - 250;
			switch (current_hour % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出冒号
			if (current_second % 2 == 0)
				putimage(100 + 66, WIN_HIGH - 250, &mao);

			//输出分钟十位
			x = 120 + 66, y = WIN_HIGH - 250;
			switch (current_min / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			//输出分钟个位
			x = 120 + 99, y = WIN_HIGH - 250;
			switch (current_min % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			putimage(20, 20, &school);
			putimage(20 + logo_school_wide, 35, &course_selection_system);
			putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);

			putimage(40, 20 + logo_school_high + 50, &student_course_selection_center_blue);
			putimage(40, 20 + logo_school_high + 50 + 1 * (button_student_select_high + 10), &search_course_green);
			putimage(40, 20 + logo_school_high + 50 + 2 * (button_student_select_high + 10), &query_course_selection_result_blue);
			putimage(40, 20 + logo_school_high + 50 + 3 * (button_student_select_high + 10), &delete_course_selection_blue);
			putimage(40, 20 + logo_school_high + 50 + 4 * (button_student_select_high + 10), &personal_information_management_blue_student);
			putimage(40, 20 + logo_school_high + 50 + 5 * (button_student_select_high + 10), &logout);
			putimage(WIN_WIDE - 50 - button_next_page_wide, WIN_HIGH - button_next_page_high - 100, &next_page);//上下页
			putimage(WIN_WIDE - 50 - 2 * button_next_page_wide - 40, WIN_HIGH - button_next_page_high - 100, &last_page);
			//查询课程.工具栏
			putimage(WIN_WIDE - 50 - button_up_wide, 20 + logo_school_motto_high + 35, &up);
			putimage(WIN_WIDE - 50 - button_up_wide, 20 + logo_school_motto_high + 35, &up);
			putimage(WIN_WIDE - 50 - button_up_wide - 5 - button_down_wide, 20 + logo_school_motto_high + 35, &down);
			putimage(WIN_WIDE - 50 - button_up_wide - 5 - button_down_wide - 10 - button_ser_wide, 20 + logo_school_motto_high + 35, &ser);//放大镜

			setcolor(BLACK);//搜索框
			rectangle(WIN_WIDE - 50 - button_up_wide - 5 - button_down_wide - 10 - button_ser_wide - 300, 20 + logo_school_motto_high + 35, WIN_WIDE - 50 - button_up_wide - 5 - button_down_wide - 10 - button_ser_wide - 1, 20 + logo_school_motto_high + 35 + button_ser_high);
			//显示根据学院，课程名查询
			putimage(WIN_WIDE - 50 - button_up_wide - 5 - button_down_wide - 10 - button_ser_wide - 300 - 15 - logo_query_according_to_course_name_wide, 20 + logo_school_motto_high + 35, &query_according_to_course_name);
			setcolor(BLUE);//显示内容框
			rectangle(40 + button_student_select_wide + 50, 20 + logo_school_motto_high + 35 + button_ser_high + 10, WIN_WIDE - 50, WIN_HIGH - button_next_page_high - 100 - 40);

			wchar_t tmp_wchar[100];
			char tmp_char[100];

			for (int i = 6 * page_2, n = 0; i < 6 + 6 * page_2; n++, i++) {
				if(page_2_state == 0)//默认状态或排序状态，按文件读取排序
					if (i <= get_total_course_num() - 1) {
						sprintf_s(tmp_char, "%d", current_course_page_2[i].id);
						CharToTchar(tmp_char, tmp_wchar);
						outtextxy(30 + button_student_select_wide + 80, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

						CharToTchar(current_course_page_2[i].name, tmp_wchar);
						outtextxy(30 + button_student_select_wide + 210, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

						CharToTchar(current_course_page_2[i].place, tmp_wchar);
						outtextxy(30 + button_student_select_wide + 430, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

						CharToTchar(current_course_page_2[i].book, tmp_wchar);
						outtextxy(30 + button_student_select_wide + 550, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

						sprintf_s(tmp_char, "%d", current_course_page_2[i].limit_number);
						CharToTchar(tmp_char, tmp_wchar);
						outtextxy(30 + button_student_select_wide + 700, 20 + logo_school_high + 95 + n * 60, tmp_wchar);


						sprintf_s(tmp_char, "%d", get_course_population(current_course_page_2[i].id));
						CharToTchar(tmp_char, tmp_wchar);
						outtextxy(30 + button_student_select_wide + 775, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

						putimage(WIN_WIDE - 50 - button_next_page_wide + 50, 20 + logo_school_high + 95 + n * 60, &button_select_course);
					}
				if(page_2_state == 1)//搜索状态
					if (i <= get_search_course_amount(search_info_page2_char) -1) {
					sprintf_s(tmp_char, "%d", current_course_page_2[i].id);
					CharToTchar(tmp_char, tmp_wchar);
					outtextxy(30 + button_student_select_wide + 80, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

					CharToTchar(current_course_page_2[i].name, tmp_wchar);
					outtextxy(30 + button_student_select_wide + 210, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

					CharToTchar(current_course_page_2[i].place, tmp_wchar);
					outtextxy(30 + button_student_select_wide + 430, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

					CharToTchar(current_course_page_2[i].book, tmp_wchar);
					outtextxy(30 + button_student_select_wide + 550, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

					sprintf_s(tmp_char, "%d", current_course_page_2[i].score);
					CharToTchar(tmp_char, tmp_wchar);
					outtextxy(30 + button_student_select_wide + 700, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

					putimage(WIN_WIDE - 50 - button_next_page_wide + 50, 20 + logo_school_high + 95 + n * 60, &button_select_course);
				}
			}


		}
		if (selet == 3) {
			cleardevice();
			setbkcolor(WHITE);

			//获取当前时间
			get_current_time(current_year, current_mounth, current_day, current_hour, current_min, current_second);

			//输出小时十位
			x = 100, y = WIN_HIGH - 250;
			switch (current_hour / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出小时个位
			x = 100 + 33, y = WIN_HIGH - 250;
			switch (current_hour % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出冒号
			if (current_second % 2 == 0)
				putimage(100 + 66, WIN_HIGH - 250, &mao);

			//输出分钟十位
			x = 120 + 66, y = WIN_HIGH - 250;
			switch (current_min / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			//输出分钟个位
			x = 120 + 99, y = WIN_HIGH - 250;
			switch (current_min % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			putimage(20, 20, &school);
			putimage(20 + logo_school_wide, 35, &course_selection_system);
			putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);

			putimage(40, 20 + logo_school_high + 50, &student_course_selection_center_blue);
			putimage(40, 20 + logo_school_high + 50 + 1 * (button_student_select_high + 10), &search_course_blue);
			putimage(40, 20 + logo_school_high + 50 + 2 * (button_student_select_high + 10), &query_course_selection_result_green);
			putimage(40, 20 + logo_school_high + 50 + 3 * (button_student_select_high + 10), &delete_course_selection_blue);
			putimage(40, 20 + logo_school_high + 50 + 4 * (button_student_select_high + 10), &personal_information_management_blue_student);
			putimage(40, 20 + logo_school_high + 50 + 5 * (button_student_select_high + 10), &logout);
			//显示内容框
			setcolor(BLUE);
			rectangle(40 + button_student_select_wide + 50, 20 + logo_school_high + 50, WIN_WIDE - 50, WIN_HIGH - button_next_page_high - 100 - 40);
			//显示上下页按钮
			putimage(WIN_WIDE - 50 - button_next_page_wide, WIN_HIGH - button_next_page_high - 100, &next_page);//上下页
			putimage(WIN_WIDE - 50 - 2 * button_next_page_wide - 40, WIN_HIGH - button_next_page_high - 100, &last_page);

			wchar_t tmp_wchar[100];
			char tmp_char[100];

			for (int i = 6 * page_3, n = 0; i < 6 + 6 * page_3; n++, i++) {
				
					if (i <= get_course_chosen_amount_student(current_user.stu.id) - 1) {
						sprintf_s(tmp_char, "%d", current_course_page_3[i].id);
						CharToTchar(tmp_char, tmp_wchar);
						outtextxy(30 + button_student_select_wide + 80, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

						CharToTchar(current_course_page_3[i].name, tmp_wchar);
						outtextxy(30 + button_student_select_wide + 210, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

						CharToTchar(current_course_page_3[i].place, tmp_wchar);
						outtextxy(30 + button_student_select_wide + 430, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

						CharToTchar(current_course_page_3[i].book, tmp_wchar);
						outtextxy(30 + button_student_select_wide + 550, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

						sprintf_s(tmp_char, "%d", current_course_page_3[i].score);
						CharToTchar(tmp_char, tmp_wchar);
						outtextxy(30 + button_student_select_wide + 700, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

						putimage(WIN_WIDE - 50 - button_next_page_wide + 50, 20 + logo_school_high + 95 + n * 60, &button_been_select);
					}
				
			}



		}
		if (selet == 4) {
			cleardevice();
			setbkcolor(WHITE);

			//获取当前时间
			get_current_time(current_year, current_mounth, current_day, current_hour, current_min, current_second);

			//输出小时十位
			x = 100, y = WIN_HIGH - 250;
			switch (current_hour / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出小时个位
			x = 100 + 33, y = WIN_HIGH - 250;
			switch (current_hour % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出冒号
			if (current_second % 2 == 0)
				putimage(100 + 66, WIN_HIGH - 250, &mao);

			//输出分钟十位
			x = 120 + 66, y = WIN_HIGH - 250;
			switch (current_min / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			//输出分钟个位
			x = 120 + 99, y = WIN_HIGH - 250;
			switch (current_min % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			putimage(20, 20, &school);
			putimage(20 + logo_school_wide, 35, &course_selection_system);
			putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);

			putimage(40, 20 + logo_school_high + 50, &student_course_selection_center_blue);
			putimage(40, 20 + logo_school_high + 50 + 1 * (button_student_select_high + 10), &search_course_blue);
			putimage(40, 20 + logo_school_high + 50 + 2 * (button_student_select_high + 10), &query_course_selection_result_blue);
			putimage(40, 20 + logo_school_high + 50 + 3 * (button_student_select_high + 10), &delete_course_selection_green);
			putimage(40, 20 + logo_school_high + 50 + 4 * (button_student_select_high + 10), &personal_information_management_blue_student);
			putimage(40, 20 + logo_school_high + 50 + 5 * (button_student_select_high + 10), &logout);
			//显示内容框
			setcolor(BLUE);
			rectangle(40 + button_student_select_wide + 50, 20 + logo_school_high + 50, WIN_WIDE - 50, WIN_HIGH - button_next_page_high - 100 - 40);
			//显示上下页按钮
			putimage(WIN_WIDE - 50 - button_next_page_wide, WIN_HIGH - button_next_page_high - 100, &next_page);//上下页
			putimage(WIN_WIDE - 50 - 2 * button_next_page_wide - 40, WIN_HIGH - button_next_page_high - 100, &last_page);

			course_chosen(current_user.stu.id, current_course_page_4);

			wchar_t tmp_wchar[100];
			char tmp_char[100];

			for (int i = 6 * page_4, n = 0; i < 6 + 6 * page_4; n++, i++) {

				if (i <= get_course_chosen_amount_student(current_user.stu.id) - 1) {
					sprintf_s(tmp_char, "%d", current_course_page_4[i].id);
					CharToTchar(tmp_char, tmp_wchar);
					outtextxy(30 + button_student_select_wide + 80, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

					CharToTchar(current_course_page_4[i].name, tmp_wchar);
					outtextxy(30 + button_student_select_wide + 210, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

					CharToTchar(current_course_page_4[i].place, tmp_wchar);
					outtextxy(30 + button_student_select_wide + 430, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

					CharToTchar(current_course_page_4[i].book, tmp_wchar);
					outtextxy(30 + button_student_select_wide + 550, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

					sprintf_s(tmp_char, "%d", current_course_page_4[i].score);
					CharToTchar(tmp_char, tmp_wchar);
					outtextxy(30 + button_student_select_wide + 700, 20 + logo_school_high + 95 + n * 60, tmp_wchar);

					putimage(WIN_WIDE - 50 - button_next_page_wide + 50, 20 + logo_school_high + 95 + n * 60, &button_delete_stu);
				}

			}

		}
		if (selet == 5) {
			cleardevice();
			setbkcolor(WHITE);

			//获取当前时间
			get_current_time(current_year, current_mounth, current_day, current_hour, current_min, current_second);

			//输出小时十位
			x = 100, y = WIN_HIGH - 250;
			switch (current_hour / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出小时个位
			x = 100 + 33, y = WIN_HIGH - 250;
			switch (current_hour % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出冒号
			if (current_second % 2 == 0)
				putimage(100 + 66, WIN_HIGH - 250, &mao);

			//输出分钟十位
			x = 120 + 66, y = WIN_HIGH - 250;
			switch (current_min / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			//输出分钟个位
			x = 120 + 99, y = WIN_HIGH - 250;
			switch (current_min % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			putimage(20, 20, &school);
			putimage(20 + logo_school_wide, 35, &course_selection_system);
			putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);

			putimage(40, 20 + logo_school_high + 50, &student_course_selection_center_blue);
			putimage(40, 20 + logo_school_high + 50 + 1 * (button_student_select_high + 10), &search_course_blue);
			putimage(40, 20 + logo_school_high + 50 + 2 * (button_student_select_high + 10), &query_course_selection_result_blue);
			putimage(40, 20 + logo_school_high + 50 + 3 * (button_student_select_high + 10), &delete_course_selection_blue);
			putimage(40, 20 + logo_school_high + 50 + 4 * (button_student_select_high + 10), &personal_information_management_green_student);
			putimage(40, 20 + logo_school_high + 50 + 5 * (button_student_select_high + 10), &logout);




			putimage(400, 200, &phonenumber);
			setcolor(BLACK);
			char pn[50];
			wchar_t pn_w[50];
			sprintf_s(pn, "%lld", current_user.stu.phone_number);
			CharToTchar(pn, pn_w);
			outtextxy(400 + logo_self_info_wide +100, 200 + 20,pn_w );			
			rectangle(400 + logo_self_info_wide +50,200,400 + logo_self_info_wide + 500,200+70);

			putimage(400, 350, &mailbox);
			CharToTchar(current_user.stu.email, pn_w);
			outtextxy(400 + logo_self_info_wide + 100, 350 + 20, pn_w);
			rectangle(400 + logo_self_info_wide + 50, 350, 400 + logo_self_info_wide + 500, 350 + 70);

			putimage(400, 500, &password);
			CharToTchar(current_user.stu.password, pn_w);
			outtextxy(400 + logo_self_info_wide + 100, 500 + 20, pn_w);
			rectangle(400 + logo_self_info_wide + 50, 500, 400 + logo_self_info_wide + 500, 500 + 70);


			//输出姓名
			CharToTchar(current_user.stu.name, pn_w);
			outtextxy(400 + logo_self_info_wide + 100, 80 + 20, pn_w);
			outtextxy(400 + logo_self_info_wide + 80, 65, L"你好！");

		}
		if (selet == 6) {
			cleardevice();
			setbkcolor(WHITE);

			//获取当前时间
			get_current_time(current_year, current_mounth, current_day, current_hour, current_min, current_second);

			//输出小时十位
			x = 100, y = WIN_HIGH - 250;
			switch (current_hour / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出小时个位
			x = 100 + 33, y = WIN_HIGH - 250;
			switch (current_hour % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出冒号
			if (current_second % 2 == 0)
				putimage(100 + 66, WIN_HIGH - 250, &mao);

			//输出分钟十位
			x = 120 + 66, y = WIN_HIGH - 250;
			switch (current_min / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			//输出分钟个位
			x = 120 + 99, y = WIN_HIGH - 250;
			switch (current_min % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			putimage(20, 20, &school);
			putimage(20 + logo_school_wide, 35, &course_selection_system);
			putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);
			MessageBox(NULL, TEXT("登出成功"), TEXT("提示"), 0);
			current_user.stu.id = 0;
			mciSendString(_T("close logout"), NULL, 0, NULL);//关闭已登出
			mciSendString(_T("open sound\\logout.mp3 alias logout"), NULL, 0, NULL);//载入已登出
			mciSendString(_T("play logout "), NULL, 0, NULL);//播放成功登出
			return 0;
		}

		while (MouseHit())  //这个函数用于检测当前是否有鼠标消息
		{
			m = GetMouseMsg();
			if (m.uMsg == WM_LBUTTONDOWN)//如果按左键
			{
				//如果按左键同时位置在第一个按钮上
				if (m.x > 40 && m.y > (20 + logo_school_high + 50) && m.x < 40 + button_student_select_wide && m.y < (20 + logo_school_high + 50 + button_student_select_high))
					selet = 1;
				//如果按左键同时位置在第二个按钮上
				if (m.x > 40 && m.y > (20 + logo_school_high + 50 + 1 * (button_student_select_high + 10)) && m.x < 40 + button_student_select_wide && m.y < (20 + logo_school_high + 50 + button_student_select_high + 1 * (button_student_select_high + 10)))
					selet = 2;
				//如果按左键同时位置在第三个按钮上
				if (m.x > 40 && m.y > (20 + logo_school_high + 50 + 2 * (button_student_select_high + 10)) && m.x < 40 + button_student_select_wide && m.y < (20 + logo_school_high + 50 + button_student_select_high + 2 * (button_student_select_high + 10)))
				{
					selet = 3;
					course_chosen(current_user.stu.id, current_course_page_3);
				}
				//如果按左键同时位置在第四个按钮上
				if (m.x > 40 && m.y > (20 + logo_school_high + 50 + 3 * (button_student_select_high + 10)) && m.x < 40 + button_student_select_wide && m.y < (20 + logo_school_high + 50 + button_student_select_high + 3 * (button_student_select_high + 10)))
				{
					selet = 4;
					course_chosen(current_user.stu.id, current_course_page_4);
				}
				//如果按左键同时位置在第五个按钮上
				if (m.x > 40 && m.y > (20 + logo_school_high + 50 + 4 * (button_student_select_high + 10)) && m.x < 40 + button_student_select_wide && m.y < (20 + logo_school_high + 50 + button_student_select_high + 4 * (button_student_select_high + 10)))
					selet = 5;
				//如果按左键同时位置在第六个按钮上
				if (m.x > 40 && m.y > (20 + logo_school_high + 50 + 5 * (button_student_select_high + 10)) && m.x < 40 + button_student_select_wide && m.y < (20 + logo_school_high + 50 + button_student_select_high + 5 * (button_student_select_high + 10)))
					selet = 6;

				//点击播放校训
				if (m.x > WIN_WIDE - 40 - logo_school_motto_wide && m.y > 20 && m.x < WIN_WIDE - 40 && m.y < 20 + logo_school_motto_high)
				{
					mciSendString(_T("close motto"), NULL, 0, NULL);//关闭校训
					mciSendString(_T("open sound\\motto.mp3 alias motto"), NULL, 0, NULL);//载入校训
					mciSendString(_T("play motto "), NULL, 0, NULL);//播放校训
				}

				//selet 1
				if (selet == 1) {
					if (m.x > WIN_WIDE - 50 - button_next_page_wide && m.y > WIN_HIGH - button_next_page_high - 100 && m.x < WIN_WIDE - 50 && m.y < WIN_HIGH - 100)		
							page_1++;//如果按左键同时位置在下一页按钮上
					if (m.x > WIN_WIDE - 50 - 2 * button_next_page_wide - 40 && m.y > WIN_HIGH - button_next_page_high - 100 && m.x < WIN_WIDE - 50 - 1 * button_next_page_wide - 40 && m.y < WIN_HIGH - 100)
						if (page_1 >= 1)
							page_1--;//如果按左键同时位置在上一页按钮上
					//按左键同时位置在第一排选课按钮上
					if (m.x > WIN_WIDE - 50 - button_next_page_wide + 50 && m.y > WIN_HIGH - button_next_page_high - 195 - (5 - 0) * 68 && m.x < WIN_WIDE - 50 - button_next_page_wide + 50 + button_select_course_wide && m.y < WIN_HIGH - button_next_page_high - 195 - (5 - 0) * 68 + button_select_course_high)
					{
						if (is_allowed_to_choose(total_course[6 * page_1 + 0].id, current_user.stu.id) == 0) {
							student_select_course(current_user.stu.id,total_course[6*page_1 +0].id);
							mciSendString(_T("close di2"), NULL, 0, NULL);//关闭di2音
							mciSendString(_T("open sound\\di2.wav alias di2"), NULL, 0, NULL);//载入di2音
							mciSendString(_T("play di2 "), NULL, 0, NULL);//播放di2音
							MessageBox(NULL, TEXT("自己选的课一定要认真对待呦~"), TEXT("选课成功!"), 0);
						}
						if (is_allowed_to_choose(total_course[6 * page_1 + 0].id, current_user.stu.id) == -1) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("~请看看其他的课呢~"), TEXT("此课程人数已满"), 0);
						}
						if (is_allowed_to_choose(total_course[6 * page_1 + 0].id, current_user.stu.id) == -2) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("脚踏实地，不要贪心哦"), TEXT("~您本学期选课数量已达上限了呦，若想添加请删除课程~"), 0);
						}
						if (is_allowed_to_choose(total_course[6 * page_1 + 0].id, current_user.stu.id) == -3) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("哎呀！时间冲突了呢"), TEXT("~此门选课和已选课程时间冲突哦~"), 0);
						}
					}
					//按左键同时位置在第二排选课按钮上
					if (m.x > WIN_WIDE - 50 - button_next_page_wide + 50 && m.y > WIN_HIGH - button_next_page_high - 195 - (5 - 1) * 68 && m.x < WIN_WIDE - 50 - button_next_page_wide + 50 + button_select_course_wide && m.y < WIN_HIGH - button_next_page_high - 195 - (5 - 1) * 68 + button_select_course_high)
					{
						if (is_allowed_to_choose(total_course[6 * page_1 + 1].id, current_user.stu.id) == 0) {
							student_select_course(current_user.stu.id, total_course[6 * page_1 + 1].id);
							mciSendString(_T("close di2"), NULL, 0, NULL);//关闭di2音
							mciSendString(_T("open sound\\di2.wav alias di2"), NULL, 0, NULL);//载入di2音
							mciSendString(_T("play di2 "), NULL, 0, NULL);//播放di2音
							MessageBox(NULL, TEXT("自己选的课一定要认真对待呦~"), TEXT("选课成功!"), 0);
						}
						if (is_allowed_to_choose(total_course[6 * page_1 + 1].id, current_user.stu.id) == -1) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("~请看看其他的课呢~"), TEXT("此课程人数已满"), 0);
						}
						if (is_allowed_to_choose(total_course[6 * page_1 + 1].id, current_user.stu.id) == -2) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("脚踏实地，不要贪心哦"), TEXT("~您本学期选课数量已达上限了呦，若想添加请删除课程~"), 0);
						}
						if (is_allowed_to_choose(total_course[6 * page_1 + 1].id, current_user.stu.id) == -3) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("哎呀！时间冲突了呢"), TEXT("~此门选课和已选课程时间冲突哦~"), 0);
						}
					}
					//按左键同时位置在第三排选课按钮上
					if (m.x > WIN_WIDE - 50 - button_next_page_wide + 50 && m.y > WIN_HIGH - button_next_page_high - 195 - (5 - 2) * 68 && m.x < WIN_WIDE - 50 - button_next_page_wide + 50 + button_select_course_wide && m.y < WIN_HIGH - button_next_page_high - 195 - (5 - 2) * 68 + button_select_course_high)
					{
						if (is_allowed_to_choose(total_course[6 * page_1 + 2].id, current_user.stu.id) == 0) {
							student_select_course(current_user.stu.id, total_course[6 * page_1 + 2].id);
							mciSendString(_T("close di2"), NULL, 0, NULL);//关闭di2音
							mciSendString(_T("open sound\\di2.wav alias di2"), NULL, 0, NULL);//载入di2音
							mciSendString(_T("play di2 "), NULL, 0, NULL);//播放di2音
							MessageBox(NULL, TEXT("自己选的课一定要认真对待呦~"), TEXT("选课成功!"), 0);
						}
						if (is_allowed_to_choose(total_course[6 * page_1 + 2].id, current_user.stu.id) == -1) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("~请看看其他的课呢~"), TEXT("此课程人数已满"), 0);
						}
						if (is_allowed_to_choose(total_course[6 * page_1 + 2].id, current_user.stu.id) == -2) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("脚踏实地，不要贪心哦"), TEXT("~您本学期选课数量已达上限了呦，若想添加请删除课程~"), 0);
						}
						if (is_allowed_to_choose(total_course[6 * page_1 + 2].id, current_user.stu.id) == -3) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("哎呀！时间冲突了呢"), TEXT("~此门选课和已选课程时间冲突哦~"), 0);
						}
					}
					//按左键同时位置在第四排选课按钮上
					if (m.x > WIN_WIDE - 50 - button_next_page_wide + 50 && m.y > WIN_HIGH - button_next_page_high - 195 - (5 - 3) * 68 && m.x < WIN_WIDE - 50 - button_next_page_wide + 50 + button_select_course_wide && m.y < WIN_HIGH - button_next_page_high - 195 - (5 - 3) * 68 + button_select_course_high)
					{
						if (is_allowed_to_choose(total_course[6 * page_1 + 3].id, current_user.stu.id) == 0) {
							mciSendString(_T("close di2"), NULL, 0, NULL);//关闭di2音
							mciSendString(_T("open sound\\di2.wav alias di2"), NULL, 0, NULL);//载入di2音
							mciSendString(_T("play di2 "), NULL, 0, NULL);//播放di2音
							student_select_course(current_user.stu.id, total_course[6 * page_1 + 3].id);
							MessageBox(NULL, TEXT("自己选的课一定要认真对待呦~"), TEXT("选课成功!"), 0);
						}
						if (is_allowed_to_choose(total_course[6 * page_1 + 3].id, current_user.stu.id) == -1) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("~请看看其他的课呢~"), TEXT("此课程人数已满"), 0);
						}
						if (is_allowed_to_choose(total_course[6 * page_1 + 3].id, current_user.stu.id) == -2) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("脚踏实地，不要贪心哦"), TEXT("~您本学期选课数量已达上限了呦，若想添加请删除课程~"), 0);
						}
						if (is_allowed_to_choose(total_course[6 * page_1 + 3].id, current_user.stu.id) == -3) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("哎呀！时间冲突了呢"), TEXT("~此门选课和已选课程时间冲突哦~"), 0);
						}
					}
					//按左键同时位置在第五排选课按钮上
					if (m.x > WIN_WIDE - 50 - button_next_page_wide + 50 && m.y > WIN_HIGH - button_next_page_high - 195 - (5 - 4) * 68 && m.x < WIN_WIDE - 50 - button_next_page_wide + 50 + button_select_course_wide && m.y < WIN_HIGH - button_next_page_high - 195 - (5 - 4) * 68 + button_select_course_high)
					{
						if (is_allowed_to_choose(total_course[6 * page_1 + 4].id, current_user.stu.id) == 0) {
							mciSendString(_T("close di2"), NULL, 0, NULL);//关闭di2音
							mciSendString(_T("open sound\\di2.wav alias di2"), NULL, 0, NULL);//载入di2音
							mciSendString(_T("play di2 "), NULL, 0, NULL);//播放di2音
							student_select_course(current_user.stu.id, total_course[6 * page_1 + 4].id);
							MessageBox(NULL, TEXT("自己选的课一定要认真对待呦~"), TEXT("选课成功!"), 0);
						}
						if (is_allowed_to_choose(total_course[6 * page_1 + 4].id, current_user.stu.id) == -1) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("~请看看其他的课呢~"), TEXT("此课程人数已满"), 0);
						}
						if (is_allowed_to_choose(total_course[6 * page_1 + 4].id, current_user.stu.id) == -2) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("脚踏实地，不要贪心哦"), TEXT("~您本学期选课数量已达上限了呦，若想添加请删除课程~"), 0);
						}
						if (is_allowed_to_choose(total_course[6 * page_1 + 4].id, current_user.stu.id) == -3) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("哎呀！时间冲突了呢"), TEXT("~此门选课和已选课程时间冲突哦~"), 0);
						}
					}
					//按左键同时位置在第六排选课按钮上
					if (m.x > WIN_WIDE - 50 - button_next_page_wide + 50 && m.y > WIN_HIGH - button_next_page_high - 195 - (5 - 5) * 68 && m.x < WIN_WIDE - 50 - button_next_page_wide + 50 + button_select_course_wide && m.y < WIN_HIGH - button_next_page_high - 195 - (5 - 5) * 68 + button_select_course_high)
					{
						if (is_allowed_to_choose(total_course[6 * page_1 + 5].id, current_user.stu.id) == 0) {
							mciSendString(_T("close di2"), NULL, 0, NULL);//关闭di2音
							mciSendString(_T("open sound\\di2.wav alias di2"), NULL, 0, NULL);//载入di2音
							mciSendString(_T("play di2 "), NULL, 0, NULL);//播放di2音
							student_select_course(current_user.stu.id, total_course[6 * page_1 + 5].id);
							MessageBox(NULL, TEXT("自己选的课一定要认真对待呦~"), TEXT("选课成功!"), 0);
						}
						if (is_allowed_to_choose(total_course[6 * page_1 + 5].id, current_user.stu.id) == -1) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("~请看看其他的课呢~"), TEXT("此课程人数已满"), 0);
						}
						if (is_allowed_to_choose(total_course[6 * page_1 + 5].id, current_user.stu.id) == -2) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("脚踏实地，不要贪心哦"), TEXT("~您本学期选课数量已达上限了呦，若想添加请删除课程~"), 0);
						}
						if (is_allowed_to_choose(total_course[6 * page_1 + 5].id, current_user.stu.id) == -3) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("哎呀！时间冲突了呢"), TEXT("~此门选课和已选课程时间冲突哦~"), 0);
						}
					}



				}

				if (selet == 2) {
					if (m.x > WIN_WIDE - 50 - button_up_wide - 5 - button_down_wide - 10 - button_ser_wide - 300 && m.y > 20 + logo_school_motto_high + 35 && m.x < WIN_WIDE - 50 - button_up_wide - 5 - button_down_wide - 10 - button_ser_wide - 1 && m.y < 20 + logo_school_motto_high + 35 + button_ser_high)
					{
//						MessageBox(NULL, TEXT("教师"), TEXT("Msg"), 0);
						page_2_state = 1;//标记为搜索状态
						InputBox(search_info_page2, 11, L"请输入您要查询的学院或课程名", L"查询课程");
						TcharToChar(search_info_page2, search_info_page2_char);
						current_course_page_2 = search_course(search_info_page2_char);
						
					}
					if (m.x > WIN_WIDE - 50 - button_next_page_wide && m.y > WIN_HIGH - button_next_page_high - 100 && m.x < WIN_WIDE - 50 && m.y < WIN_HIGH - 100)
						page_2++;//如果按左键同时位置在下一页按钮上
					if (m.x > WIN_WIDE - 50 - 2 * button_next_page_wide - 40 && m.y > WIN_HIGH - button_next_page_high - 100 && m.x < WIN_WIDE - 50 - 1 * button_next_page_wide - 40 && m.y < WIN_HIGH - 100)
						if (page_2 >= 1)
							page_2--;//如果按左键同时位置在上一页按钮上


					//按照选课人数排序//向下箭头
					if (m.x > WIN_WIDE - 50 - button_up_wide - 5 - button_down_wide && m.y > 20 + logo_school_motto_high + 35 && m.x < WIN_WIDE - 50 - button_up_wide - 5 - button_down_wide + button_down_wide && m.y < 20 + logo_school_motto_high + 35 + button_down_high)
					{
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
						MessageBox(NULL, TEXT("按照选课人数从大到小排序"), TEXT("排序哦"), 0);
						sort_number_of_stu(current_course_page_2);
						page_2_state = 0;
					}




					//按照课余量排序//向上箭头
					if (m.x > WIN_WIDE - 50 - button_up_wide && m.y > 20 + logo_school_motto_high + 35 && m.x < WIN_WIDE - 50 - button_up_wide + button_up_wide && m.y < 20 + logo_school_motto_high + 35 + button_up_high)
					{
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
						MessageBox(NULL, TEXT("按照课余量从大到小排序"), TEXT("排序哦"), 0);
						sort_number_of_left(current_course_page_2);
						page_2_state = 0;
					}




					//按左键同时位置在第一排选课按钮上
					if (m.x > WIN_WIDE - 50 - button_next_page_wide + 50 && m.y > 20 + logo_school_high + 95 + 0 * 60 && m.x < WIN_WIDE - 50 - button_next_page_wide + 50 + button_select_course_wide && m.y < 20 + logo_school_high + 95 + 0 * 60 + button_select_course_high)
					{
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 0].id, current_user.stu.id) == 0) {
							student_select_course(current_user.stu.id, current_course_page_2[6 * page_2 + 0].id);
							mciSendString(_T("close di2"), NULL, 0, NULL);//关闭di2音
							mciSendString(_T("open sound\\di2.wav alias di2"), NULL, 0, NULL);//载入di2音
							mciSendString(_T("play di2 "), NULL, 0, NULL);//播放di2音
							MessageBox(NULL, TEXT("自己选的课一定要认真对待呦~"), TEXT("选课成功!"), 0);
						}
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 0].id, current_user.stu.id) == -1) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("~请看看其他的课呢~"), TEXT("此课程人数已满"), 0);
						}
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 0].id, current_user.stu.id) == -2) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("脚踏实地，不要贪心哦"), TEXT("~您本学期选课数量已达上限了呦，若想添加请删除课程~"), 0);
						}
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 0].id, current_user.stu.id) == -3) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("哎呀！时间冲突了呢"), TEXT("~此门选课和已选课程时间冲突哦~"), 0);
						}
					}
					//按左键同时位置在第二排选课按钮上
					if (m.x > WIN_WIDE - 50 - button_next_page_wide + 50 && m.y > 20 + logo_school_high + 95 + 1 * 60 && m.x < WIN_WIDE - 50 - button_next_page_wide + 50 + button_select_course_wide && m.y < 20 + logo_school_high + 95 + 1 * 60 + button_select_course_high)
					{
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 1].id, current_user.stu.id) == 0) {
							student_select_course(current_user.stu.id, current_course_page_2[6 * page_2 + 1].id);
							mciSendString(_T("close di2"), NULL, 0, NULL);//关闭di2音
							mciSendString(_T("open sound\\di2.wav alias di2"), NULL, 0, NULL);//载入di2音
							mciSendString(_T("play di2 "), NULL, 0, NULL);//播放di2音
							MessageBox(NULL, TEXT("自己选的课一定要认真对待呦~"), TEXT("选课成功!"), 0);
						}
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 1].id, current_user.stu.id) == -1) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("~请看看其他的课呢~"), TEXT("此课程人数已满"), 0);
						}
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 1].id, current_user.stu.id) == -2) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("脚踏实地，不要贪心哦"), TEXT("~您本学期选课数量已达上限了呦，若想添加请删除课程~"), 0);
						}
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 1].id, current_user.stu.id) == -3) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("哎呀！时间冲突了呢"), TEXT("~此门选课和已选课程时间冲突哦~"), 0);
						}
					}
					//按左键同时位置在第三排选课按钮上
					if (m.x > WIN_WIDE - 50 - button_next_page_wide + 50 && m.y > 20 + logo_school_high + 95 + 2 * 60 && m.x < WIN_WIDE - 50 - button_next_page_wide + 50 + button_select_course_wide && m.y < 20 + logo_school_high + 95 + 2 * 60 + button_select_course_high)
					{
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 2].id, current_user.stu.id) == 0) {
							student_select_course(current_user.stu.id, current_course_page_2[6 * page_2 + 2].id);
							mciSendString(_T("close di2"), NULL, 0, NULL);//关闭di2音
							mciSendString(_T("open sound\\di2.wav alias di2"), NULL, 0, NULL);//载入di2音
							mciSendString(_T("play di2 "), NULL, 0, NULL);//播放di2音
							MessageBox(NULL, TEXT("自己选的课一定要认真对待呦~"), TEXT("选课成功!"), 0);
						}
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 2].id, current_user.stu.id) == -1) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("~请看看其他的课呢~"), TEXT("此课程人数已满"), 0);
						}
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 2].id, current_user.stu.id) == -2) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("脚踏实地，不要贪心哦"), TEXT("~您本学期选课数量已达上限了呦，若想添加请删除课程~"), 0);
						}
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 2].id, current_user.stu.id) == -3) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("哎呀！时间冲突了呢"), TEXT("~此门选课和已选课程时间冲突哦~"), 0);
						}
					}
					//按左键同时位置在第四排选课按钮上
					if (m.x > WIN_WIDE - 50 - button_next_page_wide + 50 && m.y > 20 + logo_school_high + 95 + 3 * 60 && m.x < WIN_WIDE - 50 - button_next_page_wide + 50 + button_select_course_wide && m.y < 20 + logo_school_high + 95 + 3 * 60 + button_select_course_high)
					{
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 3].id, current_user.stu.id) == 0) {
							student_select_course(current_user.stu.id, current_course_page_2[6 * page_2 + 3].id);
							mciSendString(_T("close di2"), NULL, 0, NULL);//关闭di2音
							mciSendString(_T("open sound\\di2.wav alias di2"), NULL, 0, NULL);//载入di2音
							mciSendString(_T("play di2 "), NULL, 0, NULL);//播放di2音
							MessageBox(NULL, TEXT("自己选的课一定要认真对待呦~"), TEXT("选课成功!"), 0);
						}
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 3].id, current_user.stu.id) == -1) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("~请看看其他的课呢~"), TEXT("此课程人数已满"), 0);
						}
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 3].id, current_user.stu.id) == -2) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("脚踏实地，不要贪心哦"), TEXT("~您本学期选课数量已达上限了呦，若想添加请删除课程~"), 0);
						}
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 3].id, current_user.stu.id) == -3) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("哎呀！时间冲突了呢"), TEXT("~此门选课和已选课程时间冲突哦~"), 0);
						}
					}
					//按左键同时位置在第五排选课按钮上
					if (m.x > WIN_WIDE - 50 - button_next_page_wide + 50 && m.y > 20 + logo_school_high + 95 + 4 * 60 && m.x < WIN_WIDE - 50 - button_next_page_wide + 50 + button_select_course_wide && m.y < 20 + logo_school_high + 95 + 4 * 60 + button_select_course_high)
					{
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 4].id, current_user.stu.id) == 0) {
							student_select_course(current_user.stu.id, current_course_page_2[6 * page_2 + 4].id);
							mciSendString(_T("close di2"), NULL, 0, NULL);//关闭di2音
							mciSendString(_T("open sound\\di2.wav alias di2"), NULL, 0, NULL);//载入di2音
							mciSendString(_T("play di2 "), NULL, 0, NULL);//播放di2音
							MessageBox(NULL, TEXT("自己选的课一定要认真对待呦~"), TEXT("选课成功!"), 0);
						}
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 4].id, current_user.stu.id) == -1) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("~请看看其他的课呢~"), TEXT("此课程人数已满"), 0);
						}
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 4].id, current_user.stu.id) == -2) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("脚踏实地，不要贪心哦"), TEXT("~您本学期选课数量已达上限了呦，若想添加请删除课程~"), 0);
						}
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 4].id, current_user.stu.id) == -3) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("哎呀！时间冲突了呢"), TEXT("~此门选课和已选课程时间冲突哦~"), 0);
						}
					}
					//按左键同时位置在第六排选课按钮上
					if (m.x > WIN_WIDE - 50 - button_next_page_wide + 50 && m.y > 20 + logo_school_high + 95 + 5 * 60 && m.x < WIN_WIDE - 50 - button_next_page_wide + 50 + button_select_course_wide && m.y < 20 + logo_school_high + 95 + 5 * 60 + button_select_course_high)
					{
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 5].id, current_user.stu.id) == 0) {
							student_select_course(current_user.stu.id, current_course_page_2[6 * page_2 + 5].id);
							mciSendString(_T("close di2"), NULL, 0, NULL);//关闭di2音
							mciSendString(_T("open sound\\di2.wav alias di2"), NULL, 0, NULL);//载入di2音
							mciSendString(_T("play di2 "), NULL, 0, NULL);//播放di2音
							MessageBox(NULL, TEXT("自己选的课一定要认真对待呦~"), TEXT("选课成功!"), 0);
						}
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 5].id, current_user.stu.id) == -1) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("~请看看其他的课呢~"), TEXT("此课程人数已满"), 0);
						}
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 5].id, current_user.stu.id) == -2) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("脚踏实地，不要贪心哦"), TEXT("~您本学期选课数量已达上限了呦，若想添加请删除课程~"), 0);
						}
						if (is_allowed_to_choose(current_course_page_2[6 * page_2 + 5].id, current_user.stu.id) == -3) {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("哎呀！时间冲突了呢"), TEXT("~此门选课和已选课程时间冲突哦~"), 0);
						}
					}
				}

				if (selet == 3) {
					if (m.x > WIN_WIDE - 50 - button_next_page_wide && m.y > WIN_HIGH - button_next_page_high - 100 && m.x < WIN_WIDE - 50 && m.y < WIN_HIGH - 100)
						page_3++;//如果按左键同时位置在下一页按钮上
					if (m.x > WIN_WIDE - 50 - 2 * button_next_page_wide - 40 && m.y > WIN_HIGH - button_next_page_high - 100 && m.x < WIN_WIDE - 50 - 1 * button_next_page_wide - 40 && m.y < WIN_HIGH - 100)
						if (page_3 >= 1)
							page_3--;//如果按左键同时位置在上一页按钮上
				}

				if (selet == 4) {
					if (m.x > WIN_WIDE - 50 - button_next_page_wide && m.y > WIN_HIGH - button_next_page_high - 100 && m.x < WIN_WIDE - 50 && m.y < WIN_HIGH - 100)
						page_4++;//如果按左键同时位置在下一页按钮上
					if (m.x > WIN_WIDE - 50 - 2 * button_next_page_wide - 40 && m.y > WIN_HIGH - button_next_page_high - 100 && m.x < WIN_WIDE - 50 - 1 * button_next_page_wide - 40 && m.y < WIN_HIGH - 100)
						if (page_4 >= 1)
							page_4--;//如果按左键同时位置在上一页按钮上

					//按左键同时位置在第一排删课按钮上
					if (m.x > WIN_WIDE - 50 - button_next_page_wide + 50 && m.y > 20 + logo_school_high + 95 + 0 * 60 && m.x < WIN_WIDE - 50 - button_next_page_wide + 50 + button_delete_wide && m.y < 20 + logo_school_high + 95 + 0 * 60 + button_delete_high)
					{
						student_delete_course(current_user.stu.id, current_course_page_4[6 * page_4 + 0].id);
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
					}
					if (m.x > WIN_WIDE - 50 - button_next_page_wide + 50 && m.y > 20 + logo_school_high + 95 + 1 * 60 && m.x < WIN_WIDE - 50 - button_next_page_wide + 50 + button_delete_wide && m.y < 20 + logo_school_high + 95 + 1 * 60 + button_delete_high)
					{
						student_delete_course(current_user.stu.id, current_course_page_4[6 * page_4 + 1].id);
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
					}
					if (m.x > WIN_WIDE - 50 - button_next_page_wide + 50 && m.y > 20 + logo_school_high + 95 + 2 * 60 && m.x < WIN_WIDE - 50 - button_next_page_wide + 50 + button_delete_wide && m.y < 20 + logo_school_high + 95 + 2 * 60 + button_delete_high)
					{
						student_delete_course(current_user.stu.id, current_course_page_4[6 * page_4 + 2].id);
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
					}
					if (m.x > WIN_WIDE - 50 - button_next_page_wide + 50 && m.y > 20 + logo_school_high + 95 + 3 * 60 && m.x < WIN_WIDE - 50 - button_next_page_wide + 50 + button_delete_wide && m.y < 20 + logo_school_high + 95 + 3 * 60 + button_delete_high)
					{
						student_delete_course(current_user.stu.id, current_course_page_4[6 * page_4 + 3].id);
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
					}
					if (m.x > WIN_WIDE - 50 - button_next_page_wide + 50 && m.y > 20 + logo_school_high + 95 + 4 * 60 && m.x < WIN_WIDE - 50 - button_next_page_wide + 50 + button_delete_wide && m.y < 20 + logo_school_high + 95 + 4 * 60 + button_delete_high)
					{
						student_delete_course(current_user.stu.id, current_course_page_4[6 * page_4 + 4].id);
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
					}
					if (m.x > WIN_WIDE - 50 - button_next_page_wide + 50 && m.y > 20 + logo_school_high + 95 + 5 * 60 && m.x < WIN_WIDE - 50 - button_next_page_wide + 50 + button_delete_wide && m.y < 20 + logo_school_high + 95 + 5 * 60 + button_delete_high)
					{
						student_delete_course(current_user.stu.id, current_course_page_4[6 * page_4 + 5].id);
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
					}
				}

				if (selet == 5) {
					if (m.x > 400 + logo_self_info_wide + 50 && m.y > 200 && m.x < 400 + logo_self_info_wide + 500 && m.y < 200 + 70) {
						InputBox(tmp_w, 12, L"请输入您的新电话号码", L"更改电话号");
						TcharToChar(tmp_w, tmp);
						long long r = 0;
						sscanf_s(tmp, "%lld", &r);
						
						if (is_phone_num_right(r)) {
							student_phone_change(current_user.stu.id, r);
							load_student(current_user);
							mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
							mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
							mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
	//						MessageBox(NULL, TEXT("修改成功"), TEXT("个人电话修改"), 0);
						}
						else
						{
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("电话号不正确"), TEXT("电话号不足十一位"), 0);
						}
					}
					if (m.x > 400 + logo_self_info_wide + 50 && m.y > 350 && m.x < 400 + logo_self_info_wide + 500 && m.y < 350 + 70) {
						InputBox(tmp_w, 50, L"请输入您的新邮箱", L"更改邮箱");
					
						TcharToChar(tmp_w, tmp);
						if (is_email_right(tmp)) {
							student_email_change(current_user.stu.id, tmp);
							load_student(current_user);
							mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
							mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
							mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
	//						MessageBox(NULL, TEXT("修改成功"), TEXT("个人邮箱修改"), 0);
						}
						else {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("邮箱格式不正确"), TEXT("修改邮箱"), 0);
						}
					}
					if (m.x > 400 + logo_self_info_wide + 50 && m.y > 500 && m.x < 400 + logo_self_info_wide + 500 && m.y < 500 + 70) {
						InputBox(tmp_w, 20, L"请输入您的新密码", L"更改密码");
						TcharToChar(tmp_w, tmp);
						if (strcmp(tmp, " ") != 0 && strcmp(tmp,"\0")!=0) {
							student_password_change(current_user.stu.id, tmp);
							load_student(current_user);
							mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
							mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
							mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
	//						MessageBox(NULL, TEXT("修改成功"), TEXT("个人密码修改"), 0);
						}
						else {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("密码不能为空"), TEXT("修改密码"), 0);
						}
					}
				}

			}

		}
		FlushBatchDraw();
		Sleep(15);
	}
}


int teacher_selection_system(person& current_user) {
	load_teacher(current_user);
	int selet = 0;//标记当前选择状态
	int page_1 = 0;//第一页页码
	int page_2 = 0;//记录第二页页码
	MOUSEMSG m;		// 定义鼠标消息
	char tmp_char[100] = { '0' };
	wchar_t tmp_wchar[100] = { '0' };

	LOGFONT f;
	gettextstyle(&f);						// 获取当前字体设置
	f.lfHeight = 28;						// 设置字体高度为 48
	_tcscpy_s(f.lfFaceName, _T("黑体"));		// 设置字体为“黑体”(高版本 VC 推荐使用 _tcscpy_s 函数)
	f.lfQuality = ANTIALIASED_QUALITY;		// 设置输出效果为抗锯齿  
	settextstyle(&f);						// 设置字体样式
	setbkmode(TRANSPARENT);


	int x = 0, y = 0;
	int page_1_state = 0;
	int page_2_state = 0;
	courses* teacher_course;
	teacher_course = get_teacher_course_info(current_user.tea.id);
	courses *sort_courses;
	sort_courses = (courses*)malloc(sizeof(courses) * get_total_course_num());
	sort_number_of_stu(sort_courses);
	char ser_info[1000] = { '\0' };
	courses* serach_result;
serach_result = (courses*)malloc(sizeof(course) * count_course_num_teacher(current_user.tea.id) + sizeof(courses));
	
	while (1) {
		
			
		if (selet == 0) {//展示页
			cleardevice();
			setbkcolor(WHITE);


			putimage(700, 20, &kuang);

			//获取当前时间
			get_current_time(current_year, current_mounth, current_day, current_hour, current_min, current_second);

			//输出小时十位
			x = 760, y =  60;
			switch (current_hour / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出小时个位
			x = 760 + 33, y =  60;
			switch (current_hour % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出冒号
			if (current_second % 2 == 0)
				putimage(760 + 66,  60, &mao);

			//输出分钟十位
			x = 780 + 66, y =  60;
			switch (current_min / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			//输出分钟个位
			x = 780 + 99, y =  60;
			switch (current_min % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}
			



			putimage(20, 20, &school);
			putimage(20 + logo_school_wide, 35, &bupt_teacher_management_system);
			putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);

			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70, &select_course_management_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 1 * (button_teacher_select_high + 20), &course_management_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 2 * (button_teacher_select_high + 20), &personal_information_management_blue_teacher);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 3 * (button_teacher_select_high + 20), &logout_teacher);

			putimage(WIN_WIDE - 130 - picture_3_wide, 20 + logo_school_high + 100, &picture_3);//图片
		}
		if (selet == 1) {


			
			cleardevice();
			setbkcolor(WHITE);


			putimage(700, 20, &kuang);

			//获取当前时间
			get_current_time(current_year, current_mounth, current_day, current_hour, current_min, current_second);

			//输出小时十位
			x = 760, y = 60;
			switch (current_hour / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出小时个位
			x = 760 + 33, y = 60;
			switch (current_hour % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出冒号
			if (current_second % 2 == 0)
				putimage(760 + 66, 60, &mao);

			//输出分钟十位
			x = 780 + 66, y = 60;
			switch (current_min / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			//输出分钟个位
			x = 780 + 99, y = 60;
			switch (current_min % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}



			putimage(20, 20, &school);
			putimage(20 + logo_school_wide, 35, &bupt_teacher_management_system);
			putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);

			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70, &select_course_management_green);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 1 * (button_teacher_select_high + 20), &course_management_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 2 * (button_teacher_select_high + 20), &personal_information_management_blue_teacher);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 3 * (button_teacher_select_high + 20), &logout_teacher);



			//下箭头
			putimage(WIN_WIDE - 50 - button_up_wide - 5 - button_down_wide, 20 + logo_school_motto_high + 30, &down);
			putimage(WIN_WIDE - 50 - button_up_wide - 5 - button_down_wide - 10 - button_ser_wide, 20 + logo_school_motto_high + 30, &refresh);
			


			
			putimage(20 + logo_school_wide + logo_bupt_teacher_management_system_wide - 5,35 + logo_bupt_teacher_management_system_high + 20 , &courses_have_been_set);//显示已开设课程提示
			putimage(WIN_WIDE - 50 - button_next_page_wide, WIN_HIGH - button_next_page_high - 100, &next_page);//上下页
			putimage(WIN_WIDE - 50 - 2 * button_next_page_wide - 40, WIN_HIGH - button_next_page_high - 100, &last_page);
			putimage(20 + logo_school_wide + logo_bupt_teacher_management_system_wide - 5, WIN_HIGH - button_next_page_high - 100, &statistics);
			setcolor(BLUE);
			rectangle(20 + logo_school_wide + logo_bupt_teacher_management_system_wide - 5, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 3, WIN_WIDE - 40, WIN_HIGH - button_next_page_high - 100 - 7);



			if(page_1_state ==0)
				for (int i = 7 * page_1, n = 0; i < 7 + 7 * page_1; n++, i++) {
					if (i <= count_course_num_teacher(current_user.tea.id) - 1) {
						sprintf_s(tmp_char, "%d", teacher_course[i].id);
						CharToTchar(tmp_char, tmp_wchar);
						outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide +10, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 +n*58, tmp_wchar);

						CharToTchar(teacher_course[i].name, tmp_wchar);
						outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide +110, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, tmp_wchar);

						CharToTchar(teacher_course[i].place, tmp_wchar);
						outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide +260, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, tmp_wchar);

						CharToTchar(teacher_course[i].book, tmp_wchar);
						outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide +360, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, tmp_wchar);

						sprintf_s(tmp_char, "%d", teacher_course[i].score);
						CharToTchar(tmp_char, tmp_wchar);
						outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide +460, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, tmp_wchar);

					
						sprintf_s(tmp_char, "%d", get_course_population(teacher_course[i].id));
						CharToTchar(tmp_char, tmp_wchar);
						outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide + 530, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, tmp_wchar);

						putimage(WIN_WIDE - 40 - 25 - button_action_wide, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, &button_course_lunched);
						putimage(WIN_WIDE - 40 - 45 - 2 * button_action_wide, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, &find);
					}


				}
			else if (page_1_state == 1) {

				for (int i = 7 * page_1, n = 0; i < 7 + 7 * page_1; n++, i++) {//默认状态或排序状态，按文件读取排序
					if (i <= get_total_course_num() - 1) {
						sprintf_s(tmp_char, "%d", sort_courses[i].id);
						CharToTchar(tmp_char, tmp_wchar);
						outtextxy(30 + button_student_select_wide + 200, 10 + logo_school_high + 95 + n * 60, tmp_wchar);

						CharToTchar(sort_courses[i].name, tmp_wchar);
						outtextxy(30 + button_student_select_wide + 330, 10 + logo_school_high + 95 + n * 60, tmp_wchar);

						CharToTchar(sort_courses[i].place, tmp_wchar);
						outtextxy(30 + button_student_select_wide + 550, 10 + logo_school_high + 95 + n * 60, tmp_wchar);

						CharToTchar(sort_courses[i].book, tmp_wchar);
						outtextxy(30 + button_student_select_wide + 670, 10 + logo_school_high + 95 + n * 60, tmp_wchar);

						sprintf_s(tmp_char, "%d", sort_courses[i].limit_number);
						CharToTchar(tmp_char, tmp_wchar);
						outtextxy(30 + button_student_select_wide + 820, 10 + logo_school_high + 95 + n * 60, tmp_wchar);


						sprintf_s(tmp_char, "%d", get_course_population(sort_courses[i].id));
						CharToTchar(tmp_char, tmp_wchar);
						outtextxy(30 + button_student_select_wide + 895, 10 + logo_school_high + 95 + n * 60, tmp_wchar);

						
					}
				}
			}




		}
		if (selet == 2) {

			teacher_course = get_teacher_course_info(current_user.tea.id);
			cleardevice();


			putimage(700, 20, &kuang);

			//获取当前时间
			get_current_time(current_year, current_mounth, current_day, current_hour, current_min, current_second);

			//输出小时十位
			x = 760, y = 60;
			switch (current_hour / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出小时个位
			x = 760 + 33, y = 60;
			switch (current_hour % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出冒号
			if (current_second % 2 == 0)
				putimage(760 + 66, 60, &mao);

			//输出分钟十位
			x = 780 + 66, y = 60;
			switch (current_min / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			//输出分钟个位
			x = 780 + 99, y = 60;
			switch (current_min % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//显示根据学院，课程名查询
			putimage(WIN_WIDE - 30 - button_up_wide - 5 - button_down_wide - 10 - button_ser_wide, 10 + logo_school_motto_high + 35, &ser);//放大镜
			putimage(WIN_WIDE - 30 - button_up_wide - 5 - button_down_wide - 10 - button_ser_wide +40, 10 + logo_school_motto_high + 35, &refresh);//刷新

			setcolor(BLACK);//搜索框
			rectangle(WIN_WIDE - 30 - button_up_wide - 5 - button_down_wide - 10 - button_ser_wide - 300, 10 + logo_school_motto_high + 35, WIN_WIDE - 30 - button_up_wide - 5 - button_down_wide - 10 - button_ser_wide - 1, 10 + logo_school_motto_high + 35 + button_ser_high);
			
			CharToTchar(ser_info, tmp_wchar);
			outtextxy(WIN_WIDE - 30 - button_up_wide - 5 - button_down_wide - 10 - button_ser_wide - 300, 10 + logo_school_motto_high + 35, tmp_wchar);


			setbkcolor(WHITE);
			putimage(20, 20, &school);
			putimage(20 + logo_school_wide, 35, &bupt_teacher_management_system);
			putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);

			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70, &select_course_management_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 1 * (button_teacher_select_high + 20), &course_management_green);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 2 * (button_teacher_select_high + 20), &personal_information_management_blue_teacher);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 3 * (button_teacher_select_high + 20), &logout_teacher);


			putimage(20 + logo_school_wide + logo_bupt_teacher_management_system_wide - 5, 35 + logo_bupt_teacher_management_system_high + 20, &courses_have_been_set);//显示已开设课程提示
			putimage(WIN_WIDE - 50 - button_next_page_wide, WIN_HIGH - button_next_page_high - 100, &next_page);//上下页
			putimage(WIN_WIDE - 50 - 2 * button_next_page_wide - 40, WIN_HIGH - button_next_page_high - 100, &last_page);
			putimage(20 + logo_school_wide + logo_bupt_teacher_management_system_wide - 5, WIN_HIGH - button_next_page_high - 100, &add);
			setcolor(BLUE);
			rectangle(20 + logo_school_wide + logo_bupt_teacher_management_system_wide - 5, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 3, WIN_WIDE - 40, WIN_HIGH - button_next_page_high - 100 - 7);
			
			if(page_2_state == 0)
				for (int i = 6 * page_2, n = 0; i < 6 + 6 * page_2; n++, i++) {
					if (i <= count_course_num_teacher(current_user.tea.id) - 1) {
						sprintf_s(tmp_char, "%d", teacher_course[i].id);
						CharToTchar(tmp_char, tmp_wchar);
						outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide + 10, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, tmp_wchar);

						CharToTchar(teacher_course[i].name, tmp_wchar);
						outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide + 110, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, tmp_wchar);

						CharToTchar(teacher_course[i].place, tmp_wchar);
						outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide + 260, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, tmp_wchar);

						CharToTchar(teacher_course[i].book, tmp_wchar);
						outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide + 360, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, tmp_wchar);

						sprintf_s(tmp_char, "%d", teacher_course[i].score);
						CharToTchar(tmp_char, tmp_wchar);
						outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide + 460, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, tmp_wchar);

						sprintf_s(tmp_char, "%d", get_course_population(teacher_course[i].id));
						CharToTchar(tmp_char, tmp_wchar);
						outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide + 530, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, tmp_wchar);

						putimage(WIN_WIDE - 40 - 25 - button_action_wide, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, &button_delete);
						putimage(WIN_WIDE - 40 - 45 - 2 * button_action_wide, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, &modify);
					}
				}
			else if (page_2_state == 1) {//搜索状态

				for (int i = 6 * page_2, n = 0; i < 6 + 6 * page_2; n++, i++) {
					if (i <= get_search_course_amount(teacher_course, count_course_num_teacher(current_user.tea.id), ser_info) - 1) {
						sprintf_s(tmp_char, "%d", serach_result[i].id);
						CharToTchar(tmp_char, tmp_wchar);
						outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide + 10, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, tmp_wchar);

						CharToTchar(serach_result[i].name, tmp_wchar);
						outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide + 110, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, tmp_wchar);

						CharToTchar(serach_result[i].place, tmp_wchar);
						outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide + 260, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, tmp_wchar);

						CharToTchar(serach_result[i].book, tmp_wchar);
						outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide + 360, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, tmp_wchar);

						sprintf_s(tmp_char, "%d", serach_result[i].score);
						CharToTchar(tmp_char, tmp_wchar);
						outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide + 460, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, tmp_wchar);

						sprintf_s(tmp_char, "%d", get_course_population(serach_result[i].id));
						CharToTchar(tmp_char, tmp_wchar);
						outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide + 530, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, tmp_wchar);

						putimage(WIN_WIDE - 40 - 25 - button_action_wide, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, &button_delete);
						putimage(WIN_WIDE - 40 - 45 - 2 * button_action_wide, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58, &modify);
					}
				}
			//	MessageBox(NULL, TEXT("，请重试"), TEXT("幸苦啦~"), 0);
			}





		}
		if (selet == 3) {
			load_teacher(current_user);
			cleardevice();
			setbkcolor(WHITE);


			putimage(700, 20, &kuang);

			//获取当前时间
			get_current_time(current_year, current_mounth, current_day, current_hour, current_min, current_second);

			//输出小时十位
			x = 760, y = 60;
			switch (current_hour / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出小时个位
			x = 760 + 33, y = 60;
			switch (current_hour % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出冒号
			if (current_second % 2 == 0)
				putimage(760 + 66, 60, &mao);

			//输出分钟十位
			x = 780 + 66, y = 60;
			switch (current_min / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			//输出分钟个位
			x = 780 + 99, y = 60;
			switch (current_min % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}



			putimage(20, 20, &school);
			putimage(20 + logo_school_wide, 35, &bupt_teacher_management_system);
			putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);

			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70, &select_course_management_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 1 * (button_teacher_select_high + 20), &course_management_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 2 * (button_teacher_select_high + 20), &personal_information_management_green_teacher);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 3 * (button_teacher_select_high + 20), &logout_teacher);


			//信息
			putimage(400, 200, &phonenumber);
			setcolor(BLACK);
			char pn[50];
			wchar_t pn_w[50];
			//phone number
			sprintf_s(pn, "%lld", current_user.tea.phone_number);
			CharToTchar(pn, pn_w);
			outtextxy(400 + logo_self_info_wide + 100, 200 + 20, pn_w);
			rectangle(400 + logo_self_info_wide + 50, 200, 400 + logo_self_info_wide + 500, 200 + 70);

			//mailbox
			putimage(400, 350, &mailbox);
			CharToTchar(current_user.tea.email, pn_w);
			outtextxy(400 + logo_self_info_wide + 100, 350 + 20, pn_w);
			rectangle(400 + logo_self_info_wide + 50, 350, 400 + logo_self_info_wide + 500, 350 + 70);

			//password
			putimage(400, 500, &password);
			CharToTchar(current_user.tea.password, pn_w);
			outtextxy(400 + logo_self_info_wide + 100, 500 + 20, pn_w);
			rectangle(400 + logo_self_info_wide + 50, 500, 400 + logo_self_info_wide + 500, 500 + 70);


			//输出姓名
			CharToTchar(current_user.tea.name, pn_w);
			outtextxy(350 + logo_self_info_wide + 100, 80 + 20, pn_w);
			outtextxy(350 + logo_self_info_wide + 80, 65, L"你好！");




		}
		if (selet == 4) {
			cleardevice();
			setbkcolor(WHITE);


			putimage(700, 20, &kuang);

			//获取当前时间
			get_current_time(current_year, current_mounth, current_day, current_hour, current_min, current_second);

			//输出小时十位
			x = 760, y = 60;
			switch (current_hour / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出小时个位
			x = 760 + 33, y = 60;
			switch (current_hour % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出冒号
			if (current_second % 2 == 0)
				putimage(760 + 66, 60, &mao);

			//输出分钟十位
			x = 780 + 66, y = 60;
			switch (current_min / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			//输出分钟个位
			x = 780 + 99, y = 60;
			switch (current_min % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}



			putimage(20, 20, &school);
			putimage(20 + logo_school_wide, 35, &bupt_teacher_management_system);
			putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70, &select_course_management_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 1 * (button_teacher_select_high + 20), &course_management_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 2 * (button_teacher_select_high + 20), &personal_information_management_blue_teacher);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 3 * (button_teacher_select_high + 20), &logout_teacher);
			MessageBox(NULL, TEXT("登出成功"), TEXT("提示"), 0);
			current_user.tea.id = 0;
			mciSendString(_T("close logout"), NULL, 0, NULL);//关闭已登出
			mciSendString(_T("open sound\\logout.mp3 alias logout"), NULL, 0, NULL);//载入已登出
			mciSendString(_T("play logout "), NULL, 0, NULL);//播放成功登出
			return 0;
		}



		while (MouseHit())  //这个函数用于检测当前是否有鼠标消息
		{
			m = GetMouseMsg();
			if (m.uMsg == WM_LBUTTONDOWN)//如果按左键
			{
				if (m.x > 20 + logo_school_wide - 15 && m.y > (35 + logo_bupt_teacher_management_system_high + 70 + 0 * (button_teacher_select_high + 20)) && m.x < 20 + logo_school_wide - 15 + button_teacher_select_wide && m.y < (35 + logo_bupt_teacher_management_system_high + 70 + 0 * (button_teacher_select_high + 20) + button_teacher_select_high))
					selet = 1;//如果按左键同时位置在第一个按钮上
				if (m.x > 20 + logo_school_wide - 15 && m.y > (35 + logo_bupt_teacher_management_system_high + 70 + 1 * (button_teacher_select_high + 20)) && m.x < 20 + logo_school_wide - 15 + button_teacher_select_wide && m.y < (35 + logo_bupt_teacher_management_system_high + 70 + 1 * (button_teacher_select_high + 20) + button_teacher_select_high))
					selet = 2;//如果按左键同时位置在第二个按钮上
				if (m.x > 20 + logo_school_wide - 15 && m.y > (35 + logo_bupt_teacher_management_system_high + 70 + 2 * (button_teacher_select_high + 20)) && m.x < 20 + logo_school_wide - 15 + button_teacher_select_wide && m.y < (35 + logo_bupt_teacher_management_system_high + 70 + 2 * (button_teacher_select_high + 20) + button_teacher_select_high))
					selet = 3;//如果按左键同时位置在第三个按钮上
				if (m.x > 20 + logo_school_wide - 15 && m.y > (35 + logo_bupt_teacher_management_system_high + 70 + 3 * (button_teacher_select_high + 20)) && m.x < 20 + logo_school_wide - 15 + button_teacher_select_wide && m.y < (35 + logo_bupt_teacher_management_system_high + 70 + 3 * (button_teacher_select_high + 20) + button_teacher_select_high))
					selet = 4;//如果按左键同时位置在第四个按钮上
				//点击播放校训
				if (m.x > WIN_WIDE - 40 - logo_school_motto_wide && m.y > 20 && m.x < WIN_WIDE - 40 && m.y < 20 + logo_school_motto_high)
				{
					mciSendString(_T("close motto"), NULL, 0, NULL);//关闭校训
					mciSendString(_T("open sound\\motto.mp3 alias motto"), NULL, 0, NULL);//载入校训
					mciSendString(_T("play motto "), NULL, 0, NULL);//播放校训
				}


				if (selet == 1) {
					if (m.x > WIN_WIDE - 50 - button_next_page_wide && m.y > WIN_HIGH - button_next_page_high - 100 && m.x < WIN_WIDE - 50 && m.y < WIN_HIGH - 100)
						page_1++;//如果按左键同时位置在下一页按钮上
					if (m.x > WIN_WIDE - 50 - 2 * button_next_page_wide - 40 && m.y > WIN_HIGH - button_next_page_high - 100 && m.x < WIN_WIDE - 50 - 1 * button_next_page_wide - 40 && m.y < WIN_HIGH - 100)
						if (page_1 >= 1)
							page_1--;//如果按左键同时位置在上一页按钮上

					//统计按钮
					if (m.x > 20 + logo_school_wide + logo_bupt_teacher_management_system_wide - 5 && m.y > WIN_HIGH - button_next_page_high - 100 && m.x < 20 + logo_school_wide + logo_bupt_teacher_management_system_wide - 5 + button_action_small_wide&& m.y < WIN_HIGH - button_next_page_high - 100 + button_action_small_high)
					{
						int statistic = count_course_num_teacher(current_user.tea.id);
						sprintf_s(tmp_char, "您已开设了%d门课", statistic);
						CharToTchar(tmp_char, tmp_wchar);
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
						MessageBox(NULL, tmp_wchar, TEXT("幸苦啦~"), 0);
					}
					//查看按钮
					for(int i = 6 * page_1, n = 0; i < 6 + 6 * page_1; n++, i++)
						if (i <= count_course_num_teacher(current_user.tea.id) - 1)
							if (m.x > WIN_WIDE - 40 - 45 - 2 * button_action_wide && m.y > 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58 && m.x < WIN_WIDE - 40 - 45 - 2 * button_action_wide + button_action_wide && m.y < 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58 +button_action_high)
							{
								mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
								mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
								mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
								check_course_details(teacher_course[6 * page_1 + n].id);//查看名单
							}
					//删除按钮
					//for (int i = 6 * page_1, n = 0; i < 6 + 6 * page_1; n++, i++)
					//	if (i <= count_course_num_teacher(current_user.tea.id) - 1)
					//		if (m.x > WIN_WIDE - 40 - 25 -  button_action_wide && m.y > 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58 && m.x < WIN_WIDE - 40 - 25 -  button_action_wide + button_action_wide && m.y < 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58 + button_action_high)
					//		{
					//			if (is_allowed_to_del_course(teacher_course[i].id))//判断是否符合删课条件
					//			{
					//				teacher_delete_course(teacher_course[i].id);//老师删课
					//				mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
					//				mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
					//				mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
					//			}
					//			else
					//			{
					//				mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭di3音
					//				mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入di3音
					//				mciSendString(_T("play wrong "), NULL, 0, NULL);//播放di3音
					//				MessageBox(NULL, TEXT("当前课程不能被删除"), TEXT("课程已开始或人数超过30~"), 0);

					//			}
					//		}
					for (int i = 6 * page_1, n = 0; i < 6 + 6 * page_1; n++, i++)
						if (i <= count_course_num_teacher(current_user.tea.id) - 1)
							if (m.x > WIN_WIDE - 40 - 25 -  button_action_wide && m.y > 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58 && m.x < WIN_WIDE - 40 - 25 -  button_action_wide + button_action_wide && m.y < 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58 + button_action_high)
							{
								mciSendString(_T("close di2"), NULL, 0, NULL);//关闭di3音
								mciSendString(_T("open sound\\di2.wav alias di2"), NULL, 0, NULL);//载入di3音
								mciSendString(_T("play di2 "), NULL, 0, NULL);//播放di3音
								MessageBox(NULL, TEXT("您已开设当前课程"), TEXT("老师您辛苦啦~"), 0);
							}

					//按照选课人数排序//向下箭头
					if (m.x > WIN_WIDE - 50 - button_up_wide - 5 - button_down_wide && m.y > 10 + logo_school_motto_high + 35 && m.x < WIN_WIDE - 50 - button_up_wide - 5 - button_down_wide + button_down_wide && m.y < 10 + logo_school_motto_high + 35 + button_down_high)
					{
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
						MessageBox(NULL, TEXT("按照选课人数从大到小排序"), TEXT("排序哦"), 0);
						sort_number_of_stu(sort_courses);
						page_1_state = 1;
					}
					//刷新回到自己课程的列表
					if (m.x > WIN_WIDE - 50 - button_up_wide - 5 - button_down_wide - 10 - button_ser_wide && m.y > 20 + logo_school_motto_high + 30 && m.x < WIN_WIDE - 50 - button_up_wide - 5 - button_down_wide - 10 - button_ser_wide +39 && m.y < 20 + logo_school_motto_high + 30 +42)
					{
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
						MessageBox(NULL, TEXT("教师个人课表"), TEXT("教师系统"), 0);
						teacher_course = get_teacher_course_info(current_user.tea.id);
						page_1_state = 0;
					}

				}


				if (selet == 2) {
					if (m.x > WIN_WIDE - 50 - button_next_page_wide && m.y > WIN_HIGH - button_next_page_high - 100 && m.x < WIN_WIDE - 50 && m.y < WIN_HIGH - 100)
						page_2++;//如果按左键同时位置在下一页按钮上
					if (m.x > WIN_WIDE - 50 - 2 * button_next_page_wide - 40 && m.y > WIN_HIGH - button_next_page_high - 100 && m.x < WIN_WIDE - 50 - 1 * button_next_page_wide - 40 && m.y < WIN_HIGH - 100)
						if (page_2 >= 1)
							page_2--;//如果按左键同时位置在上一页按钮上



					if (page_2_state == 0) {

						//删除按钮
						for (int i = 6 * page_2, n = 0; i < 6 + 6 * page_2; n++, i++)
							if (i <= count_course_num_teacher(current_user.tea.id) - 1)
								if (m.x > WIN_WIDE - 40 - 25 - button_action_wide && m.y > 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58 && m.x < WIN_WIDE - 40 - 25 - button_action_wide + button_action_wide && m.y < 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58 + button_action_high)
								{
									if (is_allowed_to_del_course(teacher_course[i].id))//判断是否符合删课条件
									{
										teacher_delete_course(teacher_course[i].id);//老师删课
										mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
										mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
										mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
									}
									else
									{
										mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭di3音
										mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入di3音
										mciSendString(_T("play wrong "), NULL, 0, NULL);//播放di3音
										MessageBox(NULL, TEXT("当前课程不能被删除"), TEXT("课程已开始或人数超过30~"), 0);

									}
								}


						//修改按钮
						for (int i = 6 * page_2, n = 0; i < 6 + 6 * page_2; n++, i++)
							if (i <= count_course_num_teacher(current_user.tea.id) - 1)
								if (m.x > WIN_WIDE - 40 - 45 - 2 * button_action_wide && m.y > 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58 && m.x < WIN_WIDE - 40 - 45 - 2 * button_action_wide + button_action_wide && m.y < 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58 + button_action_high)
								{
									mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
									mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
									mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音

									if (teacher_modify_course_info(teacher_course[i].id))//进入修改页面并判断返回值
									{
										mciSendString(_T("close modify_successful"), NULL, 0, NULL);//关闭修改成功
										mciSendString(_T("open sound\\modify_successful.mp3 alias modify_successful"), NULL, 0, NULL);//载入修改成功
										mciSendString(_T("play modify_successful "), NULL, 0, NULL);//播放修改成功
									}
									else {
										mciSendString(_T("close modfiy_fail"), NULL, 0, NULL);//关闭修改失败
										mciSendString(_T("open sound\\modfiy_fail.mp3 alias modfiy_fail"), NULL, 0, NULL);//载入修改失败
										mciSendString(_T("play modfiy_fail "), NULL, 0, NULL);//播放修改失败
									}

								}

					}
					if (page_2_state == 1) {

						//删除按钮//搜索状态
						for (int i = 6 * page_2, n = 0; i < 6 + 6 * page_2; n++, i++)
							if (i <= get_search_course_amount(teacher_course, count_course_num_teacher(current_user.tea.id), ser_info) - 1)
								if (m.x > WIN_WIDE - 40 - 25 - button_action_wide && m.y > 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58 && m.x < WIN_WIDE - 40 - 25 - button_action_wide + button_action_wide && m.y < 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58 + button_action_high)
								{
									if (is_allowed_to_del_course(serach_result[i].id))//判断是否符合删课条件
									{
										teacher_delete_course(serach_result[i].id);//老师删课
										mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
										mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
										mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
									}
									else
									{
										mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭di3音
										mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入di3音
										mciSendString(_T("play wrong "), NULL, 0, NULL);//播放di3音
										MessageBox(NULL, TEXT("当前课程不能被删除"), TEXT("课程已开始或人数超过30~"), 0);

									}
								}



						//修改按钮
						for (int i = 6 * page_2, n = 0; i < 6 + 6 * page_2; n++, i++)
							if (i <= get_search_course_amount(teacher_course, count_course_num_teacher(current_user.tea.id), ser_info) - 1)
								if (m.x > WIN_WIDE - 40 - 45 - 2 * button_action_wide && m.y > 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58 && m.x < WIN_WIDE - 40 - 45 - 2 * button_action_wide + button_action_wide && m.y < 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 58 + button_action_high)
								{
									mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
									mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
									mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音

									if (teacher_modify_course_info(serach_result[i].id))//进入修改页面并判断返回值
									{
										mciSendString(_T("close modify_successful"), NULL, 0, NULL);//关闭修改成功
										mciSendString(_T("open sound\\modify_successful.mp3 alias modify_successful"), NULL, 0, NULL);//载入修改成功
										mciSendString(_T("play modify_successful "), NULL, 0, NULL);//播放修改成功
									}
									else {
										mciSendString(_T("close modfiy_fail"), NULL, 0, NULL);//关闭修改失败
										mciSendString(_T("open sound\\modfiy_fail.mp3 alias modfiy_fail"), NULL, 0, NULL);//载入修改失败
										mciSendString(_T("play modfiy_fail "), NULL, 0, NULL);//播放修改失败
									}

								}

					}
						


					



					//添加按钮
					if (m.x > 20 + logo_school_wide + logo_bupt_teacher_management_system_wide - 5 && m.y > WIN_HIGH - button_next_page_high - 100 && m.x < 20 + logo_school_wide + logo_bupt_teacher_management_system_wide - 5 + button_action_small_wide && m.y < WIN_HIGH - button_next_page_high - 100 + button_action_small_high)
					{

						if (add_course(current_user.tea.id)) //添加课程并接受返回值判断
						{

							/*int statistic = count_course_num_teacher(current_user.tea.id);
							sprintf_s(tmp_char, "开课成功！\n您已开设了%d门课", statistic);
							CharToTchar(tmp_char, tmp_wchar);
							MessageBox(NULL, tmp_wchar, TEXT("幸苦啦~"), 0);*/
							mciSendString(_T("close add_successful"), NULL, 0, NULL);//关闭添加成功
							mciSendString(_T("open sound\\add_successful.mp3 alias add_successful"), NULL, 0, NULL);//载入添加成功
							mciSendString(_T("play add_successful "), NULL, 0, NULL);//播放添加成功
							
						}
						else
						{
							mciSendString(_T("close add_fail"), NULL, 0, NULL);//关闭添加失败
							mciSendString(_T("open sound\\add_fail.mp3 alias add_fail"), NULL, 0, NULL);//载入添加失败
							mciSendString(_T("play add_fail "), NULL, 0, NULL);//播放添加失败
							//MessageBox(NULL, TEXT("好像有些问题呢，请重试"), TEXT("幸苦啦~"), 0);
						}
					}
					//搜索
					if (m.x > WIN_WIDE - 30 - button_up_wide - 5 - button_down_wide - 10 - button_ser_wide - 300 && m.y > 10 + logo_school_motto_high + 35 && m.x < WIN_WIDE - 30 - button_up_wide - 5 - button_down_wide - 10 - button_ser_wide - 1 && m.y < 10 + logo_school_motto_high + 35 + button_ser_high)
					{
						InputBox(tmp_wchar, 11, L"搜索您已开设过的课程", L"课程名查询");
						TcharToChar(tmp_wchar, tmp_char);
						strcpy_s(ser_info, tmp_char);
						serach_result = search_course_from_list(teacher_course, count_course_num_teacher(current_user.tea.id), tmp_char);
						page_2_state = 1;//调整为搜索状态

						//MessageBox(NULL, TEXT("好像有些问题呢，请重试"), TEXT("幸苦啦~"), 0);
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
					}
					//刷新回到自己的列表
					
					if (m.x > WIN_WIDE - 30 - button_up_wide - 5 - button_down_wide - 10 - button_ser_wide + 40 && m.y > 10 + logo_school_motto_high + 35 && m.x < WIN_WIDE - 30 - button_up_wide - 5 - button_down_wide - 10 - button_ser_wide + 40 +39&& m.y < 10 + logo_school_motto_high + 35 +42)
					{
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
						//MessageBox(NULL, TEXT("教师个人课表"), TEXT("教师系统"), 0);
						teacher_course = get_teacher_course_info(current_user.tea.id);
						page_2_state = 0;

					}


				}


				if (selet == 3) {
					if (m.x > 400 + logo_self_info_wide + 50 && m.y > 200 && m.x < 400 + logo_self_info_wide + 500 && m.y < 200 + 70) {
						InputBox(tmp_wchar, 12, L"请输入您的新电话号码", L"更改电话号");
						TcharToChar(tmp_wchar, tmp_char);
						long long r = 0;
						sscanf_s(tmp_char, "%lld", &r);

						if (is_phone_num_right(r)) {
							teacher_phone_change(current_user.tea.id, r);
							load_teacher(current_user);
							mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
							mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
							mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
	//						MessageBox(NULL, TEXT("修改成功"), TEXT("个人电话修改"), 0);
						}
						else
						{
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("电话号不正确"), TEXT("电话号不足十一位"), 0);
						}
					}
					if (m.x > 400 + logo_self_info_wide + 50 && m.y > 350 && m.x < 400 + logo_self_info_wide + 500 && m.y < 350 + 70) {
						InputBox(tmp_wchar, 50, L"请输入您的新邮箱", L"更改邮箱");

						TcharToChar(tmp_wchar, tmp_char);
						if (is_email_right(tmp_char)) {
							teacher_email_change(current_user.tea.id, tmp_char);
							load_teacher(current_user);
							mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
							mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
							mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
	//						MessageBox(NULL, TEXT("修改成功"), TEXT("个人邮箱修改"), 0);
						}
						else {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("邮箱格式不正确"), TEXT("修改邮箱"), 0);
						}
					}
					if (m.x > 400 + logo_self_info_wide + 50 && m.y > 500 && m.x < 400 + logo_self_info_wide + 500 && m.y < 500 + 70) {
						InputBox(tmp_wchar, 20, L"请输入您的新密码", L"更改密码");
						TcharToChar(tmp_wchar, tmp_char);
						if (strcmp(tmp_char, "\0") && strcmp(tmp_char, " ")) {
							teacher_password_change(current_user.tea.id, tmp_char);
							load_teacher(current_user);
							mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
							mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
							mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
	//						MessageBox(NULL, TEXT("修改成功"), TEXT("个人密码修改"), 0);
						}
						else {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("密码不能为空"), TEXT("修改密码"), 0);
						}
					}
				}


			}

		}


		FlushBatchDraw();
		Sleep(15);
	}
}


int admin_selection_system(person& current_user) {
	int selet = 0;//标记当前选择状态
	MOUSEMSG m;		// 定义鼠标消息

	LOGFONT f;
	gettextstyle(&f);						// 获取当前字体设置
	f.lfHeight = 38;						// 设置字体高度为 48
	_tcscpy_s(f.lfFaceName, _T("黑体"));		// 设置字体为“黑体”(高版本 VC 推荐使用 _tcscpy_s 函数)
	f.lfQuality = ANTIALIASED_QUALITY;		// 设置输出效果为抗锯齿  
	settextstyle(&f);						// 设置字体样式
	setbkmode(TRANSPARENT);

	teachers teacher_add;
	teacher_add.department[0] = '\0';
	teacher_add.email[0] = '\0';
	teacher_add.name[0] = '\0';
	teacher_add.password[0] = '\0';
	teacher_add.phone_number = NULL;
	
	students student_add;
	student_add.department[0] = '\0';
	student_add.email[0] = '\0';
	student_add.name[0] = '\0';
	student_add.password[0] = '\0';
	student_add.phone_number = 0;
	 
	sprintf_s(student_add.sex, "男");
	bool stu_sex = true;//0代表女生

	char tmp_char[100];
	wchar_t tmp_wchar[100];

	int course_chose_population = 0;
	int capacity = 0;
	for (int i = 0; i < get_total_course_num(); i++) {
		course_chose_population += get_course_population(100001 + i);
	}
	for (int i = 0; i < get_total_course_num(); i++) {
		capacity += get_course_limt_population(100001 + i);
	}
	long long tmp_phone = 0;
	int x = 0, y = 0;
	while (1) {

		if (selet == 0) {
			cleardevice();
			setbkcolor(WHITE);


			putimage(700, 20, &kuang);

			//获取当前时间
			get_current_time(current_year, current_mounth, current_day, current_hour, current_min, current_second);

			//输出小时十位
			x = 760, y = 60;
			switch (current_hour / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出小时个位
			x = 760 + 33, y = 60;
			switch (current_hour % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出冒号
			if (current_second % 2 == 0)
				putimage(760 + 66, 60, &mao);

			//输出分钟十位
			x = 780 + 66, y = 60;
			switch (current_min / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			//输出分钟个位
			x = 780 + 99, y = 60;
			switch (current_min % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			putimage(20, 20, &school);
			putimage(20 + logo_school_wide, 35, &admin_system);
			putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);

			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70, &see_system_statue_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 1 * (button_teacher_select_high ), &add_student_info_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 2 * (button_teacher_select_high ), &add_teacher_info_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 3 * (button_teacher_select_high ), &delete_stu_info_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 4 * (button_teacher_select_high), &logout_admin);

			putimage(WIN_WIDE - 130 - picture_3_wide, 20 + logo_school_high + 100, &picture_5);//图片


		}

		//查看系统运行状态
		if (selet == 1) {
			cleardevice();
			setbkcolor(WHITE);


			putimage(700, 20, &kuang);

			//获取当前时间
			get_current_time(current_year, current_mounth, current_day, current_hour, current_min, current_second);

			//输出小时十位
			x = 760, y = 60;
			switch (current_hour / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出小时个位
			x = 760 + 33, y = 60;
			switch (current_hour % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出冒号
			if (current_second % 2 == 0)
				putimage(760 + 66, 60, &mao);

			//输出分钟十位
			x = 780 + 66, y = 60;
			switch (current_min / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			//输出分钟个位
			x = 780 + 99, y = 60;
			switch (current_min % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			putimage(20, 20, &school);
			putimage(20 + logo_school_wide, 35, &admin_system);
			putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);

			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70, &see_system_statue_green);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 1 * (button_teacher_select_high), &add_student_info_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 2 * (button_teacher_select_high), &add_teacher_info_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 3 * (button_teacher_select_high), &delete_stu_info_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 4 * (button_teacher_select_high), &logout_admin);

			putimage(350, 160, &system_statue);
			putimage(350, 250, &logo_total_course_num);
			putimage(350, 340, &logo_total_student_num);
			putimage(350, 430, &logo_total_teacher_num);
			putimage(350, 520, &button_course_chosen_population);
			putimage(350, 610, &button_saturated);
			putimage(350, 700, &button_suggest_action);

			putimage(800, 160, &button_in_order);
			setcolor(BLACK);
			sprintf_s(tmp_char, "全校共开设%d门课", get_total_course_num());
			CharToTchar(tmp_char, tmp_wchar);
			outtextxy(800, 250, tmp_wchar);

			sprintf_s(tmp_char, "全校共%d名学生", get_total_student_num());
			CharToTchar(tmp_char, tmp_wchar);
			outtextxy(800, 340,tmp_wchar );


			sprintf_s(tmp_char, "全校共%d名老师", get_total_teacher_num());
			CharToTchar(tmp_char, tmp_wchar);
			outtextxy(800, 430,tmp_wchar );

			//选课人次
			course_chose_population = 0;
			for (int i = 0; i < get_total_course_num(); i++) {
				course_chose_population += get_course_population(100001 + i);
			}
			sprintf_s(tmp_char, "%d", course_chose_population);
			CharToTchar(tmp_char, tmp_wchar);
			outtextxy(800, 520, tmp_wchar);

			//输出饱和度
			capacity = 0;
			for (int i = 0; i < get_total_course_num(); i++) {
				capacity += get_course_limt_population(100001 + i);
			}
			sprintf_s(tmp_char, "%f %%", (float)course_chose_population/(float)capacity *100.0);
			CharToTchar(tmp_char, tmp_wchar);
			outtextxy(800, 610, tmp_wchar);

			if((float)course_chose_population / (float)capacity >=0.5 && (float)course_chose_population / (float)capacity <= 0.95)
				outtextxy(800, 700, TEXT("保持现状"));
			else if((float)course_chose_population / (float)capacity<0.5)
				outtextxy(800, 700, TEXT("课余量过大，减少课程数量"));
			else if((float)course_chose_population / (float)capacity>0.95)
				outtextxy(800, 700, TEXT("课余量过小，增加课程数量"));

		}

		//添加学生信息
		if (selet == 2) {
			cleardevice();
			setbkcolor(WHITE);


			putimage(700, 20, &kuang);

			//获取当前时间
			get_current_time(current_year, current_mounth, current_day, current_hour, current_min, current_second);

			//输出小时十位
			x = 760, y = 60;
			switch (current_hour / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出小时个位
			x = 760 + 33, y = 60;
			switch (current_hour % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出冒号
			if (current_second % 2 == 0)
				putimage(760 + 66, 60, &mao);

			//输出分钟十位
			x = 780 + 66, y = 60;
			switch (current_min / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			//输出分钟个位
			x = 780 + 99, y = 60;
			switch (current_min % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			//logo
			putimage(20, 20, &school);
			putimage(20 + logo_school_wide, 35, &admin_system);
			putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);

			//导航栏
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70, &see_system_statue_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 1 * (button_teacher_select_high), &add_student_info_green);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 2 * (button_teacher_select_high), &add_teacher_info_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 3 * (button_teacher_select_high), &delete_stu_info_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 4 * (button_teacher_select_high), &logout_admin);

			//初始化获得学生id
			student_add.id = 2019000001 + get_total_student_num();

			setcolor(BLUE);
			outtextxy(380, 210, TEXT("学生id"));
			outtextxy(380, 280, TEXT("学生电话"));
			outtextxy(380, 350, TEXT("学生学院"));
			outtextxy(380, 420, TEXT("学生Email"));
			outtextxy(380, 490, TEXT("学生密码"));
			outtextxy(380, 560, TEXT("学生姓名"));
			outtextxy(380, 630, TEXT("学生性别"));


			sprintf_s(tmp_char, "%d", student_add.id);
			CharToTchar(tmp_char, tmp_wchar);
			rectangle(580, 210, 800, 248);
			outtextxy(580, 210, tmp_wchar);

			sprintf_s(tmp_char, "%lld", student_add.phone_number);
			CharToTchar(tmp_char, tmp_wchar);
			rectangle(580, 280, 800, 318);
			outtextxy(580, 280, tmp_wchar);

			CharToTchar(student_add.department, tmp_wchar);
			rectangle(580, 350, 800, 388);
			outtextxy(580, 350, tmp_wchar);

			CharToTchar(student_add.email, tmp_wchar);
			rectangle(580, 420, 800, 458);
			outtextxy(580, 420, tmp_wchar);

			CharToTchar(student_add.password, tmp_wchar);
			rectangle(580, 490, 800, 528);
			outtextxy(580, 490, tmp_wchar);

			CharToTchar(student_add.name, tmp_wchar);
			rectangle(580, 560, 800, 598);
			outtextxy(580, 560, tmp_wchar);


			outtextxy(580, 630, TEXT("男"));
			outtextxy(680, 630, TEXT("女"));
			if (stu_sex) {
				putimage(630, 630, &button_chose_y);
				putimage(730, 630, &button_chose_n);
			}
			else
			{
				putimage(630, 630, &button_chose_n);
				putimage(730, 630, &button_chose_y);
			}

			putimage(WIN_WIDE - 400, WIN_HIGH - 150, &button_add_verify);

		}

		//添加教师信息
		if (selet == 3) {
			cleardevice();
			setbkcolor(WHITE);


			putimage(700, 20, &kuang);

			//获取当前时间
			get_current_time(current_year, current_mounth, current_day, current_hour, current_min, current_second);

			//输出小时十位
			x = 760, y = 60;
			switch (current_hour / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出小时个位
			x = 760 + 33, y = 60;
			switch (current_hour % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出冒号
			if (current_second % 2 == 0)
				putimage(760 + 66, 60, &mao);

			//输出分钟十位
			x = 780 + 66, y = 60;
			switch (current_min / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			//输出分钟个位
			x = 780 + 99, y = 60;
			switch (current_min % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			putimage(20, 20, &school);
			putimage(20 + logo_school_wide, 35, &admin_system);
			putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);

			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70, &see_system_statue_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 1 * (button_teacher_select_high), &add_student_info_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 2 * (button_teacher_select_high), &add_teacher_info_green);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 3 * (button_teacher_select_high), &delete_stu_info_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 4 * (button_teacher_select_high), &logout_admin);

			//初始化获得教师id
			teacher_add.id = 2017000001+get_total_teacher_num();

			setcolor(BLUE);
			outtextxy(380, 210, TEXT("教师id"));
			outtextxy(380, 280, TEXT("教师电话"));
			outtextxy(380, 350, TEXT("教师学院"));
			outtextxy(380, 420, TEXT("教师Email"));
			outtextxy(380, 490, TEXT("教师密码"));
			outtextxy(380, 560, TEXT("教师姓名"));

			sprintf_s(tmp_char, "%d", teacher_add.id);
			CharToTchar(tmp_char, tmp_wchar);
			rectangle(580, 210, 800, 248);
			outtextxy(580, 210, tmp_wchar);

			sprintf_s(tmp_char, "%lld", teacher_add.phone_number);
			CharToTchar(tmp_char, tmp_wchar);
			rectangle(580, 280, 800, 318);
			outtextxy(580, 280, tmp_wchar);

			CharToTchar(teacher_add.department, tmp_wchar);
			rectangle(580, 350, 800, 388);
			outtextxy(580, 350, tmp_wchar);

			CharToTchar(teacher_add.email, tmp_wchar);
			rectangle(580, 420, 800, 458);
			outtextxy(580, 420, tmp_wchar);

			CharToTchar(teacher_add.password, tmp_wchar);
			rectangle(580, 490, 800, 528);
			outtextxy(580, 490, tmp_wchar);

			CharToTchar(teacher_add.name, tmp_wchar);
			rectangle(580, 560, 800, 598);
			outtextxy(580, 560, tmp_wchar);

			putimage(WIN_WIDE - 400, WIN_HIGH - 150, &button_add_verify);
		}

		//删除学生信息//因为此功能过于变态//改为制作人员合影
		if (selet == 4) {
			cleardevice();
			setbkcolor(WHITE);


			putimage(700, 20, &kuang);

			//获取当前时间
			get_current_time(current_year, current_mounth, current_day, current_hour, current_min, current_second);

			//输出小时十位
			x = 760, y = 60;
			switch (current_hour / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出小时个位
			x = 760 + 33, y = 60;
			switch (current_hour % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}

			//输出冒号
			if (current_second % 2 == 0)
				putimage(760 + 66, 60, &mao);

			//输出分钟十位
			x = 780 + 66, y = 60;
			switch (current_min / 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			//输出分钟个位
			x = 780 + 99, y = 60;
			switch (current_min % 10) {
			case 1:
				putimage(x, y, &num_1);
				break;
			case 2:
				putimage(x, y, &num_2);
				break;
			case 3:
				putimage(x, y, &num_3);
				break;
			case 4:
				putimage(x, y, &num_4);
				break;
			case 5:
				putimage(x, y, &num_5);
				break;
			case 6:
				putimage(x, y, &num_6);
				break;
			case 7:
				putimage(x, y, &num_7);
				break;
			case 8:
				putimage(x, y, &num_8);
				break;
			case 9:
				putimage(x, y, &num_9);
				break;
			case 0:
				putimage(x, y, &num_0);
				break;
			}


			putimage(20, 20, &school);
			putimage(20 + logo_school_wide, 35, &admin_system);
			putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);

			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70, &see_system_statue_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 1 * (button_teacher_select_high), &add_student_info_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 2 * (button_teacher_select_high), &add_teacher_info_blue);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 3 * (button_teacher_select_high), &delete_stu_info_green);
			putimage(20 + logo_school_wide - 15, 35 + logo_bupt_teacher_management_system_high + 70 + 4 * (button_teacher_select_high), &logout_admin);
			if(current_second%2 ==0)
				putimage(20 + logo_school_wide + 30, 35 + logo_bupt_teacher_management_system_high + 80 + 5 * (button_teacher_select_high), &zhua1);
			else
				putimage(20 + logo_school_wide + 30, 35 + logo_bupt_teacher_management_system_high + 80 + 5 * (button_teacher_select_high), &zhua2);
			putimage(400, 180, &creater);
			setcolor(BLACK);
			outtextxy(550, 180 + 562, TEXT("2019级电管    丁丁的玩具车队"));
		}

		//logout
		if (selet == 5) {
			current_user.adm.id = 0;
			current_user.tea.id = 0;
			current_user.stu.id = 0;
			MessageBox(NULL, TEXT("登出成功"), TEXT("提示"), 0);
			mciSendString(_T("close logout"), NULL, 0, NULL);//关闭已登出
			mciSendString(_T("open sound\\logout.mp3 alias logout"), NULL, 0, NULL);//载入已登出
			mciSendString(_T("play logout "), NULL, 0, NULL);//播放成功登出
			
			return 0;
		}



		while (MouseHit())  //这个函数用于检测当前是否有鼠标消息
		{
			m = GetMouseMsg();
			if (m.uMsg == WM_LBUTTONDOWN)//如果按左键
			{
				if (m.x > 20 + logo_school_wide - 15 && m.y > 35 + logo_bupt_teacher_management_system_high + 70 && m.x < 20 + logo_school_wide - 15 +200  && m.y < 35 + logo_bupt_teacher_management_system_high + 70 +71)
					selet = 1;
				if (m.x > 20 + logo_school_wide - 15 && m.y > 35 + logo_bupt_teacher_management_system_high + 70 + 1 * (button_teacher_select_high) && m.x < 20 + logo_school_wide - 15 + 200 && m.y < 35 + logo_bupt_teacher_management_system_high + 70 + 1 * (button_teacher_select_high)+ 71)
					selet = 2;
				if (m.x > 20 + logo_school_wide - 15 && m.y > 35 + logo_bupt_teacher_management_system_high + 70 + 2 * (button_teacher_select_high) && m.x < 20 + logo_school_wide - 15 + 200 && m.y < 35 + logo_bupt_teacher_management_system_high + 70 + 2 * (button_teacher_select_high)+71)
					selet = 3;
				if (m.x > 20 + logo_school_wide - 15 && m.y > 35 + logo_bupt_teacher_management_system_high + 70 + 3 * (button_teacher_select_high) && m.x < 20 + logo_school_wide - 15 + 200 && m.y < 35 + logo_bupt_teacher_management_system_high + 70 + 3 * (button_teacher_select_high)+71)
					selet = 4;
				if (m.x > 20 + logo_school_wide - 15 && m.y > 35 + logo_bupt_teacher_management_system_high + 70 + 4 * (button_teacher_select_high) && m.x < 20 + logo_school_wide - 15 + 200 && m.y < 35 + logo_bupt_teacher_management_system_high + 70 + 4 * (button_teacher_select_high)+71)
					selet = 5;

				if (m.x > WIN_WIDE - 40 - logo_school_motto_wide && m.y > 20 && m.x < WIN_WIDE - 40 && m.y < 20 + logo_school_motto_high)
				{
					mciSendString(_T("close motto"), NULL, 0, NULL);//关闭校训
					mciSendString(_T("open sound\\motto.mp3 alias motto"), NULL, 0, NULL);//载入校训
					mciSendString(_T("play motto "), NULL, 0, NULL);//播放校训
				}


				if (selet == 2) {



					if (m.x > 580 && m.y > 210 && m.x < 780 && m.y < 248)
					{
						mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入
						mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
						MessageBox(NULL, TEXT("不能选择学号"), TEXT("添加学生"), 0);

					}
					if (m.x > 580 && m.y > 280 && m.x < 780 && m.y < 318)
					{
						InputBox(tmp_wchar, 12, TEXT("请输入学生电话"), TEXT("添加学生"));
						TcharToChar(tmp_wchar, tmp_char);
						sscanf_s(tmp_char, "%lld", &tmp_phone);
						if (is_phone_num_right(tmp_phone)) {
							student_add.phone_number = tmp_phone;
							mciSendString(_T("close di3"), NULL, 0, NULL);//关闭
							mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入
							mciSendString(_T("play di3 "), NULL, 0, NULL);//播放
						}
						else {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
							MessageBox(NULL, TEXT("电话号不正确"), TEXT("添加教师"), 0);
						}
					}
					if (m.x > 580 && m.y > 350 && m.x < 780 && m.y < 388)
					{
						InputBox(tmp_wchar, 12, TEXT("请输入学生学院"), TEXT("添加学生"));
						TcharToChar(tmp_wchar, tmp_char);
						strcpy_s(student_add.department, tmp_char);
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放
					}
					if (m.x > 580 && m.y > 420 && m.x < 780 && m.y < 458)
					{
						InputBox(tmp_wchar, 50, TEXT("请输入学生Email"), TEXT("添加学生"));
						TcharToChar(tmp_wchar, tmp_char);
						if (is_email_right(tmp_char))
						{
							strcpy_s(student_add.email, tmp_char);
							mciSendString(_T("close di3"), NULL, 0, NULL);//关闭
							mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入
							mciSendString(_T("play di3 "), NULL, 0, NULL);//播放
						}
						else
						{
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
							MessageBox(NULL, TEXT("邮箱不正确"), TEXT("添加教师"), 0);
						}
					}
					if (m.x > 580 && m.y > 490 && m.x < 780 && m.y < 528)
					{
						InputBox(tmp_wchar, 12, TEXT("请输入学生密码"), TEXT("添加学生"));
						TcharToChar(tmp_wchar, tmp_char);
						strcpy_s(student_add.password, tmp_char);
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放
					}
					if (m.x > 580 && m.y > 560 && m.x < 780 && m.y < 598)
					{
						InputBox(tmp_wchar, 12, TEXT("请输入教师姓名"), TEXT("添加教师"));
						TcharToChar(tmp_wchar, tmp_char);
						strcpy_s(student_add.name, tmp_char);
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放
					}

					putimage(630, 630, &button_chose_n);
					putimage(730, 630, &button_chose_y);

					if (m.x > 630 && m.y > 630 && m.x < 630 + 28 && m.y < 630 +28)
					{
						stu_sex = true;
						sprintf_s(student_add.sex, "男");
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放
					}
					if (m.x > 730 && m.y > 630 && m.x < 730 +28 && m.y < 630 +28)
					{
						stu_sex = false;
						sprintf_s(student_add.sex, "女");
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放
					}



					if (m.x > WIN_WIDE - 400 && m.y > WIN_HIGH - 150 && m.x < WIN_WIDE - 400 + 170 && m.y < WIN_HIGH - 150 + 58)
					{
						if (student_add.department[0] != '\0' && student_add.email[0] != '\0' && student_add.name[0] != '\n' && student_add.password[0] != '\0' && student_add.phone_number != 0)
						{
							admin_add_student(student_add);
							student_add.department[0] = '\0';
							student_add.email[0] = '\0';
							student_add.name[0] = '\0';
							student_add.password[0] = '\0';
							student_add.phone_number = 0;
							mciSendString(_T("close add_successful"), NULL, 0, NULL);//关闭
							mciSendString(_T("open sound\\add_successful.mp3 alias add_successful"), NULL, 0, NULL);//载入
							mciSendString(_T("play add_successful "), NULL, 0, NULL);//播放

						}
						else {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
							MessageBox(NULL, TEXT("添加信息不完整"), TEXT("添加学生"), 0);
						}
					}
					

					



				}



				if (selet == 3) {
					if (m.x > 580 && m.y > 210 && m.x < 780 && m.y < 248)
					{
						mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入
						mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
						MessageBox(NULL, TEXT("不能选择工号"), TEXT("添加教师"), 0);

					}
					if (m.x > 580 && m.y > 280 && m.x < 780 && m.y < 318)
					{
						InputBox(tmp_wchar, 12, TEXT("请输入教师电话"), TEXT("添加教师"));
						TcharToChar(tmp_wchar, tmp_char);
						sscanf_s(tmp_char, "%lld", &tmp_phone);
						if (is_phone_num_right(tmp_phone)) {
							teacher_add.phone_number = tmp_phone;
							mciSendString(_T("close di3"), NULL, 0, NULL);//关闭
							mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入
							mciSendString(_T("play di3 "), NULL, 0, NULL);//播放
						}
						else {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
							MessageBox(NULL, TEXT("电话号不正确"), TEXT("添加教师"), 0);
						}
					}
					if (m.x > 580 && m.y > 350 && m.x < 780 && m.y < 388)
					{
						InputBox(tmp_wchar, 12, TEXT("请输入教师学院"), TEXT("添加教师"));
						TcharToChar(tmp_wchar, tmp_char);
						strcpy_s(teacher_add.department, tmp_char);
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放
					}
					if (m.x > 580 && m.y > 420 && m.x < 780 && m.y < 458)
					{
						InputBox(tmp_wchar, 50, TEXT("请输入教师Email"), TEXT("添加教师"));
						TcharToChar(tmp_wchar, tmp_char);
						if (is_email_right(tmp_char))
						{
							strcpy_s(teacher_add.email , tmp_char);
							mciSendString(_T("close di3"), NULL, 0, NULL);//关闭
							mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入
							mciSendString(_T("play di3 "), NULL, 0, NULL);//播放
						}
						else
						{
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
							MessageBox(NULL, TEXT("邮箱不正确"), TEXT("添加教师"), 0);
						}
					}
					if (m.x > 580 && m.y > 490 && m.x < 780 && m.y < 528)
					{
						InputBox(tmp_wchar, 12, TEXT("请输入教师密码"), TEXT("添加教师"));
						TcharToChar(tmp_wchar, tmp_char);
						strcpy_s(teacher_add.password, tmp_char);
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放
					}
					if (m.x > 580 && m.y > 560 && m.x < 780 && m.y < 598)
					{
						InputBox(tmp_wchar, 12, TEXT("请输入教师姓名"), TEXT("添加教师"));
						TcharToChar(tmp_wchar, tmp_char);
						strcpy_s(teacher_add.name, tmp_char);
						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放
					}



					if (m.x > WIN_WIDE - 400 && m.y > WIN_HIGH - 150 && m.x < WIN_WIDE - 400 + 170&& m.y < WIN_HIGH - 150 +58)
					{
						if(teacher_add.department[0]!='\0' && teacher_add.email[0]!='\0'&& teacher_add.name[0]!='\n' && teacher_add.password[0]!='\0'&&teacher_add.phone_number!=0 )
						{
							admin_add_teacher(teacher_add);
							teacher_add.department[0] = '\0';
							teacher_add.email[0] = '\0';
							teacher_add.name[0] = '\0';
							teacher_add.password[0] = '\0';
							teacher_add.phone_number = NULL;
							mciSendString(_T("close add_successful"), NULL, 0, NULL);//关闭
							mciSendString(_T("open sound\\add_successful.mp3 alias add_successful"), NULL, 0, NULL);//载入
							mciSendString(_T("play add_successful "), NULL, 0, NULL);//播放

						}
						else {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
							MessageBox(NULL, TEXT("添加信息不完整"), TEXT("添加教师"), 0);
						}
					}
				}

				
				if (selet == 4) {




				}


			}

		}


		FlushBatchDraw();
		Sleep(15);
	}
}


int type_and_verify_info(int type, person& current_user) {//登陆输入密码界面
	current_user.stu.id = 0;//初始化
	current_user.tea.id = 0;
	current_user.adm.id = 0;
	MOUSEMSG m;		// 定义鼠标消息
	wchar_t ID[11] = { '\0' };
	wchar_t password[100] = { '\0' };//临时验证信息

	LOGFONT f;
	gettextstyle(&f);						// 获取当前字体设置
	f.lfHeight = 38;						// 设置字体高度为 48
	_tcscpy_s(f.lfFaceName, _T("黑体"));		// 设置字体为“黑体”(高版本 VC 推荐使用 _tcscpy_s 函数)
	f.lfQuality = ANTIALIASED_QUALITY;		// 设置输出效果为抗锯齿  
	settextstyle(&f);						// 设置字体样式
	setbkmode(TRANSPARENT);

	if (type == 0) {//验证教师登陆
	/*	MessageBox(NULL, TEXT("教师"), TEXT("Msg"), 0);*/
		
		while (1) {
			cleardevice();
			setbkcolor(WHITE);
			putimage(0, 0, &picture_4);
			putimage((WIN_WIDE - main_login_page_wide) / 2 + 300, (WIN_HIGH - main_login_page_high) / 2, &picture_login_tea_wait);

			putimage((WIN_WIDE - main_login_page_wide) / 2 + 300 + 150, (WIN_HIGH - main_login_page_high) / 2 + 270, &button_login);
			//putimage((WIN_WIDE - main_login_page_wide) / 2 + 300 + 150, (WIN_HIGH - main_login_page_high) / 2 + 270, &button_login,SRCERASE);
			//putimage((WIN_WIDE - main_login_page_wide) / 2 + 300 + 150, (WIN_HIGH - main_login_page_high) / 2 + 270, &button_login_2 ,NOTSRCERASE);


			putimage(WIN_WIDE - 43, 3, &button_back);
			//putimage(WIN_WIDE - 43, 3, &button_back, SRCERASE);
			//putimage(WIN_WIDE - 43, 3, &button_back_2, NOTSRCERASE);
			setcolor(BLACK);
			fillrectangle((WIN_WIDE - main_login_page_wide) / 2 + 300 + 180, (WIN_HIGH - main_login_page_high) / 2 +140, (WIN_WIDE - main_login_page_wide) / 2 + 300 + 440, (WIN_HIGH - main_login_page_high) / 2 + 180);
			outtextxy((WIN_WIDE - main_login_page_wide) / 2 + 300 + 180, (WIN_HIGH - main_login_page_high) / 2 + 140, ID);
			fillrectangle((WIN_WIDE - main_login_page_wide) / 2 + 300 + 180, (WIN_HIGH - main_login_page_high) / 2 + 215, (WIN_WIDE - main_login_page_wide) / 2 + 300 + 440, (WIN_HIGH - main_login_page_high) / 2 + 253);
			outtextxy((WIN_WIDE - main_login_page_wide) / 2 + 300 + 180, (WIN_HIGH - main_login_page_high) / 2 + 215, password);

			while (MouseHit())  //这个函数用于检测当前是否有鼠标消息
			{
				m = GetMouseMsg();
				if (m.uMsg == WM_LBUTTONDOWN)//如果按左键
				{
					if (m.x > (WIN_WIDE - main_login_page_wide) / 2 + 300 + 180 && m.y > (WIN_HIGH - main_login_page_high) / 2 + 140 && (WIN_WIDE - main_login_page_wide) / 2 + 300 + 440 && m.y < (WIN_HIGH - main_login_page_high) / 2 + 180)
					{//输入id
						InputBox(ID, 11, L"请输入您的ID", L"教师登录");
						int r = _wtoi(ID);// 将用户输入转换为数字
						current_user.tea.id = r;
					}
					if (m.x > (WIN_WIDE - main_login_page_wide) / 2 + 300 + 180 && m.y > (WIN_HIGH - main_login_page_high) / 2 + 215 && m.x < (WIN_WIDE - main_login_page_wide) / 2 + 300 + 440 && m.y < (WIN_HIGH - main_login_page_high) / 2 + 253)
					{//输入password
						InputBox(password, 100, L"请输入您的password", L"教师登录");
						for (int i = 0;i < 100;i++) {
							current_user.tea.password[i] = password[i];
						}
					}
					if (m.x > (WIN_WIDE - main_login_page_wide) / 2 + 300 + 150 && m.y > (WIN_HIGH - main_login_page_high) / 2 + 270 && m.x < (WIN_WIDE - main_login_page_wide) / 2 + 300 + 150 +220 && m.y < (WIN_HIGH - main_login_page_high) / 2 + 270 +51)
					{//验证id与密码是否正确匹配
						if (is_password_right(type, current_user.tea.id, current_user.tea.password)) {
							//MessageBox(NULL, TEXT("密码正确"), TEXT("欢迎使用"), 0);
							return 0;
						}
						else {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
							MessageBox(NULL, TEXT("账号或密码错误"), TEXT("请重新输入"), 0);
							ID[0] = '\0';
							password[0] = '\0';
							current_user.stu.id = 0;
							current_user.tea.id = 0;
							for(int i=0;i<100;i++)
							current_user.tea.password[i] = '0';
						}
					}
					if (m.x> WIN_WIDE - 43 && m.y>3 && m.x< WIN_WIDE - 43 +40 && m.y<3+40) {
						current_user.tea.id = 0;
						return -1;
					}
				}

			}
			
			Sleep(15);
			FlushBatchDraw();
		}
	}

	if (type == 1) {//学生
//		MessageBox(NULL, TEXT("学生"), TEXT("Msg"), 0);
		while (1) {
			cleardevice();
			setbkcolor(WHITE);
			putimage(0, 0, &picture_4);
			putimage((WIN_WIDE - main_login_page_wide) / 2 + 300, (WIN_HIGH - main_login_page_high) / 2, &picture_login_stu_wait);
			putimage((WIN_WIDE - main_login_page_wide) / 2 + 300 + 150, (WIN_HIGH - main_login_page_high) / 2 + 270, &button_login);
			putimage(WIN_WIDE - 43, 3, &button_back);


			setcolor(BLACK);
			fillrectangle((WIN_WIDE - main_login_page_wide) / 2 + 300 + 180, (WIN_HIGH - main_login_page_high) / 2 + 140, (WIN_WIDE - main_login_page_wide) / 2 + 300 + 440, (WIN_HIGH - main_login_page_high) / 2 + 180);
			outtextxy((WIN_WIDE - main_login_page_wide) / 2 + 300 + 180, (WIN_HIGH - main_login_page_high) / 2 + 140, ID);
			fillrectangle((WIN_WIDE - main_login_page_wide) / 2 + 300 + 180, (WIN_HIGH - main_login_page_high) / 2 + 215, (WIN_WIDE - main_login_page_wide) / 2 + 300 + 440, (WIN_HIGH - main_login_page_high) / 2 + 253);
			outtextxy((WIN_WIDE - main_login_page_wide) / 2 + 300 + 180, (WIN_HIGH - main_login_page_high) / 2 + 215, password);

			while (MouseHit())  //这个函数用于检测当前是否有鼠标消息
			{
				m = GetMouseMsg();
				if (m.uMsg == WM_LBUTTONDOWN)//如果按左键
				{
					if (m.x > (WIN_WIDE - main_login_page_wide) / 2 + 300 + 180 && m.y > (WIN_HIGH - main_login_page_high) / 2 + 140 && (WIN_WIDE - main_login_page_wide) / 2 + 300 + 440 && m.y < (WIN_HIGH - main_login_page_high) / 2 + 180)
					{//输入id
						InputBox(ID, 11, L"请输入您的ID", L"学生登录");
						int r = _wtoi(ID);// 将用户输入转换为数字
						current_user.stu.id = r;
					}
					if (m.x > (WIN_WIDE - main_login_page_wide) / 2 + 300 + 180 && m.y > (WIN_HIGH - main_login_page_high) / 2 + 215 && m.x < (WIN_WIDE - main_login_page_wide) / 2 + 300 + 440 && m.y < (WIN_HIGH - main_login_page_high) / 2 + 253)
					{//输入password
						InputBox(password, 100, L"请输入您的password", L"学生登录");
						for (int i = 0;i < 100;i++) {
							current_user.stu.password[i] = password[i];
						}
					}
					if (m.x > (WIN_WIDE - main_login_page_wide) / 2 + 300 + 150 && m.y > (WIN_HIGH - main_login_page_high) / 2 + 270 && m.x < (WIN_WIDE - main_login_page_wide) / 2 + 300 + 150 + 220 && m.y < (WIN_HIGH - main_login_page_high) / 2 + 270 + 51)
					{//验证id与密码是否正确匹配
						if (is_password_right(type, current_user.stu.id, current_user.stu.password)) {
						//	MessageBox(NULL, TEXT("密码正确"), TEXT("欢迎使用"), 0);
							return 0;
						}
						else {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
							MessageBox(NULL, TEXT("账号或密码错误"), TEXT("请重新输入"), 0);
							current_user.stu.id = 0;
							current_user.tea.id = 0;
							current_user.tea.id = 0;
							ID[0] = '\0';
							password[0] = '\0';
							for (int i = 0;i < 100;i++)
								current_user.stu.password[i] = '0';
						}
					}
					if (m.x > WIN_WIDE - 43 && m.y > 3 && m.x < WIN_WIDE - 43 + 40 && m.y < 3 + 40) {
						current_user.stu.id = 0;
						return -1;
					}
				}

			}

			Sleep(15);
			FlushBatchDraw();
		}
	}
	
	if (type == 2) {//管理员
//		MessageBox(NULL, TEXT("管理员"), TEXT("Msg"), 0);

		while (1) {
			cleardevice();
			setbkcolor(WHITE);
			putimage(0, 0, &picture_4);
			putimage((WIN_WIDE - main_login_page_wide) / 2 + 300, (WIN_HIGH - main_login_page_high) / 2, &picture_login_tea_wait);
			putimage((WIN_WIDE - main_login_page_wide) / 2 + 300 + 150, (WIN_HIGH - main_login_page_high) / 2 + 270, &button_login);
			putimage(WIN_WIDE - 43, 3, &button_back);

			setcolor(BLACK);
			fillrectangle((WIN_WIDE - main_login_page_wide) / 2 + 300 + 180, (WIN_HIGH - main_login_page_high) / 2 + 140, (WIN_WIDE - main_login_page_wide) / 2 + 300 + 440, (WIN_HIGH - main_login_page_high) / 2 + 180);
			outtextxy((WIN_WIDE - main_login_page_wide) / 2 + 300 + 180, (WIN_HIGH - main_login_page_high) / 2 + 140, ID);
			fillrectangle((WIN_WIDE - main_login_page_wide) / 2 + 300 + 180, (WIN_HIGH - main_login_page_high) / 2 + 215, (WIN_WIDE - main_login_page_wide) / 2 + 300 + 440, (WIN_HIGH - main_login_page_high) / 2 + 253);
			outtextxy((WIN_WIDE - main_login_page_wide) / 2 + 300 + 180, (WIN_HIGH - main_login_page_high) / 2 + 215, password);

			while (MouseHit())  //这个函数用于检测当前是否有鼠标消息
			{
				m = GetMouseMsg();
				if (m.uMsg == WM_LBUTTONDOWN)//如果按左键
				{
					if (m.x > (WIN_WIDE - main_login_page_wide) / 2 + 300 + 180 && m.y > (WIN_HIGH - main_login_page_high) / 2 + 140 && (WIN_WIDE - main_login_page_wide) / 2 + 300 + 440 && m.y < (WIN_HIGH - main_login_page_high) / 2 + 180)
					{//输入id
						InputBox(ID, 11, L"请输入您的ID");
						int r = _wtoi(ID);// 将用户输入转换为数字
						current_user.adm.id = r;
					}
					if (m.x > (WIN_WIDE - main_login_page_wide) / 2 + 300 + 180 && m.y > (WIN_HIGH - main_login_page_high) / 2 + 215 && m.x < (WIN_WIDE - main_login_page_wide) / 2 + 300 + 440 && m.y < (WIN_HIGH - main_login_page_high) / 2 + 253)
					{//输入password
						InputBox(password, 100, L"请输入您的password");
						for (int i = 0;i < 100;i++) {
							current_user.adm.password[i] = password[i];
						}
					}
					if (m.x > (WIN_WIDE - main_login_page_wide) / 2 + 300 + 150 && m.y > (WIN_HIGH - main_login_page_high) / 2 + 270 && m.x < (WIN_WIDE - main_login_page_wide) / 2 + 300 + 150 + 220 && m.y < (WIN_HIGH - main_login_page_high) / 2 + 270 + 51)
					{//验证id与密码是否正确匹配
						if (is_password_right(type, current_user.adm.id, current_user.adm.password)) {
							//MessageBox(NULL, TEXT("密码正确"), TEXT("欢迎使用"), 0);
							return 0;
						}
						else {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
							MessageBox(NULL, TEXT("账号或密码错误"), TEXT("请重新输入"), 0);
							current_user.stu.id = 0;
							current_user.tea.id = 0;
							current_user.tea.id = 0;
							ID[0] = '\0';
							password[0] = '\0';
							for (int i = 0;i < 100;i++)
								current_user.adm.password[i] = '0';
						}
					}
					if (m.x > WIN_WIDE - 43 && m.y > 3 && m.x < WIN_WIDE - 43 + 40 && m.y < 3 + 40) {
						current_user.adm.id = 0;
						return -1;
					}
				}

			}

			Sleep(15);
			FlushBatchDraw();
		}
	}

	return 0;
}

//查看课程详情
int check_course_details(int course_id) {
	LOGFONT f;
	gettextstyle(&f);						// 获取当前字体设置
	f.lfHeight = 28;						// 设置字体高度为 48
	_tcscpy_s(f.lfFaceName, _T("黑体"));		// 设置字体为“黑体”(高版本 VC 推荐使用 _tcscpy_s 函数)
	f.lfQuality = ANTIALIASED_QUALITY;		// 设置输出效果为抗锯齿  
	settextstyle(&f);						// 设置字体样式
	setbkmode(TRANSPARENT);
	MOUSEMSG m;		// 定义鼠标消息
	char tmp_char[100] = { '0' };
	wchar_t tmp_wchar[100] = { '0' };
	int page=0;
	int state = 0;
	int total_student_num = get_total_student_num();//刷新时排序用
	int search_result_amount=0;

	//当前课程学生id数组
	int* stu_id_list;
	stu_id_list = get_course_chosen_student_list(course_id);

	//全部学生数组
	students* all_stu;
	all_stu = get_student_info();

	//储存当前课程信息
	students* course_stu_list;
	course_stu_list = (students*)malloc(sizeof(students) * get_total_student_num());
	for (int k = 0; k < total_student_num; k++) {
		for (int i = 0; i < total_student_num; i++) {
			if (stu_id_list[k] == all_stu[i].id) {

				students_copy_single(course_stu_list[k], all_stu[i]);
			}
		}
	}
	
	//储存当前显示信息
	students* current_list;
	current_list = (students*)malloc(sizeof(students) * get_total_student_num());
	
	char course_num[100],sera[100];
	wchar_t course_num_t[100],sera_t[100]= { '搜' };
	
	sprintf_s(course_num, "课程号为%d的学生名单", course_id);
	CharToTchar(course_num, course_num_t);//输出名单
	while (1) {

		cleardevice();
		setbkcolor(WHITE);

		putimage(20, 20, &school);
		putimage(20 + logo_school_wide, 35, &bupt_teacher_management_system);
		putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);
		putimage(WIN_WIDE - 50 - button_next_page_wide, WIN_HIGH - button_next_page_high - 100, &next_page);//上下页
		putimage(WIN_WIDE - 50 - 2 * button_next_page_wide - 40, WIN_HIGH - button_next_page_high - 100, &last_page);
		setcolor(BLACK);
		//显示课程号为。。的名单
		outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide + 30, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high -90, course_num_t);

		//画个框框
		rectangle(35, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 - 38, WIN_WIDE - 35, WIN_HIGH - button_next_page_high - 103);
		//再画个框框
		rectangle(900, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high - 80 + 13, WIN_WIDE - 100, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 - 40);
		//显示搜索关键字
		outtextxy(900, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high - 80 + 13, sera_t);

	//	outtextxy(20 + logo_school_wide + logo_bupt_teacher_management_system_wide + 30, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high - 90, tmp_wchar);

		putimage(WIN_WIDE - 100, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high - 80 + 13, &ser);
		//刷新按钮
		putimage(WIN_WIDE - 100 +39, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high - 80 + 13, &refresh);


		//刷新显示信息
		if(state==0)
			for (int k = 0; k < total_student_num; k++) {
				for (int i = 0; i < total_student_num; i++) {
					if (stu_id_list[k] == all_stu[i].id) {
						
						students_copy_single(current_list[k],all_stu[i]);
					}
				}
			}
	
		outtextxy(60, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 -30, TEXT("学号"));
		outtextxy(260, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 - 30, TEXT("电话"));
		outtextxy(460, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 - 30, TEXT("姓名"));
		outtextxy(615, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 - 30, TEXT("性别"));
		outtextxy(720, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 - 30, TEXT("邮箱"));
		outtextxy(1000, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 - 30, TEXT("院系"));


//		MessageBox(NULL, TEXT("调试"), TEXT("Msg"), 0);
		setcolor(BLUE);
		for (int  n = 0,i=page*8; i < 8*page + 8 ;i++,  n++) {
			if ( i < get_course_population(course_id) &&state ==0) //列表状态
			{
				sprintf_s(tmp_char, "%d", current_list[i].id);
				CharToTchar(tmp_char, tmp_wchar);
				outtextxy(40, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 56, tmp_wchar);



				sprintf_s(tmp_char, "%lld", current_list[i].phone_number);
				CharToTchar(tmp_char, tmp_wchar);
				outtextxy(240, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 56, tmp_wchar);

				CharToTchar(current_list[i].name, tmp_wchar);
				outtextxy(440, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 56, tmp_wchar);

				CharToTchar(current_list[i].sex, tmp_wchar);
				outtextxy(620, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 56, tmp_wchar);

				
				CharToTchar(current_list[i].email, tmp_wchar);
				outtextxy(700, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 56, tmp_wchar);

				
				CharToTchar(current_list[i].department, tmp_wchar);
				outtextxy(980, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 56, tmp_wchar);

			}
			if (i < search_result_amount && state == 1)
			{
				sprintf_s(tmp_char, "%d", current_list[i].id);
				CharToTchar(tmp_char, tmp_wchar);
				outtextxy(40, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 56, tmp_wchar);



				sprintf_s(tmp_char, "%lld", current_list[i].phone_number);
				CharToTchar(tmp_char, tmp_wchar);
				outtextxy(240, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 56, tmp_wchar);

				CharToTchar(current_list[i].name, tmp_wchar);
				outtextxy(440, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 56, tmp_wchar);

				CharToTchar(current_list[i].sex, tmp_wchar);
				outtextxy(620, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 56, tmp_wchar);


				CharToTchar(current_list[i].email, tmp_wchar);
				outtextxy(700, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 56, tmp_wchar);


				CharToTchar(current_list[i].department, tmp_wchar);
				outtextxy(980, 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 + n * 56, tmp_wchar);

			}
		}



		while (MouseHit())  //这个函数用于检测当前是否有鼠标消息
		{
			m = GetMouseMsg();
			if (m.uMsg == WM_LBUTTONDOWN)//如果按左键
			{
				if (m.x > WIN_WIDE - 50 - button_next_page_wide && m.y > WIN_HIGH - button_next_page_high - 100 && m.x < WIN_WIDE - 50 && m.y < WIN_HIGH - 100)
					page++;//如果按左键同时位置在下一页按钮上
				if (m.x > WIN_WIDE - 50 - 2 * button_next_page_wide - 40 && m.y > WIN_HIGH - button_next_page_high - 100 && m.x < WIN_WIDE - 50 - 1 * button_next_page_wide - 40 && m.y < WIN_HIGH - 100)
					if (page >= 1)
						page--;//如果按左键同时位置在上一页按钮上


				//如果点击搜索框
				if (m.x > 900 && m.y > 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high - 80 + 13 && m.x < WIN_WIDE - 100 && m.y < 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high + 13 - 40) {
					InputBox(sera_t, 20,TEXT("请输入学生姓名"), TEXT("根据学生姓名搜索"));
					TcharToChar(sera_t, sera);
					state = 1;
					current_list = search_students_in_course(course_stu_list, sera,search_result_amount);
					mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
					mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
					mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
				}

				//如果点击刷新按钮
				if (m.x > WIN_WIDE - 100 + 39 && m.y > 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high - 80 + 13 && m.x < WIN_WIDE - 100 + 39 * 2 && m.y < 35 + logo_bupt_teacher_management_system_high + 20 + logo_courses_have_been_set_high - 80 + 13 + 42)
				{
					state = 0;
					page = 0;
				}


			}






			//右键退出
			if (m.uMsg == WM_RBUTTONDOWN)//如果按右键
			{
				free(all_stu);
				mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
				mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
				mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
				return 0;
			}
		}

		FlushBatchDraw();
		Sleep(30);
	}
	
}


//添加课程界面
bool add_course(int teacher_id) {
	LOGFONT f;
	gettextstyle(&f);						// 获取当前字体设置
	f.lfHeight = 28;						// 设置字体高度为 48
	_tcscpy_s(f.lfFaceName, _T("黑体"));		// 设置字体为“黑体”(高版本 VC 推荐使用 _tcscpy_s 函数)
	f.lfQuality = ANTIALIASED_QUALITY;		// 设置输出效果为抗锯齿  
	settextstyle(&f);						// 设置字体样式
	setbkmode(TRANSPARENT);
	MOUSEMSG m;		// 定义鼠标消息
	char tmp_char[100] = { '0' };
	wchar_t tmp_wchar[100] = { '0' };
	courses courses_add;
	courses_add.id = 100001 + get_total_course_num();
	sprintf_s(courses_add.name, "请输入信息");
	sprintf_s(courses_add.book, "请输入信息");
	sprintf_s(courses_add.place, "请输入信息");
	sprintf_s(courses_add.school, "请输入信息");
	sprintf_s(courses_add.time_s, "请输入信息");
	courses_add.start_year = 0;
	courses_add.start_week = 0;
	courses_add.start_mounth = 0;
	courses_add.end_year = 0;
	courses_add.end_mounth = 0;
	courses_add.end_week = 0;
	courses_add.limit_number = 100;
	courses_add.score = 0;
	courses_add.term = 0;
	courses_add.term2 = 0;
	//添加教师信息
	courses_add.teacher_number = teacher_id;
	courses_add.ismust = true;
	

	while (1) {

		cleardevice();
		setbkcolor(WHITE);

		putimage(20, 20, &school);
		putimage(20 + logo_school_wide, 35, &bupt_teacher_management_system);
		putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);

		outtextxy(200, 200, TEXT("课程id"));
		outtextxy(200, 300, TEXT("课程名称"));
		outtextxy(200, 400, TEXT("教材"));
		outtextxy(200, 500, TEXT("起时间"));
		outtextxy(200, 600, TEXT("止时间"));

		outtextxy(700, 200, TEXT("限制人数"));
		outtextxy(700, 300, TEXT("上课节次"));
		outtextxy(700, 400, TEXT("学分"));
		outtextxy(700, 500, TEXT("教室"));
		outtextxy(700, 600, TEXT("开设学院"));
		outtextxy(700, 650, TEXT("必修嘛？"));


		putimage(WIN_WIDE - 500, WIN_HIGH - 100, &button_lunch_give_up);
		putimage(WIN_WIDE - 300, WIN_HIGH - 100, &button_lunch_course);

		if (courses_add.ismust) {
			outtextxy(830, WIN_HIGH - 150, TEXT("是"));
			outtextxy(920, WIN_HIGH - 150, TEXT("否"));
			putimage(860, WIN_HIGH - 150, &button_chose_y);
			putimage(950, WIN_HIGH - 150, &button_chose_n);
		}
		else {
			outtextxy(830, WIN_HIGH - 150, TEXT("是"));
			outtextxy(920, WIN_HIGH - 150, TEXT("否"));
			putimage(860, WIN_HIGH - 150, &button_chose_n);
			putimage(950, WIN_HIGH - 150, &button_chose_y);
		}

		rectangle(350, 200, 550, 228);
		sprintf_s(tmp_char, "%d", courses_add.id);
		CharToTchar(tmp_char, tmp_wchar);
		outtextxy(350, 200, tmp_wchar);

		rectangle(350, 300, 550, 328);
		CharToTchar(courses_add.name, tmp_wchar);
		outtextxy(350, 300, tmp_wchar);

		rectangle(350, 400, 550, 428);
		CharToTchar(courses_add.book, tmp_wchar);
		outtextxy(350, 400, tmp_wchar);

		//起时间 年
		rectangle(350, 500, 550, 528);
		sprintf_s(tmp_char, "%d", courses_add.start_year);
		CharToTchar(tmp_char, tmp_wchar);
		outtextxy(350, 500, tmp_wchar);
		//起时间学期
		rectangle(350, 528, 550, 556);
		sprintf_s(tmp_char, "%d", courses_add.term);
		
		CharToTchar(tmp_char, tmp_wchar);
		outtextxy(350, 528, tmp_wchar);
		//起时间周
		rectangle(350, 556, 550, 584);
		sprintf_s(tmp_char, "%d", courses_add.start_week);
		CharToTchar(tmp_char, tmp_wchar);
		outtextxy(350, 556, tmp_wchar);

		//止时间年
		rectangle(350, 600, 550, 628);
		sprintf_s(tmp_char, "%d", courses_add.end_year);
		CharToTchar(tmp_char, tmp_wchar);
		outtextxy(350, 600, tmp_wchar);

		//止时间学期
		rectangle(350, 628, 550, 656);
		sprintf_s(tmp_char, "%d", courses_add.term2);
		CharToTchar(tmp_char, tmp_wchar);
		outtextxy(350, 628, tmp_wchar);

		//止时间周
		rectangle(350, 656, 550, 684);
		sprintf_s(tmp_char, "%d", courses_add.end_week);
		CharToTchar(tmp_char, tmp_wchar);
		outtextxy(350, 656, tmp_wchar);


		//限制人数
		rectangle(850, 200, 1050, 228);
		sprintf_s(tmp_char, "%d", courses_add.limit_number);
		CharToTchar(tmp_char, tmp_wchar);
		outtextxy(850, 200, tmp_wchar);


		//上课节次
		rectangle(850, 300, 1050, 328);
		CharToTchar(courses_add.time_s, tmp_wchar);
		outtextxy(850, 300, tmp_wchar);

		//学分
		rectangle(850, 400, 1050, 428);
		sprintf_s(tmp_char, "%d", courses_add.score);
		CharToTchar(tmp_char, tmp_wchar);
		outtextxy(850, 400, tmp_wchar);

		//教室
		rectangle(850, 500, 1050, 528);
		CharToTchar(courses_add.place, tmp_wchar);
		outtextxy(850, 500, tmp_wchar);

		//开设学院
		rectangle(850, 600, 1050, 628);
		CharToTchar(courses_add.school, tmp_wchar);
		outtextxy(850, 600, tmp_wchar);

		

		while (MouseHit())  //这个函数用于检测当前是否有鼠标消息
		{
			m = GetMouseMsg();
			if (m.uMsg == WM_LBUTTONDOWN)//如果按左键
			{
				/*课程id*/
				if (m.x > 350 && m.y > 200 && m.x < 550 && m.y < 228) {
//					InputBox(tmp_wchar, 20, L"请输入课程id", L"添加课程");
////					TcharToChar(tmp_wchar, tmp_char);
//					courses_add.id = _wtoi(tmp_wchar);
//					
//
//					mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
//					mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
//					mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音


					mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
					mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入
					mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
					MessageBox(NULL, TEXT("不能选择课程号"), TEXT("添加课程"), 0);
						
				}



				if (m.x > 350 && m.y > 300 && m.x < 550 && m.y < 328) {
					InputBox(tmp_wchar, 20, L"请输入课程名称", L"添加课程");
					TcharToChar(tmp_wchar, tmp_char);
					strcpy_s(courses_add.name, tmp_char);

					mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
					mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
					mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音

				}



				if (m.x > 350 && m.y > 400 && m.x < 550 && m.y < 428) {
					InputBox(tmp_wchar, 20, L"请输入教材", L"添加课程");
					TcharToChar(tmp_wchar, tmp_char);
					strcpy_s(courses_add.book, tmp_char);

					mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
					mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
					mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音

				}


				//输入起始时间年份
				if (m.x > 350 && m.y > 500 && m.x < 550 && m.y < 528) {
					InputBox(tmp_wchar, 20, L"请输入起时间（只输入开始年份）", L"添加课程");
					//TcharToChar(tmp_wchar, tmp_char);
					if(_wtoi(tmp_wchar) >=current_year ){
					courses_add.start_year = _wtoi(tmp_wchar);

					mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
					mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
					mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
//						MessageBox(NULL, TEXT("修改成功"), TEXT("个人密码修改"), 0);
					}
					else {
						mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入
						mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
						MessageBox(NULL, TEXT("输入年份必须大于0"), TEXT("添加课程"), 0);
					}
				}
				//起始学期
				if (m.x > 350 && m.y > 528 && m.x < 550 && m.y < 556) {
					InputBox(tmp_wchar, 20, L"请输入起时间（只输入开始学期（1或2）", L"添加课程");
					if (_wtoi(tmp_wchar) == 1 || _wtoi(tmp_wchar) == 2) {
						//TcharToChar(tmp_wchar, tmp_char);
						courses_add.term = _wtoi(tmp_wchar);

						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
					}
					else {
						mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入
						mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
						MessageBox(NULL, TEXT("只能输入1或2"), TEXT("添加课程"), 0);
					}
				}
				//起始周
				if (m.x > 350 && m.y > 556 && m.x < 550 && m.y < 584) {
					InputBox(tmp_wchar, 20, L"请输入起时间（只输入开始周）", L"添加课程");
					//TcharToChar(tmp_wchar, tmp_char);
					if (_wtoi(tmp_wchar) >= 1 && _wtoi(tmp_wchar) <= 20) {
						courses_add.start_week = _wtoi(tmp_wchar);

						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
					}
					else {
						mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入
						mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
						MessageBox(NULL, TEXT("只能输入1-20周"), TEXT("添加课程"), 0);
					}
				}

				//终止年
				if (m.x > 350 && m.y > 600 && m.x < 550 && m.y < 628) {
					InputBox(tmp_wchar, 20, L"请输入止时间（只输入停止年份）", L"添加课程");
					//TcharToChar(tmp_wchar, tmp_char);
					if (_wtoi(tmp_wchar)>courses_add.term ) {
						courses_add.end_year = _wtoi(tmp_wchar);

						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
	//						MessageBox(NULL, TEXT("修改成功"), TEXT("个人密码修改"), 0);
					}
					else {
						mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入
						mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
						MessageBox(NULL, TEXT("课程结束时间必须大于课程开始时间"), TEXT("添加课程"), 0);
					}
				}
				//终止学期
				if (m.x > 350 && m.y > 628 && m.x < 550 && m.y < 656) {
					InputBox(tmp_wchar, 20, L"请输入止时间（只输入停止学期）", L"添加课程");
					//TcharToChar(tmp_wchar, tmp_char);
					if (_wtoi(tmp_wchar) == 1 || _wtoi(tmp_wchar) == 2) {
						courses_add.term2 = _wtoi(tmp_wchar);

						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
	//						MessageBox(NULL, TEXT("修改成功"), TEXT("个人密码修改"), 0);
					}
				else {
					mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
					mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入
					mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
					MessageBox(NULL, TEXT("只能输入1或2"), TEXT("添加课程"), 0);
				}
				}
				if (m.x > 350 && m.y > 656 && m.x < 550 && m.y < 694) {
					InputBox(tmp_wchar, 20, L"请输入止时间（只输入停止周）", L"添加课程");
					if (_wtoi(tmp_wchar) >= 0 && _wtoi(tmp_wchar) <= 20) {
						
						//TcharToChar(tmp_wchar, tmp_char);
						courses_add.end_week = _wtoi(tmp_wchar);

						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
	//						MessageBox(NULL, TEXT("修改成功"), TEXT("个人密码修改"), 0);
					}
					else {
						mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入
						mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
						MessageBox(NULL, TEXT("只能输入1-20周"), TEXT("添加课程"), 0);
					}
				}



				if (m.x > 850 && m.y > 200 && m.x < 1050 && m.y < 228) {
					InputBox(tmp_wchar, 20, L"请输入限制人数（只可输入80，或100）", L"添加课程");
					//TcharToChar(tmp_wchar, tmp_char);
					if (_wtoi(tmp_wchar) == 80)
						courses_add.limit_number = 80;
					else if (_wtoi(tmp_wchar) == 100)
						courses_add.limit_number = 100;
					else {
						mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play wrong "), NULL, 0, NULL);//播放di3音
						MessageBox(NULL, TEXT("只可输入80或100"), TEXT("人数不正确"), 0);
					}

					mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
					mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
					mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
//						MessageBox(NULL, TEXT("修改成功"), TEXT("个人密码修改"), 0);
				}



				if (m.x > 850 && m.y > 300 && m.x < 1050 && m.y < 328) {
					InputBox(tmp_wchar, 20, L"请输入上课节次，每个节次两个数字，数字间只可用逗号隔开不能有空格", L"添加课程");
					TcharToChar(tmp_wchar, tmp_char);


					if (examine_course_time(tmp_char)) {
						strcpy_s(courses_add.time_s, tmp_char);

						//将字符串载入数组
						int dou_num = 0;
						char dou[5] = { ',' };
						dou_num = strstr_cnt(courses_add.time_s, dou);//逗号个数
						for (int n = 0; n < 80; n++)
							courses_add.time[n] = 0;

						for (int h = 0, k = 0; h < (dou_num + 2 * (dou_num + 1)); h++) {
							k = (h / 3);//h为在字符串中的位置，k为在第几组

							if (h % 3 != 2) {
								if (h == 3 * k) {
									courses_add.time[k] += ((int)courses_add.time_s[h] - 48) * 10;
								}
								else
									courses_add.time[k] += ((int)courses_add.time_s[h] - 48);
							}
						}

						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
					}
					else {
						mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play wrong "), NULL, 0, NULL);//播放di3音
						MessageBox(NULL, TEXT("时间不正确"), TEXT("请检查时间输入格式，必须两位数且用英文逗号分开"), 0);
					}
				}


				if (m.x > 850 && m.y > 400 && m.x < 1050 && m.y < 428) {
					InputBox(tmp_wchar, 20, L"请输入学分（0-4）", L"添加课程");
					if (_wtoi(tmp_wchar) <= 4 && _wtoi(tmp_wchar) >=0) {
						courses_add.score = _wtoi(tmp_wchar);

						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
	//						MessageBox(NULL, TEXT("修改成功"), TEXT("个人密码修改"), 0);
					}
					else
					{
						mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play wrong "), NULL, 0, NULL);//播放di3音
						MessageBox(NULL, TEXT("请再次输入0-4的学分值"), TEXT("学分不正确"), 0);
					}
				}



				if (m.x > 850 && m.y > 500 && m.x < 1050 && m.y < 528) {
					InputBox(tmp_wchar, 20, L"请输入课程教室 \n *-***", L"添加课程");
					TcharToChar(tmp_wchar, tmp_char);

					if (examine_course_place(tmp_char)) {
						strcpy_s(courses_add.place, tmp_char);

						mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
	//						MessageBox(NULL, TEXT("修改成功"), TEXT("个人密码修改"), 0);
					}
					else {
						mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭di3音
						mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入di3音
						mciSendString(_T("play wrong "), NULL, 0, NULL);//播放di3音
						MessageBox(NULL, TEXT("请按*-***输入"), TEXT("上课地点不正确"), 0);
					}
				}



				if (m.x > 850 && m.y > 600 && m.x < 1050 && m.y < 628) {
					InputBox(tmp_wchar, 20, L"请输入课程开设学院", L"添加课程");
					TcharToChar(tmp_wchar, tmp_char);
					strcpy_s(courses_add.school, tmp_char);

					mciSendString(_T("close di3"), NULL, 0, NULL);//关闭di3音
					mciSendString(_T("open sound\\di3.wav alias di3"), NULL, 0, NULL);//载入di3音
					mciSendString(_T("play di3 "), NULL, 0, NULL);//播放di3音
//						MessageBox(NULL, TEXT("修改成功"), TEXT("个人密码修改"), 0);
				}
				
		
				//放弃选课
				if (m.x > WIN_WIDE - 500 && m.y > WIN_HIGH - 100 && m.x < WIN_WIDE - 500 + 150 && m.y < WIN_HIGH - 100 + 36) {
					mciSendString(_T("close add_fail"), NULL, 0, NULL);//关闭add_fail音
					mciSendString(_T("open sound\\add_fail.mp3 alias add_fail"), NULL, 0, NULL);//载入add_fail音
					mciSendString(_T("play add_fail "), NULL, 0, NULL);//播放add_fail音
					return false;
				}


				//确认开课
				if (m.x > WIN_WIDE - 300 && m.y > WIN_HIGH - 100 && m.x < WIN_WIDE - 300 + 150 && m.y < WIN_HIGH - 100 + 36) {
					
					if (is_allowed_to_launch_course(courses_add) == -1) {
						mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\wrong.mp3 alias wrong"), NULL, 0, NULL);//载入
						mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
						MessageBox(NULL, TEXT("本学期开设选修课名额已满"), TEXT("课程不要开太多哦"), 0);
					}
					if (is_allowed_to_launch_course(courses_add) == -2) {
						mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\wrong.mp3 alias wrong"), NULL, 0, NULL);//载入
						mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
						MessageBox(NULL, TEXT("课程名冲突"), TEXT("课程换个名字哦"), 0);
					}
					if (is_allowed_to_launch_course(courses_add) == -3) {
						mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\wrong.mp3 alias wrong"), NULL, 0, NULL);//载入
						mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
						MessageBox(NULL, TEXT("课程号冲突"), TEXT("每个课程都要有自己唯一的号码哦"), 0);
					}
					if (is_allowed_to_launch_course(courses_add) == -4) {
						mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\wrong.mp3 alias wrong"), NULL, 0, NULL);//载入
						mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
						MessageBox(NULL, TEXT("和已有上课时间冲突了呢"), TEXT("换个时间开吧"), 0);
					}
					if (is_allowed_to_launch_course(courses_add) == -5) {
						mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\wrong.mp3 alias wrong"), NULL, 0, NULL);//载入
						mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
						MessageBox(NULL, TEXT("有0信息，请修改好信息后开课"), TEXT("请检查信息"), 0);
					}
					//验证符合开课条件并开课
					if (is_allowed_to_launch_course(courses_add) == 0) {
						teacher_add_course(courses_add);
						mciSendString(_T("close add_successful"), NULL, 0, NULL);//关闭add_successful音
						mciSendString(_T("open sound\\add_successful.mp3 alias add_successful"), NULL, 0, NULL);//载入add_successful音
						mciSendString(_T("play add_successful "), NULL, 0, NULL);//播放add_successful音
						return true;
					}
					else {

						mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭
						mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入
						mciSendString(_T("play wrong "), NULL, 0, NULL);//播放
						MessageBox(NULL, TEXT("不符合开课条件"), TEXT("添加课程"), 0);
					}
				}
				
				if (m.x > 860 && m.y > WIN_HIGH - 150 && m.x < 860 +28 && m.y < WIN_HIGH - 150 +28) {
					courses_add.ismust = true;
					
				}
				if (m.x > 950 && m.y > WIN_HIGH - 150 && m.x < 950 + 28 && m.y < WIN_HIGH - 150 + 28) {
					courses_add.ismust = false;
					
				}
			}
		}

		FlushBatchDraw();
		Sleep(15);
	}
	return false;
}




//教师更改课程信息
bool teacher_modify_course_info(int course_id) {
	LOGFONT f;
	gettextstyle(&f);						// 获取当前字体设置
	f.lfHeight = 48;						// 设置字体高度为 48
	_tcscpy_s(f.lfFaceName, _T("黑体"));		// 设置字体为“黑体”(高版本 VC 推荐使用 _tcscpy_s 函数)
	f.lfQuality = ANTIALIASED_QUALITY;		// 设置输出效果为抗锯齿  
	settextstyle(&f);						// 设置字体样式
	setbkmode(TRANSPARENT);
	MOUSEMSG m;		// 定义鼠标消息
	char tmp_char[100] = { '0' };
	wchar_t tmp_wchar[100] = { '0' };

	//从全部课程中读入当前课程
	courses* all_cou;
	all_cou = get_course_info();
	courses current_cou;
	for (int i = 0;i < get_total_course_num();i++)
		if (all_cou[i].id == course_id)
			courses_copy_single(current_cou, all_cou[i]);
	

	while (1) {

		//载入课程信息
		all_cou = get_course_info();
		for (int i = 0;i < get_total_course_num();i++)
			if (all_cou[i].id == course_id)
				courses_copy_single(current_cou, all_cou[i]);
		free(all_cou);
		cleardevice();
		setbkcolor(WHITE);

		putimage(20, 20, &school);
		putimage(20 + logo_school_wide, 35, &bupt_teacher_management_system);
		putimage(WIN_WIDE - 40 - logo_school_motto_wide, 20, &school_motto);



		outtextxy(200, 200, TEXT("教材"));
		outtextxy(200, 400, TEXT("课程简介"));
		outtextxy(200, 600, TEXT("限制人数"));
		outtextxy(200, 700, TEXT("课程状态"));

		if(get_course_population(course_id) == 0)
			putimage(480,700,&button_course_not_lunched);
		else
			putimage(480, 700, &button_course_lunched);

		rectangle(480, 200, 750, 248);
		
		rectangle(480, 400, 750, 448);
		rectangle(480, 600, 750, 648);

		//教材
		CharToTchar(current_cou.book, tmp_wchar);
		outtextxy(480,200,tmp_wchar);

		//限制人数
		sprintf_s(tmp_char, "%d", current_cou.limit_number);
		CharToTchar(tmp_char, tmp_wchar);
		outtextxy(480, 600, tmp_wchar);

		//课程简介
		LOGFONT f;
		gettextstyle(&f);						// 获取当前字体设置
		f.lfHeight = 28;						// 设置字体高度为 28
		settextstyle(&f);						// 设置字体样式
		CharToTchar(get_course_introduction(course_id), tmp_wchar);
		outtextxy(480, 400, tmp_wchar);

		putimage(WIN_WIDE - 300, WIN_HIGH - 110, &button_verify);


		while (MouseHit())  //这个函数用于检测当前是否有鼠标消息
		{
			
			m = GetMouseMsg();
			if (m.uMsg == WM_LBUTTONDOWN)//如果按左键
			{

				

					//更改课本
					if (m.x > 480 && m.y > 200 && m.x < 750 && m.y < 248)
					{
						if (get_course_population(course_id) == 0) {
							InputBox(tmp_wchar, 20, L"请输入教材", L"更改教材");
							TcharToChar(tmp_wchar, tmp_char);
							modify_course_book(course_id, tmp_char);
							mciSendString(_T("close di2"), NULL, 0, NULL);//关闭
							mciSendString(_T("open sound\\di2.wav alias di2"), NULL, 0, NULL);//载入
							mciSendString(_T("play di2 "), NULL, 0, NULL);//播放
						}
						else {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("已开课不可修改教材"), TEXT("限制修改修改"), 0);
						}
					}

					//更改简介
					if (m.x > 480 && m.y > 400 && m.x < 750 && m.y < 448)
					{
						if (get_course_population(course_id) == 0) {
							InputBox(tmp_wchar, 20, L"请输入简介", L"更改简介");
							TcharToChar(tmp_wchar, tmp_char);
							rewrite_course_introduction(tmp_char, course_id);
							mciSendString(_T("close di2"), NULL, 0, NULL);//关闭
							mciSendString(_T("open sound\\di2.wav alias di2"), NULL, 0, NULL);//载入
							mciSendString(_T("play di2 "), NULL, 0, NULL);//播放
						}
						else {
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("已开课不可修改简介"), TEXT("限制修改修改"), 0);
						}
					}
				


					//更改限制人数
					if (m.x > 480 && m.y > 600 && m.x < 750 && m.y < 648)
					{


						InputBox(tmp_wchar, 20, L"请输入限制人数(只可输入100或80)", L"更改限制人数");
						if (_wtoi(tmp_wchar) == 100 || _wtoi(tmp_wchar) == 80) {
							modify_course_limt_population(course_id, _wtoi(tmp_wchar));
							mciSendString(_T("close di2"), NULL, 0, NULL);//关闭
							mciSendString(_T("open sound\\di2.wav alias di2"), NULL, 0, NULL);//载入
							mciSendString(_T("play di2 "), NULL, 0, NULL);//播放
						}
						else
						{
							mciSendString(_T("close wrong"), NULL, 0, NULL);//关闭错误音乐
							mciSendString(_T("open sound\\wrong.wav alias wrong"), NULL, 0, NULL);//载入错误音乐
							mciSendString(_T("play wrong "), NULL, 0, NULL);//播放错误音乐
							MessageBox(NULL, TEXT("只可输入100或80"), TEXT("请重新输入"), 0);
						}
					
				}
				
					if (m.x > WIN_WIDE - 300 && m.y > WIN_HIGH - 110 && m.x < WIN_WIDE - 300 +100 && m.y < WIN_HIGH - 110 +49)
					{
						return true;
					}
			}


			if (m.uMsg == WM_RBUTTONDOWN)//如果按右键
			{
				return false;
			}
		}
		
		FlushBatchDraw();
		Sleep(15);
	}
	return false;
}

