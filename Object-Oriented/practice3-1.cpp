#include <iostream>
using namespace std;

#define Abs_macro(X) (X > 0 ? X : -X)

inline int Abs_inline(int X)
{
	return (X > 0) ? X : -X;
}

int main_3_1(void)
{
	cout << "Abs_macro(-4 + 2) = " << Abs_macro((- 4 + 2)) << endl;
	cout << "Abs_inline(-4 + 2) = " << Abs_inline(- 4 + 2) << endl;

	return 0;
}
