#pragma once
#include "stdafx.h"
#include <iostream>
using namespace std;

#include "person.h"

class boss : public person 
{
private:
	
	long long int static_salary=-1;
	int w_hour_s = -1;
	long int price_of_hour = -1;
	long int price_of_hour_extra = -1;
	int hour_of_extra = -1;

protected:

public:
	//if the prograss do rigth this func. return 0
	//TODO move this into .cpp file
	//string first_name_boss,string last_name_boss,int hour,int ex_hour,int salary_boss,int slalry_boss_over
	bool set_info(string &first_name_boss,string &last_name_boss,int &hour,int &ex_hour,int &salary_boss,int &slalry_boss_over)
	{
		type = 1;
		first_name = first_name_boss;
		last_name = last_name_boss;
		w_hour_s = hour;
		hour_of_extra = ex_hour;
		price_of_hour = salary_boss;
		price_of_hour_extra = slalry_boss_over;

		return 0;
	}

	//TODO move this into cpp
	//show first_name_boss, last_name_boss, hour, ex_hour, price, price_extra
	bool show_info()
	{	
		cout << "________________________________________________________________________________" << endl;
		cout << "| Boss name: " << first_name << " " << last_name << endl;
		cout << "| He/She worked " << w_hour_s << " hour" << endl;
		cout << "| and if work more than " << hour_of_extra << " hour then it's overwork" << endl;
		cout << "| He/She price for normal hour of working is: " << price_of_hour << endl;
		cout << "| and price for extra hour of working is: " << price_of_hour_extra << endl;
		cout << "________________________________________________________________________________" << endl;
		return 0;
	}
};