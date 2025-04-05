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

        // const ������ ������ �ȿ��� �ʱ�ȭ�ϸ� ����
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
                cout << "�߸��� Ÿ���� �Է��Ͽ����ϴ�." << endl;
                return 0;
            }
        }
};

// CShape Ŭ������ ����(static) ��� �������� Ŭ���� �ܺο��� �����ϰ� �ʱ�ȭ
// Ŭ���� ���ο����� static ��� ������ ���� �� �� ����, ����(definition)�� �ʱ�ȭ�� Ŭ���� �ۿ��� �� ���� �ؾ� ��
int CShape::rectCount = 0;
int CShape::circCount = 0;

int main_5_8(void) 
{
    CShape S1(1, 5);
    CShape S2(2, 5);
    CShape *pRect = new CShape[3];

    cout << "�簢�� ���� : " << CShape::GetRectCount() << endl;
    cout << "�� ����     : " << CShape::GetCircleCount() << endl;
    cout << "S1�� ����   : " << S1.GetArea() << endl;

    delete[] pRect;

    cout << "�簢�� ���� : " << CShape::GetRectCount() << endl;
    cout << "�� ����     : " << CShape::GetCircleCount() << endl;
    cout << "S2�� ����   : " << S2.GetArea() << endl;

    return 0;
}