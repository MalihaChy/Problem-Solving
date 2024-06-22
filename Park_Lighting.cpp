#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n&1)
        {
            if(m&1)cout<<((n-1)*m)/2 + (m/2) + 1<<endl;
            else cout<<((n-1)*m)/2 + (m/2)<<endl;
        }
        else{
            cout<<(n*m)/2<<endl;
        }
    }
}
