#include <iostream>
using namespace std;
int main()
{
	bool doors[100];
	int students[100];
	
	for (int i = 0; i < 100; i++)
	{
		doors[i] = true;
		students[i] = i + 1;
	}
	for (int i = 1; i < 100; i++)
	{
		int n = students[i];
		int times = 1;
		for (int j = n; j < 100; j = n + (n + 1) * times)
		{
			doors[j] = !doors[j];
			times++;
		}
	}
	for (int b = 0; b < 100; b++)
	{
		if (doors[b])
		{
			cout << b + 1 << " ";
		}
	}
}