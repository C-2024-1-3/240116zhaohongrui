#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int num)
{
	int a = sqrt(num);
	for (int i = 2; i <= a; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int prime[200];
	int a = 0;
	int num = 1;
	while(a<200)
	{
		
		if (is_prime(num))
		{
			prime[a] = num;
		
			a++;
		}
		num++;
			cout << a<< endl;
	}
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << prime[i * 10 + j] << " ";
		}
		cout << endl;
	}
}