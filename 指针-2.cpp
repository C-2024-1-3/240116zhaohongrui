#include<iostream>
#include<string>
using namespace std;
int parseHex(const char* const hexString)
{
	int ten = stoi(hexString, nullptr, 16);
	return ten;
}
int main()
{
	char hexString[100];
	cout << "������һ��ʮ����������";
	cin >> hexString;
	cout << parseHex(hexString) << endl;
}