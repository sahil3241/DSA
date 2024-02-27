#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter size ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << " ";
        cin >> arr[i];
    }
    int key;
    cout << "Enter key to search ";
    cin >> key;

    cout << "Element found at index " << linearSearch(arr, n, key);
}