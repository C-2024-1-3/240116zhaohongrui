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
		cout << "��" << i + 1 << "��������������" << r[i].getV()<<endl;
	}
}