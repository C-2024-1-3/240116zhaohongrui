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
	cout<<"�ɼ���õ�ѧ����ID�ǣ�" << MaxId;
}
int main()
{
	Student s[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "�������" << i + 1 << "λѧ���ĳɼ���ѧ��" << endl;
		s[i].set();
	}
	max(s);
}