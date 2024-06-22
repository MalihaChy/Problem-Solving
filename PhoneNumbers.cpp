#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int eight=0,other=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='8')eight++;
        else other++;
    }
    if(eight==0)cout<<0<<endl;
    else
    {
        int ans=other/10;
        if(ans>eight){
            cout<<eight<<endl;
            return 0;
        }
        if(eight-ans==0)cout<<ans<<endl;
        else{
            cout<<(((eight-ans)+(other%10))/11)+ans<<endl;
        }
        //cout<<(((eight-ans)+(other%10))/11)+ans<<endl;
        //else cout<<ans<<endl;
    }
}
//100
//8820286285185244938452488887088871457098945874486988698468788381417332842888928188688887641132194956
