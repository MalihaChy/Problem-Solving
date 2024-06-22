#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,s;
    cin>>n>>k>>s;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar,ar+n);
    int sum=0;
    k=k*s;
    int cnt=0;
    for(int i=n-1;i>=0;i--)
    {
        sum+=ar[i];
        cnt++;
        if(sum>=k)
        {
            cout<<cnt<<endl;
            return 0;
        }
    }
}
