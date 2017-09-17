#include <iostream>
using namespace std;

int main()
{
	unsigned int a = 24, b = 13;
	cout << "a & b =" << (a & b) << endl;
	cout << "a | b = " << (a | b) << endl;
	cout << "a ^ b = " << (a ^ b) << endl;
	cout << "~a = " << (~a) << endl;
	cout << (5 << 1) << endl;
	cout << (5 >> 1) << endl;
	cout << (13 >> 2) << endl;
	cout << (13 << 2) << endl;
	return 0;
}
