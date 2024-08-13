#include<bits/stdc++.h>
using namespace std;
void insert(int arr[],int *n, int index,int value){
    for(int i=(*n)-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=value;
    (*n)++;
}
int main()
{
    int n = 5;
    int arr[n]={1,2,3,4,5};     // 1,2,3,4,5
    int index = 2;
    int value = 6;
    insert(arr,&n,index,value);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}