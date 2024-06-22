#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,low,high,a,sum,avg,da,dl,dh,db;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>low>>high;
        vector<double>v,ans;
        sum=0.0,da=0,dl=0,dh=0,db=0;
        for(int j=0;j<n;j++)
        {
            cin>>a;
            v.push_back(a);
            sum+=a;
        }
        avg=sum/n;
        for(int j=0;j<n;j++)
        {
            da=abs(v[j]-avg);
            dl=abs(v[j]-low);
            dh=abs(v[j]-high);
            db=min(dl,dh);
            if(db<da)
                ans.push_back(v[j]);
        }
        printf("Case %d:\n",i);
        int sz=ans.size();
        if(sz==0)
            printf("No outliers\n");
        else{
            for(int k=0;k<sz;k++)
                printf("%.2lf\n",ans[k]);
        }
    }
}
