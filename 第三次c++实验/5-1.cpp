#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
public:
	void setTime(int h, int m, int s)
	{
		hour = h;
		minute = m;
		sec = s;
	}
	void showTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;	//����t1ΪTime�����
	int h, m, s;
	cin >> h >> m >> s;//�����趨��ʱ�� 
	t1.setTime(h, m, s);
	t1.showTime();
	return 0;
}
