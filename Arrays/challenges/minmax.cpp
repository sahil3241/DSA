#include<iostream>
#include<climits>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of Array: " << endl;
    cin >> n;
    int array[n];
    int minNO = INT_MAX;
    int maxNO = INT_MIN;

    for(int i=0; i<n; i++){
        cout << "Enter the element " << i+1 << endl;
        cin >>  array[i];
    }
    for(int i=0; i<n; i++){
        minNO = min(minNO, array[i]);
        maxNO = max(maxNO, array[i]);
    }
    cout << "The maximum and minimum elements of the array are " << maxNO << " and " << minNO << " respectively";
    return 0;

}