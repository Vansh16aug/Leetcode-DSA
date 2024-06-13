#include<bits/stdc++.h>
using namespace std;
int removeDups(int arr[], int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
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
    int k = removeDups(arr,n);
    cout<<k<<endl;

    for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
    return 0;
}