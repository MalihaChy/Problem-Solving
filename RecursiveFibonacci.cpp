#include<bits/stdc++.h>
using namespace std;

int Fibonacci(int n)
{
    if(n==1)return 1;
    else if(n==0)return 0;
    else return Fibonacci(n-1)+Fibonacci(n-2);
}

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        cout<<Fibonacci(n)<<endl;
    }
}
