
#include<iostream>
#include <iomanip>
using  namespace std;

const int MAX = 100;
void test1_1()
{
		int k = 0;
		int i = k + 1;
		cout << i++ << endl;
		cout << i++ << endl;
		cout << "Welcome to C++" << endl;
}
void test1_2()
{
	float r, h;
	const float π = 3.14;
	cout << "请输入圆锥的底边半径和高" << endl;
	cin >> r>> h;
	float v = (π * r * r) * h / 3;

}
void test1_3()
{
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "short int length:" << sizeof(short int) << endl;
	cout << "long int length:" << sizeof(long int) << endl;
	cout << "float length:" << sizeof(float) << endl;
	cout << "double length:" << sizeof(double) << endl;
	cout << "long double length:" << sizeof(long double) << endl;
	cout << "bool length:" << sizeof(bool) << endl;
}
void test1_4()
{
	unsigned int testUnint = 65534;
	cout << "output in unsigned int type:" << testUnint << endl;
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl;
	cout << "Output in octal: " << oct << testUnint << endl;
}

void test1_5()
{
	double fahrenheit;
	std::cout << "请输入华氏温度：";
	std::cin >> fahrenheit;

	double celsius = (fahrenheit - 32) * 5 / 9;

	cout <<fixed <<setprecision(2);
	cout << "对应的摄氏温度为：" << celsius << endl;
}
void test2_1()
{
		char ch;
		cout << "请输入一个字符：";
		cin >> ch;

		if (ch >= 'a' && ch <= 'z') {
			cout << char(ch - 32) << endl;
		}
		else {
			cout << int(ch + 1) << endl;
		}
 }
void test2_2()
{
	float x;
	cin >> x;
	float y = 0;
	if (x < 1 && x>0)
	{
		y = 3 - x * 2;
	}
	else if (1 <= x && x < 5)
	{
		y = 2 / (x * 4) + 1;
	}
	else if (5 <= x && x < 10)
	{
		y = x * x;
	}
	else
	{
		cout << "您输入的数字不在给定范围内" << endl;
		system("pause");
	}
	cout << y << endl;
}
void test2_3()
{
	int a, b, c;
	cout << "请输入三角形的三条边长：" << endl;
	cin >> a>> b>> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout<<"您输入的三角形的边长是："<<a+b+c<<endl;
		if (a == b && b == c && a == c)
		{
			cout << "您输入的是等腰三角形" << endl;
		}
		else
		{
			cout << "您输入的不是等腰三角形" << endl;
		}
	}
	else
	{
		cout << "您输入的不是三角形" << endl;
	}
}
void test2_4()
{
	float a, b;
	char c;
	cout << "请输入第一个数字" << endl;
	cin >> a;
	cout << "请输入第二个数字" << endl;
	cin >> b;
	cout<< "请输入运算符" << endl;
	cin >> c;
	if (c == '+')
	{
		cout << "结果是：" << a + b << endl;
	}
	else if (c == '-')
	{
		cout << "结果是：" << a - b << endl;
	}
	else if (c == '*')
	{
		cout << "结果是：" << a * b << endl;
	}
	else if (c == '/')
	{
		if (b == 0)
		{
			cout << "除数不能为零" << endl;
			return;
		}
		else
		{
			cout << "结果是：" << a / b << endl;
		}
	}
	else if (c == '%')
	{
		if (b == 0)
		{
			cout << "除数不能为零" << endl;
			return;
		}
		else {
			cout << "结果是：" << (int)a % (int)b << endl;
		}
	}
	else
	{
		cout << "您输入的运算符不正确" << endl;
	}
}
void test2_5()
{
	char str[1000];
	cout << "请输入一行字符：";
	cin.getline(str, 1000);

	int letterCount = 0;
	int spaceCount = 0;
	int digitCount = 0;
	int otherCount = 0;

	int length = strlen(str);
	for (int i = 0; i < length; i++) {
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
			letterCount++;
		}
		else if (str[i] == ' ') {
			spaceCount++;
		}
		else if (str[i] >= '0' && str[i] <= '9') {
			digitCount++;
		}
		else {
			otherCount++;
		}
	}

	cout << "英文字母个数：" << letterCount << endl;
	cout << "空格个数：" << spaceCount << endl;
	cout << "数字字符个数：" << digitCount << endl;
	cout << "其它字符个数：" << otherCount << endl;
}
void test2_6()
{
	int a, b;
	cin >> a >> b;
	int arr1[1000];
	int arr2[1000];
	for (int i = 1; i < 1000; i++)
	{
		arr1[i] = a * i;
	}
	for (int j = 1; j < 1000; j++)
	{
		arr2[j] = b * j;
	}
	for (int i = 1; i < 1000; i++)
	{
		bool breakall = false;
		for (int j = 1; j < 1000; j++)
		{
			if(arr1[i]==arr2[j])
			{
				cout << "a与b的最小公倍数是：" << arr1[i]<<endl;
				breakall = true;
				break;
			}
			else
			{
				continue;
			}
		}
		if (breakall)
		{
			break;
		}
	}
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	cout << "最大公约数是：" << a << endl;
}
void test2_7()
{
	for (int p = 1; p < 6; p++)
	{
		for (int m = 0; m < p; m++)
		{
			cout << "*"  ;
		}
		cout << endl;
	}
}
void test2_8()
{	   double a;
    cout << "请输入一个数 a：";
    cin >> a;
    if (a < 0) {
        cout << "输入的数为负数，其平方根为虚数，无法用此迭代法求解。" << endl;
    } else {
        double xn = a;
        double xn1;
        do {
            xn1 = 0.5 * (xn + a / xn);
            if (abs(xn1 - xn) < 1e-5) {
                break;
            }
            xn = xn1;
        } while (true);
        cout << a << "的平方根为：" << xn1 << endl;
}
void test2_9()
{
	
	float price = 0.8;
	float days=1, apples=2,allprice=0;
	while (apples*2<= MAX)
	{
		allprice += apples * price;
		apples = apples * 2;
		days++;
	}
	float average = allprice / days;
	cout <<allprice<< "每天平均花" << average << "元" << endl;
}


int main()
{

}
