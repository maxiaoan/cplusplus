//2_13.cpp
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a;
	cout << "������һ����1����������";
	cin >> a;
	if (a < 2) {
		cout << "��������ֲ��Ǵ���1��������" << endl;
		return 0;
	}
	if (a == 2) {
		cout << a << "������" << endl;
		return 0;
	}
	double s = sqrt(1.0 *a);
	for (int div = 2; div <= s; div++)
		if (a % div == 0)
		{
			cout << a << "��������" << endl;
			return 0;
		}
	cout << a << "������" << endl;
	return 0;
}
