#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class CPoint 
{
    private:
        int x;
        int y;

    public:
        CPoint() : x(0), y(0) {}

        CPoint(int a, int b) : x(a), y(b) {}

        void SetXY(int a, int b) 
        {
            x = a;
            y = b;
        }

        void Print() 
        {
            cout << "(" << x << ", " << y << ")" << endl;
        }
};

int main_5_3(void) 
{
    // 이중 포인터
    CPoint **ptr;
    // 랜덤 시드 초기화, 현재 시간을 시드로 → 매번 다른 값
    srand((unsigned)time(NULL));

    // CPoint* 포인터 2개를 저장하는 배열 생성
    ptr = new CPoint*[2];

    for (int i = 0; i < 2; i++) 
    {
        // 	CPoint 객체 3개를 힙에 생성해서 시작 주소 반환
        ptr[i] = new CPoint[3];
    }

    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            ptr[i][j].SetXY(rand() % 100 + 1, rand() % 100 + 1);
            ptr[i][j].Print();
        }
    }

    // 메모리 해제
    for (int i = 0; i < 2; i++) 
    {
        delete[] ptr[i];
    }

    delete[] ptr;

    return 0;
}
