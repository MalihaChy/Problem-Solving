#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    char x;
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>x;
            if(x=='C' || x=='M' || x=='Y')flag=1;
        }
    }
    if(flag)cout<<"#Color\n";
    else cout<<"#Black&White\n";
}
