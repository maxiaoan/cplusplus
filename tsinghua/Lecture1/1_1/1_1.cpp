//1_1.cpp
#include<iostream>
using namespace std;
int main()
{
	const double price1 = 25.5, price2 = 10.3, price3 = 12.5;
	double total = 0;
	int number1 = 0, number2 = 0, number3 = 0;
	cout << "������Ʒ�۸�Ϊ:" << price1 << ',' << price2 << ',' << price3 << '\n';
	cout << "����ÿ���򼸼���" << endl;
	cin >> number1 >> number2 >> number3;
	total = number1*price1 + number2*price2 + number3*price3;
	cout << "Ӧ�����ܶ" << total << endl;
	return 0;
}
