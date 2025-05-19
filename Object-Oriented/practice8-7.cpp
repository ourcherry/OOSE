#include <iostream>
using namespace std;

class CPoint
{
private:
    int x, y;
    CPoint(int a, int b) : x(a), y(b)
    {
    }

    static CPoint* uniqueInstance;

public:
    static CPoint GetPoint(int a, int b)
    {
        if (uniqueInstance != NULL)
        {
            delete uniqueInstance;
            uniqueInstance = new CPoint(a, b);
        }
        else
        {
            uniqueInstance = new CPoint(a, b);
        }
        return *uniqueInstance;
    }

    void Print()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

CPoint* CPoint::uniqueInstance = NULL;

int main_8_7(void)
{
    CPoint P1 = CPoint::GetPoint(1, 2);
    CPoint P2 = CPoint::GetPoint(3, 4);

    P1.Print();
    P2.Print();

    return 0;
}
