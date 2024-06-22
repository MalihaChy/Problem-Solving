#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;
    int ar[n+1];
    memset(ar,0,sizeof(ar));
    int word=0;
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        if(ar[i]-ar[i-1]<=s)
            word++;
        else
            word=1;
    }
    cout<<word<<endl;
}
