#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n;
    k = n/2;
    cout<<k<<endl;
    if(n&1)cout<<3;
    else cout<<2;
    for(int i=2; i<=k; i++)cout<<" "<<2;
    cout<<endl;
}
