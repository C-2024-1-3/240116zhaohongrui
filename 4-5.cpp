#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int s1Len = strlen(s1);
	int s2Len = strlen(s2);
	for (int i = 0; i <= s1Len-s2Len ; i++)
	{
		if (s1[i] == s2[0])
		{
			for (int j = 0; j < s2Len; j++)
			{
				if (s1[i + j] != s2[j])
				{
					return -1;
				}
				else
				{
					return i;
				}
			}
		}
	}
}
int main()
{
	char s1[100];
	char s2[100];
	cout << "Enter your first string:";
		cin.getline(s1, 100);
		cout << endl;
		cout << "Enter your second string:";
		cin.getline(s2, 100);
		cout << endl;
		cout<<"indexOf()is"<<indexOf(s1, s2);
}