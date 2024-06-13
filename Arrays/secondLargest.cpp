#include<bits/stdc++.h>
using namespace std;
int sLargest(int arr[], int n){
    int largest=arr[0];
    int slargest=INT_MIN;

    for(int i=1;i<n;i++){
        if(arr[i]>largest ){
            slargest=largest;
            largest=arr[i];
        }
        
        else if(arr[i]!=largest && arr[i]>slargest ){
            slargest=arr[i];
        }
        
    }
    return slargest;
}
int sSmallest(int arr[], int n){
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<ssmallest && arr[i]!=smallest){
            ssmallest=arr[i];
        }
    }
    return ssmallest;
}
int main()
{
    int n;
    cout<<"Enter size :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = sLargest(arr,n);
    int ans2 = sSmallest(arr,n);
    cout<<ans<<endl;
    cout<<ans2;
    return 0;
}