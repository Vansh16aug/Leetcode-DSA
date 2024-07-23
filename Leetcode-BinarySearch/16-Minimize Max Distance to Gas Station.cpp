#include <bits/stdc++.h>
int countOfGasStation(vector<int>&arr , long double dist){
  int cnt=0;
  for(int i=1;i<arr.size();i++){
    int numberInBtw = (arr[i]-arr[i-1])/dist;
    if((arr[i]-arr[i-1]) == numberInBtw*dist){
      numberInBtw--;
    }
    cnt+=numberInBtw;
  }
  return cnt;
}
double minimiseMaxDistance(vector<int> &arr, int k) {
  int n = arr.size();
  long double low=0;
  long double high=0;
  for(int i=0;i<n;i++){
    high = max(high,(long double)arr[i+1]-arr[i]);
  }
  
  while(high-low>1e-6){
    long double mid = (low+high)/2.0;
    if(countOfGasStation(arr,mid)>k){
      low=mid;
    }
    else{
      high=mid;
    }
  }
  
  return high;
}
