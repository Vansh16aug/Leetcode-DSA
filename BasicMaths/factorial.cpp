#include<bits/stdc++.h>
using namespace std;

int Fact(int n){
    if(n==0) return 1;
    return n*Fact(n-1);

}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The factorial of given number is : "<<Fact(n);
    return 0;
}