#include <bits/stdc++.h>
using namespace std;

void rightRotate(int arr[], int k, int n) {
    k = k % n;
    reverse(arr, arr + n); 
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    rightRotate(arr,k,n);
    for (int i = 0; i < n; i++) {
        cout << arr[i]<<" ";
    }
    return 0;
}