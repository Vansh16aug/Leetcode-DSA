#include<bits/stdc++.h>
using namespace std;

void moveZeroes(int arr[] ,int n){
    int temp[n];
    int count=0;
    //shifting non zeroes to temp
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
             temp[count++]=arr[i];
        }
    } 
    //shift temp to arr
    for(int i=0 ;i<count;i++){
        arr[i]=temp[i];
    }
    //zeroes at last
    for(int i=count;i<n;i++){
        arr[i]=0;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    moveZeroes(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}