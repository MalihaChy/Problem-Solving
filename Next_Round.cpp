#include<bits/stdc++.h>
using namespace std;

int ar[100];

int main()
{
    int n,k,cnt=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>ar[i];
    if(ar[k]>0){
        if(ar[k]==ar[k+1]){
            for(int i=k+1;i<=n;i++){
                if(ar[k]==ar[i])
                    cnt++;
            }
        }
        cout<<cnt+k<<endl;
    }
    else{
        for(int i=k-1;i>0;i--){
            if(ar[i]>0){
                cnt=i;
                break;
            }
        }
        cout<<cnt<<endl;
    }
}
