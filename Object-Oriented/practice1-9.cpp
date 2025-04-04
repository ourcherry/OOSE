#include <stdio.h>

// recursive function
int power(int x, int y)
{
	if (y > 0)
	{
		return x * power(x, y - 1);
	}
	else
	{
		return 1;
	}
};

int main(void)
{
	int a = 2;
	int b = 3;
	int result = power(a,b);
	printf("%d^%d = %d\n", a, b, result);

	a = 4;
	b = 5;
	result = power(a, b);
	printf("%d^%d = %d\n", a, b, result);

	return 0;
}