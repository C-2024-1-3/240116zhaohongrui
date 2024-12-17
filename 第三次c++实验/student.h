#pragma once
#include<cstring>
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value(const int num,const char name[],const char sex)
	{
		this->num = num;
		strcpy_s(this->name, sizeof(this->name), name);
		this->sex = sex;
	}
private:
	int num;
	char name[20];
	char sex;
};
