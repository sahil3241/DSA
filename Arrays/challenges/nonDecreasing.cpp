// Given an array a[] of size n. For every i from 0 to n-1, output max(a[0], a[1],...,a[n])

// Approach - 
// Keep a variable mx which stores the maximum till ith element, iterate over the array and update.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int mx = -999;
    int n;
    cout << "Enter the size of array ";
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cout << "Enter the element " << i+1 << " ";
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        mx = max(mx, a[i]);
        cout << mx << endl;
    }
    return 0;

}