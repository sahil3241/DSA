#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *n = &a;

    cout << &a << endl;
    cout << n << endl;
    cout << *n << endl;

    *n = 20;
    cout << a << endl;

    n++;
    cout << n << endl;

    cout << endl;

    int **m = &n;
    cout << *m << endl;
    cout << **m << endl;

    int arr[] = {10, 20, 30};

    cout << *arr << endl;

    int *ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }

    return 0;
}