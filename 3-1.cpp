#include<iostream>
using namespace std;
int GCD(int& a, int& b)
{
	int max = (a > b ? a : b);
	int min = (a < b ? a : b);
	int remainder = max % min;
	if (remainder == 0)
	{
		return min;
	}
	else
	{
		while (remainder != 0)
		{	
			int temp = remainder;
			remainder = min % remainder;
			min = temp;
		}
		return min;
	}
}
int LCM(int& a, int& b)
{
	int m = GCD(a, b);
	int n = a/m;
	int l = b * n;
	return l;
}
int main()
{
	int m, n;
	int& a = m; 
	int& b = n;
	cin >> m >> n ;
	cout << endl <<GCD(a, b) <<" "<<LCM(a,b)<< endl;
}