#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int p,l,x,y;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        cin>>p>>l;
        p=p-l;
        set<int>s;
        y=sqrt(p);
        for(int i=1;i<=y;i++)
        {
            if(p%i==0){
                x=p/i;
                if(x>l)s.insert(x);
                if(i>l)s.insert(i);
            }
        }
        printf("Case %d:",j);
        if(s.empty())cout<<" impossible";
        else{
            set<int>::iterator it;
            for(it=s.begin();it!=s.end();it++)
                cout<<" "<<*it;
        }
        cout<<endl;
    }
}
