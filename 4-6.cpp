#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	int slen = strlen(s);
	for (int i=0; i < slen; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			
				if (s[i] == 'a'+j || s[i]+j == 'A'+j)
				{
					counts[j]++;
				}
			
		}
	}
}
int main()
{
	int counts[26];
	char input[100];
	for (int j = 0; j < 26; j++)
	{
		counts[j] = 0;
	}
	cout << "Enter a string:";
		cin.getline(input,100);
		cout << endl;
		count(input, counts);
		for (int i = 0; i < 26; i++)
		{
			if (counts[i] != 0)
			{
				cout << (char)('a' + i) << ":" << counts[i] << "times" << endl;

			}
		}
}