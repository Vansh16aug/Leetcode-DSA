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
int noOfStudents(vector<int>& arr, int n,int maxPages){
    int noOfStudents=1;
    int pagesStudent=0;
    for(int i=0;i<n;i++){
        if(pagesStudent+arr[i]<=maxPages) pagesStudent+=arr[i];
        else{
            noOfStudents++;
            pagesStudent=arr[i];
        }
    }
    return noOfStudents;
}
int findPages(vector<int>& arr, int n, int totalNoOfStudents) {
    if(n<totalNoOfStudents) return -1;
    int low = maxEle(arr, n);
    int high = sumArr(arr,n);
    while(low<=high){
        int mid = (low+high)/2;
        if(noOfStudents(arr,n,mid)>totalNoOfStudents){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}