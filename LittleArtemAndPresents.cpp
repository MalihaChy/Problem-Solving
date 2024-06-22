#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%3==0)cout<<(n/3)*2<<endl;
    else if(n%3==1||n%3==2)cout<<((n/3)*2)+1<<endl;
}
