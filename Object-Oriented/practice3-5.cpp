#include <iostream>
using namespace std;

void SumMultiply(int *arr, int len, int &sum, int &multiply) 
{
    for (int i = 0; i < len; i++) 
    {
        sum += arr[i];
        multiply *= arr[i];
    }
}

int main_3_5(void) 
{
    int arr[5];
    int sum = 0, multiply = 1;

    for (int i = 0; i < 5; i++) 
    {
        arr[i] = i + 1;
    }

    SumMultiply(arr, sizeof(arr) / sizeof(int), sum, multiply);

    cout << "arr: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "sum : " << sum << endl;
    cout << "multiply : " << multiply << endl;

    return 0;
}
