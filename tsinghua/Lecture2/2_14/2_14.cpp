//2_14.cpp
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "����Ҫ�ֽ��������";
	cin >> n;
	if (n < 1) {
		cout << "���벻���������������˳�" << endl;
		return 0;
	}
	int element = 2;
	while (n > 1 && element <= n) {
		if (n % element == 0) {
			if (n == element)
				cout << element;
			else
				cout << element << " * ";
			n /= element;
		}
		else
			element++;
	}
	cout << endl;
	return 0;
}
