#pragma once
#include<cstring>
class Student              //������
{
public:                   //���ó�Ա����ԭ������
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
