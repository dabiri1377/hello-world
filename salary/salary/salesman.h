#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

#include "person.h"

class salesman  : public person
{
private:
	string kala_a, kala_b, kala_c;
	long int kala_price_number[2][3] = { -1 };
	long long int salary = -1;

protected:

public:
	//TODO move this into cpp
	const bool set_info(string &first_name_salesman, string &last_name_salesman,
		string &kala_a_name, string &kala_b_name, string &kala_c_name,
		int &kala_a_num, int &kala_b_num, int &kala_c_num, 
		int &kala_a_price, int &kala_b_price, int &kala_c_price)
	{
		type = 2;
		first_name = first_name_salesman;
		last_name = last_name_salesman;
		kala_a = kala_a_name;
		kala_b = kala_b_name;
		kala_c = kala_c_name;
		kala_price_number[0][0] = kala_a_price;
		kala_price_number[1][0] = kala_a_num;
		kala_price_number[0][1] = kala_b_price;
		kala_price_number[1][1] = kala_b_num;
		kala_price_number[0][2] = kala_c_price;
		kala_price_number[1][2] = kala_c_num;
		
		return 0;
	}

	bool show_info()
	{
		cout << "________________________________________________________________________________" << endl;
		cout << "| salesman name: " << first_name << " " << last_name << endl;
		cout << "| product " << kala_a << " price is " << kala_price_number[0][0] << " and number of it is "
			<< kala_price_number[1][0] << endl;
		cout << "| product " << kala_b << " price is " << kala_price_number[0][1] << " and number of it is "
			<< kala_price_number[1][1] << endl;;
		cout << "| product " << kala_c << " price is " << kala_price_number[0][2] << " and number of it is "
			<< kala_price_number[1][2] << endl;
		cout << "________________________________________________________________________________" << endl;
		return 0;
	}
	
	
	
	
	//TODO fix this shit
	/*
	bool show_info()
	{			  //		27					
		cout << "_____________________________________________________________________" << endl;
		cout << "| Salesman name: " << first_name << " " << last_name << endl;
		cout << "| ????????????????????????????????????????????????????? " << endl;
		cout << "| ?      Name of product       ?  number  ?   price   ? " << endl;
		cout << "| ????????????????????????????????????????????????????? " << endl;
		cout << "| ? " << kala_a;

		cout << "_____________________________________________________________________" << endl;
		return 0;
	}
	*/
};