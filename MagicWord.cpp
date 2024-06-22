#include<bits/stdc++.h>
using namespace std;

int ar[27];

int main()
{
    int t,n,cnt;
    cin>>t;
    string a;
    while(t--)
    {
        cin>>a>>n;
        memset(ar,0,sizeof(ar));
        int l=a.size();
        for(int i=0;i<l;i++){
            ar[a[i]-96]++;
        }
        cnt=0;
        for(int i=1;i<=26;i++){
            if(ar[i]>1){
                cnt+=(ar[i]-1);
            }
        }
        if(cnt>n)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}
