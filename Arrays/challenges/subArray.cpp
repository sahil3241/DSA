// Give an array a[] of size n. Output sum of each subarray of the given array.

// Approach -
// Iterate over all subarrays

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n];
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element " << i + 1;
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += a[j];
            cout << curr << endl;
        }
    }
}