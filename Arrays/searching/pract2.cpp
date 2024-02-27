#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
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

    cout << "Element at index " << binarySearch(arr, n, key);
}