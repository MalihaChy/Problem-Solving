#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[]= {1,5,10,20,100};
    int n,cnt=0;
    cin>>n;
    for(int i=4; i>=0; i--)
    {
        cnt+=(n/ar[i]);
        n=n%ar[i];
    }
    cout<<cnt<<endl;
}
