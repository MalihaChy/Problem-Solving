#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int w=(a+b)*c;
    int x=a*(b+c);
    int tem=max(w,x);
    int y=a*b*c;
    int z=a+b+c;
    int ans=max(y,z);
    cout<<max(tem,ans)<<endl;
}
