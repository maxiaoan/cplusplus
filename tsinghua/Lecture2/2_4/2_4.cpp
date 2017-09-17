//2_4.cpp
#include <iostream>
using namespace std;
int main() {
	int oldScore, newScore;
	cout << "请输入百分制的成绩:";
	cin >> oldScore;
	newScore = 0;
	if (oldScore > 80)
		newScore = 5;
	else if (oldScore >60)
		newScore = 4;
	else if (oldScore > 40)
		newScore = 3;
	else if (oldScore > 20)
		newScore = 2;
	else if (oldScore > 0)
		newScore = 1;
	else
		cout << "请输入0~100范围内的成绩！" << endl;
	cout << "转化为五分制分数为：" << newScore << endl;
	return 0;
}
