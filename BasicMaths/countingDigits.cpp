#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int res=0;
    while(n>0){
        n=n/10;
        res++;
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Number of digits in the number :"<< countDigits(n);
    return 0;
}