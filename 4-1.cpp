#include<iostream>
using namespace std;
int main()
{
	int num[10];
	int disnum[10];
	int temp = 0;
	cout << "Enter ten number:" ;
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
	}
	cout << endl;
		for (int i = 0; i < 10; i++)
		{
			bool isrepeat = true;
		
			for (int j = 0; j < 10; j++)
			{
				if (i!=j)
				{
					if (num[i] == num[j])
					{
						isrepeat = false;
					}
				}
			}
			if (isrepeat)
			{
				disnum[temp] = num[i];
				temp++;
			}
		}
		int* disnum1 = new int[temp];
		for (int i = 0; i < temp; i++)
		{
			disnum1[i] = disnum[i];
		}
		cout << "The distinct numbers are:";
		for (int i = 0; i < temp; i++)
		{
			cout << disnum1[i]<<" ";
		}
}