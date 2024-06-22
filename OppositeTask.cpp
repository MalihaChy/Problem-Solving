#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        if(n<20)
        cout<<n%10<<" "<<n-n%10<<endl;
        else
            cout<<10<<" "<<10<<endl;
    }
}
