#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n+1];
        ar[0] = -1;
        int cnt=0, flag=1;
        for(int i=1; i<=n; i++)cin>>ar[i];
        for(int i=n; i>=1; i--)
        {
            if(ar[i-1]==i)
            {
                cnt++;
                swap(ar[i],ar[i-1]);
            }
            else if(ar[i-2]==i)
            {
                cnt+=2;
                ar[i-2]=ar[i-1];
                ar[i-1]=ar[i];
                ar[i]=i;
            }
            else if(ar[i]!=i)
            {
                cout<<"Too chaotic\n";
                flag = 0;
                break;
            }
        }
        if(flag)cout<<cnt<<endl;
        for(int i=1;i<=n;i++)cout<<ar[i]<<" ";
    }
}
