#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int ans=(((n*63)+7492)*5)-498;
        ans=ans/10;
        ans=ans%10;
        cout<<abs(ans)<<endl;
    }
}
