#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    vector< pair<int,int> > s,d;

    if(r1==r2&&c1==c2)
        cout<<0<<endl;
    else
    {
        bool flag=false;
        for(int i=r1,j=c1; i<=8&&j>=1; i++,j--)
            s.push_back(make_pair(i,j));
        for(int i=r1+1,k=c1+1; i<=8&&k<=8; i++,k++)
            s.push_back(make_pair(i,k));
        for(int i=r1-1,k=c1-1; i>=1&&k>=1; i--,k--)
            s.push_back(make_pair(i,k));
        for(int i=r1-1,j=c1+1; i>=1&&j<=8; i--,j++)
            s.push_back(make_pair(i,j));

        int sz=s.size();
        for(int i=0; i<sz; i++)
        {
            if(r2==s[i].first&&c2==s[i].second)
            {
                cout<<1<<endl;
                flag=true;
                break;
            }
        }
        if(!flag)
        {
            for(int i=r2,j=c2; i<=8&&j>=1; i++,j--)
                d.push_back(make_pair(i,j));
            for(int i=r2+1,k=c2+1; i<=8&&k<=8; i++,k++)
                d.push_back(make_pair(i,k));
            for(int i=r2-1,k=c2-1; i>=1&&k>=1; i--,k--)
                d.push_back(make_pair(i,k));
            for(int i=r2-1,j=c2+1; i>=1&&j<=8; i--,j++)
                d.push_back(make_pair(i,j));

            int sz_d=d.size();
            for(int i=0; i<sz; i++)
            {
                for(int j=0; j<sz_d; j++)
                {
                    if(s[i].first==d[j].first&&s[i].second==d[j].second)
                    {
                        cout<<2<<endl;
                        flag=true;
                        break;
                    }
                }
                if(flag)
                    break;
            }

        }
        if(!flag)
            cout<<-1<<endl;
    }
}
