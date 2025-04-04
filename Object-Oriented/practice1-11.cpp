#include <stdio.h>

struct Point {
	int x;
	int y;
};

void Swap(struct Point &p1, struct Point &p2)
{
	struct Point temp = p1;
	p1 = p2;
	p2 = temp;
}

int main_1_11(void)
{
	struct Point p1 = { 1, 2 };
	struct Point p2 = { 3, 4 };

	printf("p1: (%d, %d)\n", p1.x, p1.y);
	printf("p2: (%d, %d)\n", p2.x, p2.y);

	printf("--------------------Swap p1 and p2\n");
	Swap(p1, p2);

	printf("p1: (%d, %d)\n", p1.x, p1.y);
	printf("p2: (%d, %d)\n", p2.x, p2.y);

	return 0;
}