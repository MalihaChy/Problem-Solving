#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n,x,y,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y>>d;
        if(abs(x-y)%d==0)cout<<abs(x-y)/d<<endl;
        else if(x==y)cout<<0<<endl;
        else{
            if((n-x)%d==0){
                if((y-1)%d==0)
                {
                    cout<<((y-1)/d)+ceil((x-1)/(d*1.0))<<endl;
                }
                else cout<<-1<<endl;
            }
            else{
                if((n-y)%d==0)
                {
                    cout<<((n-y)/d)+ceil((n-x)/(d*1.0))<<endl;
                }
                else cout<<-1<<endl;
            }
        }
    }
    //cout<<endl<<ceil(3/2.0)<<endl;
}
