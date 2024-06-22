#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1,a2,a3,b1,b2,b3,n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;

    int cups=a1+a2+a3;
    int medals=b1+b2+b3;

    int cnt=(cups/5)+(medals/10);
    if(cups%5>0)
        cnt++;
    if(medals%10>0)
        cnt++;
    if(cnt<=n)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
