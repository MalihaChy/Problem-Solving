#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,x,y,d,ans=0,current,destination;
    while(t--)
    {
        bool backward=false,proceed=false;
        cin>>n>>x>>y>>d;
        if(abs(x-y)%d==0)cout<<abs(x-y)/d<<endl;
        else if(x==y)cout<<0<<endl;
        else{
            current=x;
            while(1)
            {

                if(current==n){
                    backward=true;
                    break;
                }
                if(current>n)
                {
                    cout<<((n-y)/d)+1+((n-x)/d)<<endl;
                    break;
                }
                current+=d;
            }
            current=x;
            if(backward){
                while(1)
                {
                    if(current==1){
                        proceed=true;
                        break;
                    }
                    if(current<=0)
                    {
                        cout<<1+((y-1)/d)+((x-1)/d)<<endl;
                        break;
                    }
                    current-=d;

                }
            }
            if(backward&&proceed)
                cout<<-1<<endl;
        }
    }
}
