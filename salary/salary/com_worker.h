#pragma once
#include "stdafx.h"
#include <iostream>
using namespace std;

#include "person.h"

class com_worker : public person
{
private:
	string kala_a, kala_b, kala_c;
	long int kala_price_number_percent[3][3] = { -1 };
	long long int salary = -1;
protected:

public:
	//TODO move this into cpp
	const bool set_info(string &first_name_salesman, string &last_name_salesman,
		string &kala_a_name, string &kala_b_name, string &kala_c_name,
		int kala_ha_price_number_percent[3][3])
	{
		type = 4;
		first_name = first_name_salesman;
		last_name = last_name_salesman;
		kala_a = kala_a_name;
		kala_b = kala_b_name;
		kala_c = kala_c_name;
		kala_price_number_percent[0][0] = kala_ha_price_number_percent[0][0];
		kala_price_number_percent[1][0] = kala_ha_price_number_percent[1][0];
		kala_price_number_percent[2][0] = kala_ha_price_number_percent[2][0];

		kala_price_number_percent[0][1] = kala_ha_price_number_percent[0][1];
		kala_price_number_percent[1][1] = kala_ha_price_number_percent[1][1];
		kala_price_number_percent[2][1] = kala_ha_price_number_percent[2][1];

		kala_price_number_percent[0][2] = kala_ha_price_number_percent[0][2];
		kala_price_number_percent[1][2] = kala_ha_price_number_percent[1][2];
		kala_price_number_percent[2][2] = kala_ha_price_number_percent[2][2];

		return 0;
	}

	bool show_info()
	{
		cout << "________________________________________________________________________________" << endl;
		cout << "| salesman name: " << first_name << " " << last_name << endl;
		cout << "| product " << kala_a << " price is " << kala_price_number_percent[0][0] << " and number of it is "
			<< kala_price_number_percent[1][0] << endl;
		cout << "| \t and share of sale is %" << kala_price_number_percent[2][0] << endl;
		cout << "| product " << kala_b << " price is " << kala_price_number_percent[0][1] << " and number of it is "
			<< kala_price_number_percent[1][1] << endl;
		cout << "| \t and share of sale is %" << kala_price_number_percent[2][1] << endl;
		cout << "| product " << kala_c << " price is " << kala_price_number_percent[0][2] << " and number of it is "
			<< kala_price_number_percent[1][2] << endl;
		cout << "| \t and share of sale is %" << kala_price_number_percent[2][2] << endl;
		cout << "________________________________________________________________________________" << endl;
		return 0;
	}


};

