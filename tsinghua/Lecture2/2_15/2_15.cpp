//2_15.cpp
#include<iostream>
using namespace std;

int main()
{
	int start = 1, ending = start * 10, length = 1;
	while (ending < 10001) {
		for (int i = start; i < ending; i++) {
			if (i * i % ending == i)
				cout << "i = " << i << ", i*i = " << i*i << endl;
		}
		start *= 10;
		ending *= 10;
	}
	return 0;
}
