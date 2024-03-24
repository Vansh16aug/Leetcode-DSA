#include<bits/stdc++.h>
using namespace std;
bool isPal(int n){
    int res = 0;
    int temp=n;
    while(temp!=0){
        int ld=temp%10;
        res=res*10+ld;
        temp=temp/10;
    }
    return (res==n);
}
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    bool ans =isPal(n);
    if(ans==true){
        cout<<"This number is palindrome";
    }
    else{
        cout<<"No";
    }
    return 0;
}