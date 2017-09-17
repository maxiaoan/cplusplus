//2_3.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int ival1, ival2;
	cin >> ival1 >> ival2;
	if (ival2 >= 0)
		cout << ival1 << "+" << ival2 << "=" << ival1 + ival2 << endl;
	else
		cout << ival1 << "+(" << ival2 << ")" << "=" << ival1 + ival2 << endl;
	if (ival1%ival2 == 0)
	{
		if (ival1 != 0)
			cout << ival1 << "%" << ival2 << "==0" << endl;
	}
	else
		cout << ival1 << "%" << ival2 << "!=0" << endl;
	return 0;
}
