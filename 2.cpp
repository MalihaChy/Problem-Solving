#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    string a,b,ans;
    cin>>a>>b;
    int i=0,j=0,sz=a.size(),l=b.size();
    for( ;i<sz;j++)
    {
        if(a[i]!=b[j]){
            ans+=b[j];
        }
        else{
            i++;
        }
        if(j>l)break;
    }
    if(ans.size()!=0)cout<<ans<<"\n";
    else cout<<"No spies were found!\n";
}
