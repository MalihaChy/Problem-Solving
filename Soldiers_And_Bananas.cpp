#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int ans=(k*((w*(w+1))/2));
    if(ans>n)
        cout<<(ans-n)<<endl;
    else
        cout<<0<<endl;
}
