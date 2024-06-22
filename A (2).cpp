#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int ans=0;
    for(i=1,j=-1; i<=n; i++)
    {
        j+=2;
        ans+=j;
    }
    cout<<2*ans-j<<endl;
}
