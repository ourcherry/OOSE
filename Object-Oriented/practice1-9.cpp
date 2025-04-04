#include <stdio.h>

void Print(const char *str, int count)
{
	if (count <= 0) return;

	printf("%s\n", str);
	Print(str, count - 1);
}

int main_1_9(void) 
{
	Print("recursive function", 5);

	return 0;
}