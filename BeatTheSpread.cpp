#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long s,d;
        cin>>s>>d;
        if(s<d)
            cout<<"impossible\n";
        else{
            long long x=abs((s+d)/2);
            long long y=s-x;
            long long z=x-d;
            cout<<x<<endl;
            cout<<y<<endl;
            cout<<z<<endl;
            cout<<max(x,y)<<" "<<min(x,y)<<endl;
        }
    }
}
