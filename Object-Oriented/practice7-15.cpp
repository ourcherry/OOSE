#include <iostream>
#include <cstring>
using namespace std;

class CString
{
private:
    char* str;

public:
    CString(const char* string = "Unknown")
    {
        int len = strlen(string) + 1;
        str = new char[len];
        strcpy_s(str, len, string);
    }

    CString(const CString& copy)
    {
        int len = strlen(copy.str) + 1;
        str = new char[len];
        strcpy_s(str, len, copy.str);
    }

    ~CString()
    {
        delete[] str;
    }

    CString& operator=(const CString& copy)
    {
        if (this == &copy)
            return *this;

        delete[] str;
        int len = strlen(copy.str) + 1;
        str = new char[len];
        strcpy_s(str, len, copy.str);
        return *this;
    }

    CString operator+(const CString& copy)
    {
        int len = strlen(str) + strlen(copy.str) + 1;
        char* temp = new char[len];
        strcpy_s(temp, len, str);
        strcat_s(temp, len, copy.str);
        CString result(temp);
        delete[] temp;
        return result;
    }

    CString& operator+=(const CString& copy)
    {
        int len = strlen(str) + strlen(copy.str) + 1;
        char* temp = new char[len];
        strcpy_s(temp, len, str);
        strcat_s(temp, len, copy.str);
        delete[] str;
        str = temp;
        return *this;
    }

    bool operator==(const CString& copy)
    {
        return strcmp(str, copy.str) == 0;
    }

    friend ostream& operator<<(ostream& out, const CString& string);
    friend istream& operator>>(istream& in, CString& string);
};

ostream& operator<<(ostream& out, const CString& string)
{
    out << string.str;
    return out;
}

istream& operator>>(istream& in, CString& string)
{
    char buffer[1000];
    in >> buffer;
    string = CString(buffer);
    return in;
}

int main_7_15(void)
{
    CString str1 = "Good ";
    CString str2 = "morning";
    CString str3;
    str3 = str1 + str2;

    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;

    str1 += str2;
    if (str1 == str3)
    {
        cout << "equal!" << endl;
    }

    CString str4;
    cout << "문자열 입력: ";
    cin >> str4;
    cout << "입력한 문자열: " << str4 << endl;

    return 0;
}
