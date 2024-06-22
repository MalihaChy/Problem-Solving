#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==3)cout<<1<<" "<<1<<" "<<1<<endl;
    else if((n-3)%3!=0)cout<<1<<" "<<2<<" "<<n-3<<endl;
    else cout<<2<<" "<<2<<" "<<n-4<<endl;
}
