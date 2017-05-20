#pragma once
#include "stdafx.h"
#include <iostream>
using namespace std;

#include "person.h"

class h_worker : public person
{
private:

	int salary = -1;
	int hour_of_worker = -1;
	int hour_of_extra = -1;
	long int price_of_hour = -1;
	long int price_of_hour_extra = -1;

protected:

public:

	//TODO
	const bool set_info(string &first_name_boss, string &last_name_boss, int &hour, int &ex_hour,
		int &salary_boss, int &slalry_boss_over)
	{
		type = 3;
		first_name = first_name_boss;
		last_name = last_name_boss;
		hour_of_worker = hour;
		hour_of_extra = ex_hour;
		price_of_hour = salary_boss;
		price_of_hour_extra = slalry_boss_over;

		return 0;
	}

	//TODO
	bool show_info()
	{
		cout << "________________________________________________________________________________" << endl;
		cout << "| Hourly worker name: " << first_name << " " << last_name << endl;
		cout << "| He/She worked " << hour_of_worker << " hour" << endl;
		cout << "| and if work more than " << hour_of_extra << " hour then it's overwork" << endl;
		cout << "| He/She price for normal hour of working is: " << price_of_hour << endl;
		cout << "| and price for extra hour of working is: " << price_of_hour_extra << endl;
		cout << "________________________________________________________________________________" << endl;
		return 0;
	}
};

