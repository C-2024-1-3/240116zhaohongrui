#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
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
	Time t1;	//定义t1为Time类对象
	int h, m, s;
	cin >> h >> m >> s;//输入设定的时间 
	t1.setTime(h, m, s);
	t1.showTime();
	return 0;
}
