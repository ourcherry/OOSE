#include <iostream>
using namespace std;

int* GetArray2(int num)
{
	if (num <= 0)
	{
		// null pointer
		return nullptr;
	}

	// 동적 메모리 할당, (nothrow) 예외 처리 옵션 -> throw error 대신 nullptr 리턴
	int* p = new(nothrow) int[num]; 

	if (p == nullptr)
	{
		cerr << "메모리 할당 실패" << endl;
		return nullptr;
	}

	for (int i = 0; i < num; i++)
	{
		p[i] = i;
	}
	return p;
}

int main_2_6(void)
{
	int i;
	int* pAry;
	pAry = GetArray2(5);

	for (i = 0; i < 5; i++)
	{
		cout << pAry[i] << " ";
	}
	cout << endl;
	delete[] pAry;

	return 0;
}
