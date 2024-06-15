#include<bits/stdc++.h>
using namespace std;

bool sortedRotated(int arr[] , int n){
    int count=0;
    for (int i=1; i<n; i++){
        if(arr[i] < arr[i-1]) count++;
    }
    if(arr[0]<arr[n-1]) count++;
    
    return count <= 1;
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans = sortedRotated(arr,n);
    cout<<ans;
    return 0;
}