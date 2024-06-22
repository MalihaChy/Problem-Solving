#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector< pair<int,int> >v;
    int cnt=0,r;
    for(int i=1;i<=1000;i++)
    {
        cnt=0;
        r=sqrt(i);
        for(int j=1;j<=r;j++)
        {
            if(i%j==0){
                if(i/j==j)cnt++;
                else cnt+=2;
            }
        }
        //v.push_back(make_pair(i,cnt));
        v.push_back(make_pair(cnt,-i));
    }

    /*for(int i=0;i<1000;i++)
    {
        for(int j=i+1;j<1000;j++)
        {
            if(v[i].second>v[j].second)swap(v[i],v[j]);
            else if(v[i].second==v[j].second&&v[i].first<v[j].first)swap(v[i],v[j]);
        }
    }
    for(int i=0;i<1000;i++)cout<<v[i].first<<" "<<v[i].second<<endl;*/

    sort(v.begin(),v.end());
    //for(int i=0;i<1000;i++)cout<<v[i].first<<" "<<v[i].second<<endl;
    int t,x;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        cin>>x;
        //printf("Case %d: %d\n",k,v[x-1].first);
        printf("Case %d: %d\n",k,-v[x-1].second);
    }
}
