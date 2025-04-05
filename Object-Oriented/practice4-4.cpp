#include <iostream>
#include <string.h>
using namespace std;

class CStudent 
{
    private:
        char name[20];
        int number;
        int age;

    public:
        CStudent(const char* str, int num, int n) {
            strcpy_s(name, str);
            number = num;
            age = n;
        }

        CStudent() {
            strcpy_s(name, "noname");
            number = 0;
            age = 0;
        }

        void SetName(const char* str) {
            strcpy_s(name, str);
        }

        void SetNumber(int num) {
            number = num;
        }

        void SetAge(int n) {
            age = n;
        }

        void Print() {
            cout << "이름: " << name << endl
                << "학번: " << number << endl
                << "나이: " << age << endl;
        }
};

int main_4_4(void) 
{
	CStudent St1("홍길동", 11111111, 25);
	CStudent St2;

	St1.Print();
	St2.Print();

	St2.SetName("이순신");
	St2.SetNumber(22222222);
	St2.SetAge(30);

	St2.Print();

	return 0;
}
