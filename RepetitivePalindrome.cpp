#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,a;
    //scanf("%s",&a);
    long long k;
    cin>>a>>k;
    int sz=a.size();
    for(int i=sz-1;i>=0;i--)
        s+=a[i];
    if(s==a)cout<<"YES"<<endl;
    else cout<<"NO\n";
}
