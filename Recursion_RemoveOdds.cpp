#include<bits/stdc++.h>
using namespace std;

int RemoveOdds(int *ar,int i,int n)
{
    if(i==n)return *ar;
    else if(ar[i]&1)ar[i]=-7;
    RemoveOdds(ar,++i,n);
}

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        RemoveOdds(ar,0,n-1);
        for(int i=0;i<n;i++)
        {
            if(ar[i]!=-7)
                cout<<ar[i]<<" ";
        }
    }
}
