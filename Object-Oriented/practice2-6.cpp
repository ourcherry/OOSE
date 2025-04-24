#include <iostream>
using namespace std;

int* GetArray2(int num)
{
	if (num <= 0)
	{
		// null pointer
		return nullptr;
	}

	// ���� �޸� �Ҵ�, (nothrow) ���� ó�� �ɼ� -> throw error ��� nullptr ����
	int* p = new(nothrow) int[num]; 

	if (p == nullptr)
	{
		cerr << "�޸� �Ҵ� ����" << endl;
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
