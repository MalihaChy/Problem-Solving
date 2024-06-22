#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)cin>>ar[i];
        int bribe=0, cnt=0, flag = 1;
        for(int i=0;i<n;i++)
        {
            cnt = 0;
            for(int j=i+1;j<n;j++)
            {
                if(ar[i]>ar[j])cnt++;
            }
            if(cnt>2)
            {
                cout<<"Too chaotic\n";
                flag = 0;
                break;
            }
            else bribe += cnt;
        }
        if(flag)cout<<bribe<<endl;
    }
}
