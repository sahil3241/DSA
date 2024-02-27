// Isyana is given the number of visitors at her local theme park on N-consecutive days. The number of visitors on the i-th day is Vi. 
// A day is record breaking if they satisfy the following conditions:
// The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
// Either it is the last day or the number of visitors on the day is strictly larger than the number of visitors on the following day
// Note that the very first day could be a record breaking day
// Please help Isyana find the number of record breaking days.

// Approach:
// Optimised Approach
// We need to check if a[i] > {a[i-1], a[i-2],...,a[0]}
// a[i] > max(a[i-1], a[i-2],..., a[0])
// For this, we will keep a variable mx, which will store the max value till a[i]. Then we just need to check,
// a[i] > mx
// a[i] > a[i+1] {if [i+1]<n}
// and update mx, mx=max(mx, a[i])


#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n+1];
    a[n] = -1;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    if(n==1){
        cout << "1" << endl;
        return 0;
    }
    int ans = 0;
    int mx = -1;
    for(int i=0; i<n; i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx = max(mx, a[i]);
    }
    cout << ans << endl;
    return 0;
}