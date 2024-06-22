#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int a=9*x*x+y*y;
        int b=2*x*x+25*y*y;
        int c=-100*x+y*y*y;
        int ans=max(a,b);
        ans=max(ans,c);
        if(ans==a)
            cout<<"Rafael ganhou\n";
        else{
            if(ans==b)
                cout<<"Beto ganhou\n";
            else
                cout<<"Carlos ganhou\n";
        }
    }
}
