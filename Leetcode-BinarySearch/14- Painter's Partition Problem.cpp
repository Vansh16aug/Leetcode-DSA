#include<bits/stdc++.h>
int sumArr(vector<int>& arr, int n){    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int maxEle(vector<int>& arr, int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int noOfPainters(vector<int> &arr, int n,int time){
    int painters=1;
    int boardsAtPainters=0;
    for(int i=0;i<n;i++){
        if(boardsAtPainters+arr[i]<=time){
            boardsAtPainters+=arr[i];
        }
        else{
            painters++;
            boardsAtPainters=arr[i];
        }
    }
    return painters;
}
int findLargestMinDistance(vector<int> &arr, int totalNoOfPainters)
{
    int n = arr.size();
    int low = maxEle(arr, n);
    int high = sumArr(arr,n);

    while(low<=high){
        int mid = (low+high)/2;
        if(noOfPainters(arr,n,mid)>totalNoOfPainters){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}