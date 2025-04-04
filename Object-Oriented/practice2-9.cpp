#include <iostream>
using namespace std;

int main_2_9(void)
{
	int sum = 0;
	for (int i = 0; i < 100; i++)
	{
		sum += (i + 1);
	}

	cout << "SUM 1~100 : " << sum << endl;

	return 0;
}