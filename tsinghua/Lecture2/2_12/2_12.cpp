//2_12.cpp
#include <iostream>
using namespace std;
int main()
{
	int a, b, gcd;
	cout << "输入两个正整数：";
	cin >> a >> b;
	if (a < 1 || b < 1) {
		cout << "输入不是正整数，程序退出" << endl;
		return 0;
	}
	gcd = a < b ? a : b;
	for (; gcd > 0; gcd--) {
		if (a % gcd == 0 && b % gcd == 0)
			break;
	}
	cout << "最大公约数为" << gcd << endl;
	return 0;
}
