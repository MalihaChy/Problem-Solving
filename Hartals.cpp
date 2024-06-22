#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p;
        cin>>p;
        int ar[p];
        for(int i=0;i<p;i++)
            cin>>ar[i];
        set<int>s;
        for(int i=0;i<p;i++)
        {
            for(int j=1;;j++)
            {
                int x=ar[i]*j;
                if(x<=n){
                    if(x%7!=6&&x%7!=0)
                        s.insert(x);
                }
                else break;
            }
        }
        cout<<s.size()<<endl;
    }
}
