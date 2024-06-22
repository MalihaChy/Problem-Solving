#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int A[a],B[b];
    int k,m;
    cin>>k>>m;
    for(int i=0; i<a; i++)
        cin>>A[i];
    for(int i=0; i<b; i++)
        cin>>B[i];
    int x=A[k-1],i;
    for(i=0; i<m; i++)
    {
        if(x>=B[i])
            break;
    }
    if(i==m)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
