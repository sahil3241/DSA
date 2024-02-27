#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];
    int curr = 0;

    // Input elements of the array
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> a[i];
    }

    // Print subarrays
    cout << "Subarrays:" << endl;
    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += a[j];
            cout << "[";

            // Print elements of the subarray
            for (int k = i; k <= j; k++)
            {
                cout << a[k];
                if (k < j)
                    cout << ", ";
            }

            cout << "] ";
        }
    }

    return 0;
}
