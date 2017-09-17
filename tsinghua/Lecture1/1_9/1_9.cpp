//1_9.cpp
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << ((a > 2) && (++b)) << endl;
	cout << "b = " << b << endl;
	cout << ((a > 2) || (++b)) << endl;
	cout << "b = " << b << endl;
	return 0;
}
