#include<iostream>
using namespace std;
class Point
{
public:
	Point()
	{
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "���ĺ������Ϊ����" << x << ","  << y << ")" << endl;
	}
private:
	int x, y;

};

int main()
{
	Point p1;
	p1.setPoint(58, 445);
	p1.display();
}