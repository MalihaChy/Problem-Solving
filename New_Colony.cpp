#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n, k;
    while(t--)
    {
        cin>>n>>k;
        int ar[n+1];
        for(int i=0;i<n;i++)cin>>ar[i];
        ar[n]=0;
        int x, flag;
        while(k--)
        {
            flag = 0;
            for(int i=0; i<n; i++)
            {
                if(ar[i]<ar[i+1]){
                    ar[i]++;
                    flag = 1;
                    x = i+1;
                    break;
                }
            }
            if(flag == 0)
            {
                cout<<-1<<endl;
                break;
            }
        }
        if(flag == 1)cout<<x<<endl;
    }
}
