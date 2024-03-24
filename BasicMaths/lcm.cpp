#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return (b,a%b);
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}
int main()
{
    int a,b;
    cout<<"Enter the numbers :";
    cin>>a>>b;
    int ans =lcm(a,b);
    cout<<"Lcm of the numbers is :"<< ans;
    return 0;
}