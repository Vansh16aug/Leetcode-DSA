#include<bits/stdc++.h>
using namespace std;

int trailingZeroes(int n){
    int res=0;
    for(int i=5;i<=n;i=i+5){
        res=res+n/i;
    }
    return res;
}

int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<"Number of trailing zeroes in its factorial are :"<<trailingZeroes(n);
    return 0;   
}