#include <iostream>
using namespace std;


int GetArea(int col, int row)
{
	return col * row;
}

double GetArea(int radius)
{
	return radius * radius * 3.14;
}

int main_2_4(void)
{
	int sel;
	cout << "구하고자 하는 넓이를 선택해주세요. 1) 직사각형 2) 원\n";
	cin >> sel;

	switch (sel)
	{
	case 1:
		int col, row;
		cout << "가로, 세로를 순서대로 입력해주세요.\n";
		cin >> row >> col;
		cout << "---------직사각형 넓이 : " << GetArea(col, row) << endl;
		break;

	case 2:
		int radius;
		cout << "반지름을 입력해주세요.\n";
		cin >> radius;
		cout << "--------원의 넓이 : " << GetArea(radius) << endl;
		break;
	}

	return 0;
}