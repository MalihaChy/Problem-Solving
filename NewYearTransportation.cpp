#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    int loop_control=n-1;
    int ar[n+1];
    for(int i=1;i<=loop_control;i++)
    {
        cin>>ar[i];
    }
    int pos;
    for(int i=1;i<n;i=pos)
    {
        pos=ar[i]+i;
        if(pos==d){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
}
