#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define PI 3.14

class CPoint {
    private:
        int x, y;

    public:
        CPoint(int a = 0, int b = 0) : x(a), y(b) {}

        void Move(int c, int d) {
            x += c;
            y += d;
        }

        void Draw() {
            cout << "���� ��ġ: (" << x << ", " << y << ")" << endl;
        }
};

class CCircle : public CPoint {
    private:
        double Radius;

    public:
        CCircle(int a = 0, int b = 0, double r = 1) : CPoint(a, b), Radius(r) {}

        void Draw() {
            cout << "[�� ����]" << endl;
            CPoint::Draw();
            cout << "������: " << Radius << endl;
        }

        double GetArea() {
            return (PI * Radius * Radius);
        }
};

int main_8_3(void) {
    srand(static_cast<unsigned int>(time(0))); // ���� �õ� ����

    // ���� �� ����
    int px = rand() % 10;
    int py = rand() % 10;
    int mx = rand() % 5 + 1;
    int my = rand() % 5 + 1;
    int cx = rand() % 10;
    int cy = rand() % 10;
    double r = rand() % 5 + 1;

    cout << "===== ��(Point) �׽�Ʈ =====" << endl;
    CPoint p(px, py);
    cout << "�ʱ� �� ��ǥ: ";
    p.Draw();

    cout << "�� �̵� (dx=" << mx << ", dy=" << my << ") �� ��ǥ: ";
    p.Move(mx, my);
    p.Draw();

    cout << "\n===== ��(Circle) �׽�Ʈ =====" << endl;
    CCircle c(cx, cy, r);
    cout << "�ʱ� �� ����:" << endl;
    c.Draw();

    cout << "�� �̵� (dx=" << mx << ", dy=" << my << ") �� ����:" << endl;
    c.Move(mx, my);
    c.Draw();

    cout << "���� ����: " << c.GetArea() << endl;

    return 0;
}
