#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    int o=0,z=0;
    int ans_1,ans_0;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        x=x&1;
        if(x==1){
            o++;
            ans_1=i;
        }
        else if(x==0){
            z++;
            ans_0=i;
        }
    }
    if(o>z)cout<<ans_0<<endl;
    else if(o<z)cout<<ans_1<<endl;
}
