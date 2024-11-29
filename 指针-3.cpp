#include<iostream>
using namespace std;
void bubblelist(int list[],int num1)
{
	int num2 = num1;
	for (int i = 0; i < num1; i++,num1--)
	{
		for (int j = 0; j < num2-1; j++)
		{
			if (list[j] > list[j + 1])
			{
				int temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int num;
	cout << "请输入数组元素个数：";
	cin >> num;
	int* list = new int[num];
	cout << "请给元素赋值" << endl;
	for (int i = 0; i < num; i++)
	{
		cin >> list[i];
	}
	int* p = list;
	bubblelist(list,num);
	for (int i = 0; i < num; i++)
	{
		cout << *(p + i) << " " ;
	}
}