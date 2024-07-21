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
int countPartitions(vector<int> arr,int n, int maxSum){
    int partition=1;
    int subArraySum=0;
    for(int i=0;i<n;i++){
        if(subArraySum+arr[i]<=maxSum){
            subArraySum+=arr[i];
        }
        else{
            partition++;
            subArraySum = arr[i];
        }
    }
    return partition;
}
int largestSubarraySumMinimized(vector<int> arr, int totalNoOfSubArrays) {
    int n = arr.size();
    int low = maxEle(arr,n);
    int high = sumArr(arr,n);

    while(low<=high){
        int mid = (low+high)/2;
        if(countPartitions(arr,n,mid)>totalNoOfSubArrays){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}