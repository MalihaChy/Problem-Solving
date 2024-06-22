#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w,h,a,b,c,d;
    cin>>w>>h>>a>>b>>c>>d;
    int ans=w;
    for(int i=h;i>=0;i--)
    {
        ans+=i;
        if(b==i){
            ans-=a;
            //i--;
        }
        else if(d==i){
            ans-=c;
            //i--;
        }
        if(ans<0)ans=0;
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;
}
