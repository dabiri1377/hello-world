// salary.cpp : Defines the entry point for the console application.
//
#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


//TODO put all this into one haeder file
#include "person.h"
#include "boss.h"
#include "h_worker.h"
#include "salesman.h"
#include "com_worker.h"



//define the starting pointer of link list
person *start_of_link_list = NULL;


//
int check_the_input_for_two_int(int min, int max);

//this func. for show main menu and navigate in that
int main_menu();

//this func. for show Data entery menu and navigate in that
int data_entery();

//this fucn. for Show result menu and navigate in it
int show_result();

//this func. for create a list
void set_linklist();

//this func. return number of member of linklist
int number_of_linklist();

//////func. s for get data
//func. for get and return first name
void get_first_name(string &first_name);
//func. for get and return last name
void get_last_name(string &last_name);
//func. for get and return hour He/She worked
void get_worked_hour(int &hour_of_work);
//func. for get and return houe if He/She worked cont. exta.
void get_work_exta_hour(int &hour_of_exta_work);
//func. for get and return price of hour
void get_price_of_normal_hour(int &price);
//func. for get and return price of extra hour
void get_price_of_extra_hour(int &price);
//func. for get and return name of product
void get_name_of_product(string &name, char number);
//func. for get and return
int get_price_of_product(char number);
//func. for get and return
int get_number_of_product(char number);
//func. for get and return
int get_percent_of_product(char number);



//------------------------------------- main -------------------------------------
int main()
{
	//test
	

	// this for save beetwen data entrey and show result
	int main_data_selected = 0;
	//this for save Data entery situation
	int data_entery_selected = 0;
	bool flag_main_menu = 0;
	while (flag_main_menu == 0)
	{
		//if data return == 1 mean want to Data entery if ==2 mean want to show result
		main_data_selected = main_menu();

		//show the entery DATA 
		if (main_data_selected == 1)
		{
			//if return == 1 => boss, return == 2 => Salesman
			//	 return == 3 => h_worker, return == 4 => com_worker
			data_entery();
		}
		if (main_data_selected == 2)
		{
			show_result();
		}
	}
	


    return 0;
}

//------------------------------- func. -------------------------------

int number_of_linklist()
{
	bool flag = 0;
	person *temp = NULL;
	temp = start_of_link_list;
	unsigned int conter = 1;
	if (temp == NULL)
		return 0;

	while (flag == 0)
	{
		if (temp->get_pointer() == NULL)
		{
			flag = 1;
			return conter;
		}//if
		else
		{	
			conter++;
			temp = temp->get_pointer();
		}//else
	}//while
	return -1;
}

void set_linklist(person *the_person)
{
	if (start_of_link_list == NULL)
	{
		start_of_link_list = the_person;
	}//if
	else
	{
		bool flag = 0;
		person *temp=NULL;
		temp = start_of_link_list;
		while (flag == 0)
		{
			if (temp->get_pointer() == NULL)
			{
				temp->set_pointer(the_person);
				flag = 1;
			}//if
			else
			{
				temp = temp->get_pointer();
			}//else
		}//while
	}//else
}

int check_the_input_for_two_int(int min, int max)
{
	int selected_data = -1;
while (true)
{
	cout << "# Your Data:";
	//int. for selecting which 1data enterad and return it to main func.
	cin >> selected_data;
	//this if for cheching the coorectness of data entered
	if (selected_data >= min && selected_data <= max)
	{

		return selected_data;
	}
	//this is mean data enteaed is wrong and get it again from user
	else {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "# Your Data was wrong, please enter again" << endl;
		
	}
	

}
}

int main_menu()
{
	cout << "##################################################" << endl;
	cout << "# hello " << endl;
	cout << "# please enter what you what:" << endl;
	cout << "# 1:Data entry" << endl;
	cout << "# 2:Show result" << endl;
	int selected_data = 0;
	selected_data = check_the_input_for_two_int(1, 2);
	return selected_data;
}

//func. for get data from user
void get_first_name(string &first_name)
{
	cout << "# First name :";
	cin.clear();
	cin.ignore();
	getline(cin, first_name);
}
void get_last_name(string &last_name) 
{
	cout << "# Last name :";
	cin.clear();
	cin.ignore(0,'\n');
	getline(cin, last_name);
}
void get_worked_hour(int &hour_of_work)
{
	cout << "# Hour He/She worked (0-600) :" << endl;
	hour_of_work = check_the_input_for_two_int(0, 600);
}
void get_work_exta_hour(int &hour_of_exta_work) 
{
	cout << "# Hour He/She worked more is cunt. extrea (160-600) :" << endl;
	hour_of_exta_work = check_the_input_for_two_int(160, 600);
}
void get_price_of_normal_hour(int &price)
{
	cout << "# Price of normal hour work (10-2500):" << endl;
	price = check_the_input_for_two_int(10, 2500);
}
void get_price_of_extra_hour(int &price)
{
	cout << "# Price of extrea hour work (10-5000):" << endl;
	price = check_the_input_for_two_int(10, 5000);
}
void get_name_of_product(string &name, char number)
{
	cout << "# name of product #"<< number <<" :";
	cin.clear();
	cin.ignore();
	getline(cin, name);

}
int get_price_of_product( char number)
{
	cout << "# price of product #"<< number <<" (1-100):" << endl;
	return check_the_input_for_two_int(1, 100);
}
int get_number_of_product(char number)
{
	cout << "# number of product #" << number << " (1-10000):" << endl;
	return check_the_input_for_two_int(1, 10000);
}
int get_percent_of_product(char number)
{
	cout << "# percent of product #" << number << " (1-100):" << endl;
	return check_the_input_for_two_int(1, 100);
}


int data_entery()
{
	bool flag_data_entery = 0;
	while (flag_data_entery == 0)
	{

		system("cls");

		//test
		cout << endl << "number of linklist : " << number_of_linklist() << endl;

		cout << "###################Data Entery####################" << endl;
		cout << "# please enter what Data Entry you want:" << endl;
		cout << "# 1:Boss" << endl;
		cout << "# 2:Salesman" << endl;
		cout << "# 3:Hourly Worker" << endl;
		cout << "# 4:Com. Worker" << endl;
		cout << "# 5:Return to main menu" << endl;
		int selected_data = 0;
		selected_data = check_the_input_for_two_int(1, 5);
		
		//if for runing boss script
		if (selected_data == 1)
		{
			bool flag = 0;
			while (flag == 0)
			{
				string f_name,l_name;
				int hour,ext_work_time,salary,salary_ext_work;

				system("cls");
				cout << "############### Data Entery for Boss ###############" << endl;
				cout << "# please enter what Data Entry in this way:" << endl;

				get_first_name(f_name);
				get_last_name(l_name);
				get_worked_hour(hour);
				get_work_exta_hour(ext_work_time);
				get_price_of_normal_hour(salary);
				get_price_of_extra_hour(salary_ext_work);

				boss *temp = new boss;
				set_linklist(temp);
				
				temp -> boss::set_info(f_name,l_name,hour,ext_work_time,salary,salary_ext_work);

				//test
				temp->boss::show_info();

				//TODO fix y and x shit
				cout << "# Do you want enter more?(y=1,n=0)" << endl;
				int temp2 = -1;
				temp2 = check_the_input_for_two_int(0, 1);
				if (temp2 == 0)
					flag = 1;
						

				cout << "# 5:return !!fix this shit" << endl;
			}//while
		}//if

		//if for runing Salesman
		if (selected_data == 2)
		{
			bool flag = 0;
			while (flag == 0)
			{
				string f_name, l_name;
				string pro_a, pro_b, pro_c;
				int pro_price_number[2][3];
				
				system("cls");
				cout << "############### Data Entery for Salesman ###############" << endl;
				cout << "# please enter what Data Entry in this way:" << endl;

				get_first_name(f_name);
				get_last_name(l_name);
				
				get_name_of_product(pro_a, '1');
				pro_price_number[0][0] = get_price_of_product('1');
				pro_price_number[1][0] = get_number_of_product('1');

				get_name_of_product(pro_b, '2');
				pro_price_number[0][1] = get_price_of_product('2');
				pro_price_number[1][1] = get_number_of_product('2');

				get_name_of_product(pro_c, '3');
				pro_price_number[0][2] = get_price_of_product('3');
				pro_price_number[1][2] = get_number_of_product('3');

				salesman *temp = new salesman;
				set_linklist(temp);

				temp->salesman::set_info(f_name, l_name,pro_a,pro_b,pro_c,pro_price_number[1][0]
										,pro_price_number[1][1], pro_price_number[1][2],
										 pro_price_number[0][0], pro_price_number[0][1], pro_price_number[0][2]);

				//test
				{

					temp->show_info();
					
				}

				cout << "# Do you want enter more?(y=1,n=0)" << endl;
				int temp2 = -1;
				temp2 = check_the_input_for_two_int(0, 1);
				if (temp2 == 0)
				{
					flag = 1;
				}


			}//while
		}//if

		//if for runing hourly worker script
		if (selected_data == 3)
		{
			bool flag = 0;
			while (flag == 0)
			{
				string f_name,l_name;
				int hour,ext_work_time,salary,salary_ext_work;

				system("cls");
				cout << "############### Data Entery for hour worker ###############" << endl;
				cout << "# please enter what Data Entry in this way:" << endl;

				get_first_name(f_name);
				get_last_name(l_name);
				get_worked_hour(hour);
				get_work_exta_hour(ext_work_time);
				get_price_of_normal_hour(salary);
				get_price_of_extra_hour(salary_ext_work);

				h_worker *temp = new h_worker;
				set_linklist(temp);

				temp->h_worker::set_info(f_name, l_name, hour, ext_work_time, salary, salary_ext_work);


				//test
				{
					temp->h_worker:: show_info();
				}

				//TODO fix y and x shit
				cout << "# Do you want enter more?(y=1,n=0)" << endl;
				int temp2 = -1;
				temp2 = check_the_input_for_two_int(0, 1);
				if (temp2 == 0)
				{
					flag = 1;
				}	

				//test
				system("pause");

				cout << "# 5:return !!fix this shit" << endl;
			}//while
		}//if

		//if for runing com.worker
		if(selected_data == 4)
		{
			bool flag = 0;
			while (flag == 0)
			{
				string f_name, l_name;
				string pro_a, pro_b, pro_c;
				int pro_price_number[3][3];

				system("cls");
				cout << "############### Data Entery for Salesman ###############" << endl;
				cout << "# please enter what Data Entry in this way:" << endl;

				get_first_name(f_name);
				get_last_name(l_name);

				get_name_of_product(pro_a, '1');
				pro_price_number[0][0] = get_price_of_product('1');
				pro_price_number[1][0] = get_number_of_product('1');
				pro_price_number[2][0] = get_percent_of_product('1');

				get_name_of_product(pro_b, '2');
				pro_price_number[0][1] = get_price_of_product('2');
				pro_price_number[1][1] = get_number_of_product('2');
				pro_price_number[2][1] = get_percent_of_product('2');

				get_name_of_product(pro_c, '3');
				pro_price_number[0][2] = get_price_of_product('3');
				pro_price_number[1][2] = get_number_of_product('3');
				pro_price_number[2][2] = get_percent_of_product('3');

				com_worker *temp = new com_worker;
				set_linklist(temp);

				temp->com_worker::set_info(f_name, l_name, pro_a, pro_b, pro_c, pro_price_number);

				//test
				{

					temp->show_info();

				}

				cout << "# Do you want enter more?(y=1,n=0)" << endl;
				int temp2 = -1;
				temp2 = check_the_input_for_two_int(0, 1);
				if (temp2 == 0)
				{
					flag = 1;
				}

			}//while
		}//if

		 //if for runing com.worker
		if (selected_data == 5)
		{
			flag_data_entery = 1;
		}//if

	}//while
	return 1;

}

int show_result()
{
	bool flag_data_entery = 0;
	while (flag_data_entery == 0)
	{

		system("cls");

		//test
		cout << endl << "number of linklist : " << number_of_linklist() << endl;

		cout << "################### Show result ####################" << endl;
		cout << "# please enter what result you want:" << endl;
		cout << "# 1:Boss" << endl;
		cout << "# 2:Salesman" << endl;
		cout << "# 3:Hourly Worker" << endl;
		cout << "# 4:Com. Worker" << endl;
		cout << "# 5:All data" << endl;
		cout << "# 6:Return to main menu" << endl;
		int selected_data = 0;
		selected_data = check_the_input_for_two_int(1, 6);

		//TODO complit it
		if (selected_data == 1) 
		{

		}//if

		 //TODO complit it
		if (selected_data == 2)
		{

		}//if
		
		 //TODO complit it
		if (selected_data == 3)
		{

		}//if
		
		 //TODO complit it
		if (selected_data == 4)
		{

		}//if
		
		 
		if (selected_data == 5)
		{
			bool flag_selected_data_5 = 0;
			system("cls");
			cout << "################### Show result of all member ####################" << endl;
			while (flag_selected_data_5 == 0)
			{
				
				//check daata entered or not
				if (start_of_link_list == NULL)
				{
					cout << "linklist is empty!!" << endl;
					flag_selected_data_5 = 1;
					break;
					system("pause");
				}
				else
				{
					person *temp;
					temp = start_of_link_list;
					
					unsigned int conter = 1;
					bool flag = 0;
					while (flag == 0)
					{
						if (temp->get_pointer() == NULL)
						{
							flag = 1;
						}//if
						
						temp->show_info();

						conter++;
						//test
						cout << "tess2" << endl;

						temp = temp->get_pointer();
						system("pause");
						
					}//while

					if (flag == 1)
					{
						cout << "# End of the linklist";
					}



				}//else
			}//while
		}//if
		
		 //TODO complit it
		if (selected_data == 6)
		{

		}//if


	}//while
	return 0;
}