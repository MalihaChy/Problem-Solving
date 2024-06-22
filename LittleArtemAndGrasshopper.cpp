#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0,k=0;i<n;i++)
    {
        if(s[k]=='<')k-=ar[k];
        else if(s[k]=='>')k+=ar[k];
        if(k>=n||k<0)
        {
            cout<<"FINITE\n";
            return 0;
        }
    }
    cout<<"INFINITE\n";
}
