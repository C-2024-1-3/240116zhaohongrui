#include<iostream>
using namespace std;
class Student {
public:
	int Score;
	string ID;
	void set()
	{
		cin >> Score >> ID;
	}

};
void max(const Student* a)
{
	string MaxId;
	for (int i = 0; i < 4; i++)
	{
	
		MaxId = (a[i].Score > a[i + 1].Score ? a[i].ID : a[i + 1].ID);
		
	}
	cout<<"成绩最好的学生的ID是：" << MaxId;
}
int main()
{
	Student s[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "请输入第" << i + 1 << "位学生的成绩和学号" << endl;
		s[i].set();
	}
	max(s);
}