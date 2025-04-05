#include <iostream>
using namespace std;

int main_3_2(void) 
{
    int var1 = 2, var2 = 3;

    // 선언과 동시에 초기화
    int &ref1 = var1;
    int &ref2 = var2;

    int var3 = ref1;
    ref1 = ref2;
    ref2 = var3;

    cout << "var1 : " << var1 << endl;
    cout << "var2 : " << var2 << endl;

    return 0;
}
