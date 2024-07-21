#include<bits/stdc++.h>
bool canWePlace(vector<int> &arr , int dist , int cows, int n){
    int countCows=1;
    int lastPos = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]-lastPos >= dist){
            countCows++;
            lastPos=arr[i];
        }
    }
    return countCows>=cows;
}
int aggressiveCows(vector<int> &arr, int cows)
{
    sort(arr.begin(),arr.end());
    int n = arr.size();
    int low = 0;
    int high = arr[n-1]-arr[0];

    while(low<=high){
        int mid=(low+high)/2;

        if(canWePlace(arr,mid,cows,n)){
            low=mid+1;
        }
        else high=mid-1;
    }
    return high;
}