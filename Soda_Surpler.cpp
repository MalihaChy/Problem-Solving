#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int e,f,c;
        cin>>e>>f>>c;
        int soda=e+f,ans=0,bottle;
        while(bottle/c){
            bottle=(soda/c)+(soda%c);
            ans+=soda;
        }
        cout<<ans<<endl;
    }
}
