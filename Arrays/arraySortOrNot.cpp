#include<bits/stdc++.h>
using namespace std;
void check(int arr[], int n){
    bool isSorted=false;
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[i-1]){
            isSorted=true;
        }
        else{
            isSorted=false;
            break;
        }
    }
    if(isSorted==1){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
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
    check(arr,n);
    return 0;
}