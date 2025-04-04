#include <stdio.h>

void Print(char *str, int count)
{
	if (count <= 0) return;

	printf("%s\n", str);
	Print(str, count - 1);
}

int main(void) 
{
	Print("recursive function", 5);

	return 0;
}