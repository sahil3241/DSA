// Even sum - Odd sum (indices)
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int anssum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            anssum += arr[i];
        }
        else
        {
            anssum -= arr[i];
        }
    }
    cout << anssum << endl;
}