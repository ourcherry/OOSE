#include <iostream>
using namespace std;

class CShape 
{
    private:
        int type;
        int len;
        const double PI;
        static int rectCount;
        static int circCount;

    public:
        CShape() : PI(3.14) 
        {
            rectCount++;
        }

        // const 변수는 생성자 안에서 초기화하면 오류
        CShape(int t, int num) : type(t), len(num), PI(3.14) 
        {
            if (t == 1)
            {
                rectCount++;
            }
            else if (t == 2)
            {
                circCount++;
            }
        }

        ~CShape() 
        {
            rectCount--;
        }

        static int GetRectCount() 
        {
            return rectCount;
        }

        static int GetCircleCount() 
        {
            return circCount;
        }

        double GetArea() 
        {
            if (type == 1) 
            {
                return (len * len);
            }
            else if (type == 2) 
            {
                return (PI * len * len);
            }
            else 
            {
                cout << "잘못된 타입을 입력하였습니다." << endl;
                return 0;
            }
        }
};

// CShape 클래스의 정적(static) 멤버 변수들을 클래스 외부에서 정의하고 초기화
// 클래스 내부에서는 static 멤버 변수를 선언만 할 수 있음, 정의(definition)와 초기화는 클래스 밖에서 한 번만 해야 함
int CShape::rectCount = 0;
int CShape::circCount = 0;

int main_5_8(void) 
{
    CShape S1(1, 5);
    CShape S2(2, 5);
    CShape *pRect = new CShape[3];

    cout << "사각형 개수 : " << CShape::GetRectCount() << endl;
    cout << "원 개수     : " << CShape::GetCircleCount() << endl;
    cout << "S1의 면적   : " << S1.GetArea() << endl;

    delete[] pRect;

    cout << "사각형 개수 : " << CShape::GetRectCount() << endl;
    cout << "원 개수     : " << CShape::GetCircleCount() << endl;
    cout << "S2의 면적   : " << S2.GetArea() << endl;

    return 0;
}