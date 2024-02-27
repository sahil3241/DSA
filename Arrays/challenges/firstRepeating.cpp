// Given an array arr[] of size N. The task is to find the first repeating elements in the array of integers 
// i.e. an element which occurs more than once and whose index of first occurence is smallest.
// Base idea
// To check if an element is repeating we maintain an array idx[], which stores the first 
// occurence (index) of a particular element a[i].
// Initialize the idx[] with -1, and minIdx with INT_MAX

#include<iostream>
#include<climits>
#include<math.h>

using namespace std;

int main(){
    int n;
    cout << "Enter the size of Array";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cout << "Enter the element " << i+1 << " ";
        cin >> a[i];
    }
    const int N = 1e6+2;
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i] = -1;
    }
    int minIdx = INT_MAX;
    for(int i=0; i<n; i++){
        if(idx[a[i]]!=-1){
            minIdx = min(minIdx, idx[a[i]]);
        }
        else{
            idx[a[i]] = i;
        }
    }
    if(minIdx == INT_MAX){
        cout << "-1" << endl;
    }
    else{
        cout << minIdx + 1 << endl;
    }
    
    return 0;
}