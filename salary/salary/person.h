#pragma once
#include "stdafx.h"
#include<iostream>

using namespace std;

//this class for define basic thinges for evry person
//including link list, first name and last name and other thing
class person {
private:
	

	//for link list fianal pointer 
	person *final_pointer_of_link_list = NULL;
	

protected:
	//for first name and last name for ever person
	string first_name, last_name;

	//temprory solution for knowing what is data typa is that
	int type = 0;
	
public:
	void set_pointer(person *set_pointer_for_real);
	person* get_pointer() 
	{//TODO move this into cpp
		return final_pointer_of_link_list;

	}
	virtual bool show_info() {
		cout << "base class" << endl;
		return 0;
	}
	int type_of_class()
	{
		return type;
	}

};