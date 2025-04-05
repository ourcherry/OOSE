#include <iostream>
#include <cstring>
using namespace std;

class CArray 
{
    private:
        int *arr;
        int len;

    public:
        // 생성자의 매개변수 num의 값을 멤버 변수 len에 대입한다는 뜻
        CArray(int num) : len(num) 
        {
            arr = new int[len];
            for (int i = 0; i < len; i++)
            {
                arr[i] = i;
            }
        }

        CArray(const CArray &copy) : len(copy.len) 
        {
            arr = new int[len];
            for (int i = 0; i < len; i++)
            {
                arr[i] = copy.arr[i];
            }
        }

        CArray& Set(int num, int a) 
        {
            arr[num] = a;
            return *this;
        }

        void Print() 
        {
            for (int i = 0; i < len; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main_6_5(void) 
{
    CArray Ary1(5);
    CArray Ary2(7);
    CArray Ary3(Ary1);

    Ary2.Set(0, 11).Set(1, 12).Set(2, 13);

    Ary1.Print();
    Ary2.Print();
    Ary3.Print();

    return 0;
}
