#include<iostream>
using namespace std;
class RecCol {
private:
	int length;
	int width;
	int height;
	int V;
public:
	RecCol()
	{
		cin >> length >> height >> width;
		V = length * height * width;
	}
	int getV()
	{
		return V;

	}
};
int main()
{
	RecCol r[3];
	for (int i = 0;  i <3; i++ )
	{
		cout << "第" << i + 1 << "个长方体的体积是" << r[i].getV()<<endl;
	}
}