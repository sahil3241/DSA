#include<iostream>
using namespace std;

int linearSearch(int array[],int n,int key){
    for(int i=0; i<n; i++){
        if(array[i]==key){
            return i;
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
        cout << "Enter the element " << i+1 << ": ";
        cin >> array[i];
    }
    int key;
    cout << "Enter the key required to search: " << endl;
    cin >> key;

    cout << linearSearch(array, n, key) << endl;
}