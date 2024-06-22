#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    int x;
    int ar[6];
    vector<int>a,cnt;
    for(int i=0; i<6; i++)
    {
        cin>>x;
        s.insert(x);
        ar[i]=x;
    }
    x=s.size();
    if(x<2)cout<<"Elephant\n";
    else if(x>3)cout<<"Alien\n";
    else if(x==3||x==2)
    {
        set<int>::iterator it;
        //int k=0;
        for(it=s.begin();it!=s.end();it++)
        {
            a.push_back(*it);
            cnt.push_back(0);
        }
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<6;j++)
            {
                if(ar[j]==a[i])
                    cnt[i]++;
            }
        }
        if(x==2)
        {
            if(cnt[0]==4||cnt[1]==4)cout<<"Elephant\n";
            else if(cnt[0]>=4||cnt[1]>=4)cout<<"Bear\n";
        }
        else if(x==3){
        if(cnt[0]==4||cnt[1]==4||cnt[2]==4)cout<<"Bear\n";
        else cout<<"Alien\n";
        }
    }
}
