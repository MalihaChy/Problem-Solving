#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        long long n;
        cin>>n;
        if(n==1)
            cout<<1<<endl;
        else{
            if(n&1)
                cout<<((n/2)-1)*(-1)<<endl;
            else
                cout<<(n/2)*(-1)<<endl;
        }
    }
}
