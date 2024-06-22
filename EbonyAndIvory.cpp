#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=c%(a+b);
    if(a==c||b==c||x==0||x%a==0||x%b==0||c%a==0||c%b==0)
    {
        cout<<"Yes\n";
        return 0;
    }
    //else cout<<"No\n";
    for(int i=1;; i++)
    {
        if(a*i>c)break;
        if((c-a*i)%b==0)
        {
            //cout<<i<<endl;
            cout<<"Yes\n";
            return 0;
        }
    }
    cout<<"No\n";
}
