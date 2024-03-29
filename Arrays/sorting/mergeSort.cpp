#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1; // n1= 2-0+1 = 3 n2=4-2=2 //a{5,3} b{4}
    int n2 = r - mid;

    int a[n1];
    int b[n2]; // temp array

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) // 5 3
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j]; // 4
            k++;
            j++;
        }
    }

    while (i < n1) // 4 5 3
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r); // 5 3 4  // 5 3 // 4 // 5 // 3
                                    // 2 1 // 2 // 1
        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[] = {5, 3, 4, 2, 1};
    mergeSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}