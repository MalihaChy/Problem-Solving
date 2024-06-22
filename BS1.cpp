#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int g;
    cin>>g;
    while(g--)
    {
        int n, m, x;
        cin>>n>>m>>x;
        int ar1[n], ar2[m];
        for(int i=0; i<n; i++)cin>>ar1[i];
        for(int i=0; i<m; i++)cin>>ar2[i];
        ll j=0, k=0, cnt=0, sum=0;
        while(sum<=x && j<=n && k<=m)
        {
            if(ar1[j]<ar2[k])
            {
                sum+=ar1[j];
                j++;
                cnt++;
            }
            else if(ar1[j]>ar2[k])
            {
                sum+=ar2[k];
                k++;
                cnt++;
                //cout<<k<<" X\n";
            }
            else if(ar1[j]==ar2[k])
            {
                int a=j, b=k;
                while(ar1[a]==ar2[b] && a<n && b<m)
                {
                    a++;
                    b++;
                }
                if(ar1[a]>ar2[b])
                {
                    sum+=ar2[k];
                    k++;
                    cnt++;
                }
                else if(ar1[a]<=ar2[b])
                {
                    sum+=ar1[j];
                    j++;
                    cnt++;
                }
            }
            if(sum>x)cnt--;
        }
        cout<<cnt<<endl;
    }
}
