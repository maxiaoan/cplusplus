//2_6.cpp
#include <iostream>
using namespace std;
int main() {
	int i = 1, sum = 0;
	while (i <= 10) {
		sum += i;  //�൱��sum = sum + i;
		i++;
	}
	cout << "sum = " << sum << endl;
	return 0;
}
