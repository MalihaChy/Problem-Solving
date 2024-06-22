#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x==0)cout<<"NULL\n";
        else if(x>0){
            if(x&1)cout<<"ODD POSITIVE\n";
            else cout<<"EVEN POSITIVE\n";
        }
        else{
            if(x&1)cout<<"ODD NEGATIVE\n";
            else cout<<"EVEN NEGATIVE\n";
        }
    }
}
