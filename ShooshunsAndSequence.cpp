#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n+1];
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    int x=ar[k],cnt=0;
    bool flag=false;
    for(int i=k;i<=n;i++){
        if(x!=ar[i])
            flag=true;
    }
    if(flag)
        cout<<-1<<endl;
    else{
        for(int i=k-1;i>0;i--){
            if(ar[i]!=x){
                cnt=i;
                break;
            }
        }
        cout<<cnt<<endl;
    }
}
