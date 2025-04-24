#include <iostream>
using namespace std;

int* GetArray(int num) {
	if (num <= 0) {
		return nullptr;
	}

	int* p = new(nothrow) int[num];

	if (p == nullptr) {
		cerr << "메모리 할당 실패" << endl;
		return nullptr;
	}

	for (int i = 0; i < num; i++) {
		p[i] = i;
	}
	return p;
}

int main_1(void) {
	int i;
	int* pAry;

	pAry = GetArray(5);
	for (i = 0; i < 5; i++)
		cout << pAry[i] << " ";
	cout << endl;

	delete[] pAry;

	return 0;
}
