//2_4.cpp
#include <iostream>
using namespace std;
int main() {
	int oldScore, newScore;
	cout << "������ٷ��Ƶĳɼ�:";
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
		cout << "������0~100��Χ�ڵĳɼ���" << endl;
	cout << "ת��Ϊ����Ʒ���Ϊ��" << newScore << endl;
	return 0;
}
