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
            cout << "현재 위치: (" << x << ", " << y << ")" << endl;
        }
};

class CCircle : public CPoint {
    private:
        double Radius;

    public:
        CCircle(int a = 0, int b = 0, double r = 1) : CPoint(a, b), Radius(r) {}

        void Draw() {
            cout << "[원 정보]" << endl;
            CPoint::Draw();
            cout << "반지름: " << Radius << endl;
        }

        double GetArea() {
            return (PI * Radius * Radius);
        }
};

int main_8_3(void) {
    srand(static_cast<unsigned int>(time(0))); // 랜덤 시드 설정

    // 랜덤 값 생성
    int px = rand() % 10;
    int py = rand() % 10;
    int mx = rand() % 5 + 1;
    int my = rand() % 5 + 1;
    int cx = rand() % 10;
    int cy = rand() % 10;
    double r = rand() % 5 + 1;

    cout << "===== 점(Point) 테스트 =====" << endl;
    CPoint p(px, py);
    cout << "초기 점 좌표: ";
    p.Draw();

    cout << "점 이동 (dx=" << mx << ", dy=" << my << ") 후 좌표: ";
    p.Move(mx, my);
    p.Draw();

    cout << "\n===== 원(Circle) 테스트 =====" << endl;
    CCircle c(cx, cy, r);
    cout << "초기 원 상태:" << endl;
    c.Draw();

    cout << "원 이동 (dx=" << mx << ", dy=" << my << ") 후 상태:" << endl;
    c.Move(mx, my);
    c.Draw();

    cout << "원의 넓이: " << c.GetArea() << endl;

    return 0;
}
