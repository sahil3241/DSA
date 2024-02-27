#include<iostream>
using namespace std;

int binarySearch(int array[], int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid = (s+e)/2;
        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]>key){
            e = mid-1;
        }
        else if(array[mid]<key){
            s = mid+1;
        }
    }
    return false;
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int array[n];
    for(int i=0; i<n; i++){
        cout << "Enter the element " << i+1;
        cin >> array[i];
    }
    int key;
    cout << "Enter the key to seach" << endl;
    cin >> key;
    cout << binarySearch(array, n, key) << endl;

}