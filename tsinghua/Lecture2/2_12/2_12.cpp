//2_12.cpp
#include <iostream>
using namespace std;
int main()
{
	int a, b, gcd;
	cout << "����������������";
	cin >> a >> b;
	if (a < 1 || b < 1) {
		cout << "���벻���������������˳�" << endl;
		return 0;
	}
	gcd = a < b ? a : b;
	for (; gcd > 0; gcd--) {
		if (a % gcd == 0 && b % gcd == 0)
			break;
	}
	cout << "���Լ��Ϊ" << gcd << endl;
	return 0;
}
