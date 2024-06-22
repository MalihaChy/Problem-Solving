#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    bool flag=false;
    for(int i=n;i>1;i--)
    {
        for(int j=1;j)
        if(ar[1]<ar[i])
        {
            cout<<i-1<<endl;
            flag=true;
            break;
        }
    }
    if(!flag)
        cout<<-1<<endl;
}
