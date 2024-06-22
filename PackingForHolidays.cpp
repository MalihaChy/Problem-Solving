#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        int l,w,h;
        cin>>l>>w>>h;
        int ans=l*w*h;
        if(ans<=20*20*20&&l<=20&&w<=20&&h<=20)
            printf("Case %d: good\n",j);
        else
            printf("Case %d: bad\n",j);
    }
}
