#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n==0)return 0;
    else return n+sum(n-1);
}

int factorial(int n)
{
    if(n==0)return 1;
    else return n*factorial(n-1);
}

int ar[20];
int fibonacci(int n)
{
    if(n<=1)return ar[n]=n;
    else if(ar[n]==0)return ar[n]=fibonacci(n-1)+fibonacci(n-2);
}

int gcd(int a, int b)
{
    if(a==0)return b;
    else return gcd(b%a, a);
}

void stringReverse(string s)
{
    if(s.size()==0)return;
    else stringReverse(s.substr(1));
    cout<<s[0];
}

int main()
{
    int n = 5;
    cout<<sum(n)<<endl;
    cout<<factorial(n)<<endl;
    cout<<fibonacci(15)<<endl;
    for(int i=0;i<20;i++)cout<<ar[i]<<" ";
    cout<<gcd(366, 60)<<endl;
    cout<<gcd(60, 366)<<endl;
    stringReverse("Anita");
}
