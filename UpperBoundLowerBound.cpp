#include<bits/stdc++.h>
using namespace std;

int LowerBound(int x,int n,int ar[50050])
{
    int high=n-1,low=0,mid,ans;
    if(ar[0]>)
}

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar,ar+n);
    int q,x;
    int a,b;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>x;
        a=LowerBound(x,n,ar);
        b=UpperBound(x,n,ar);
        cout<<a<<" "<<b<<"\n";
    }
}
