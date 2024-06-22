#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    int cnt=1,ans=0;;
    cin>>ar[0];
    for(int i=1;i<n;i++){
        cin>>ar[i];
        if(ar[i]>=ar[i-1]){
            cnt++;
        }
        else{
            ans=max(ans,cnt);
            cnt=1;
        }
    }
    cout<<max(ans,cnt)<<endl;
}
