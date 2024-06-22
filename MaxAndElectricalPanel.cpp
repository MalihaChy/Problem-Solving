#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,c;
    int flag=1;
    cin>>N>>c;
    int mid=(1+N)/2;
    int coin=1000;
    int high=N,low=1;
    int ar[N+1];
    memset(ar,-1,sizeof(ar));
    coin--;
    cout<<1<<" "<<mid<<endl;
    while(high>=low&&coin>0&&flag!=-1)
    {
        cin>>flag;
        if(flag==0){
            ar[mid]=1;
            low=mid+1;
        }
        else if(flag=1){
            ar[mid]=100;
            coin-=c;
            high=mid-1;
            cout<<2<<endl;
        }
        else if(flag==-1)break;
        mid=(high+low)/2;
        coin--;
        cout<<1<<" "<<mid<<endl;
    }
    if(flag==-1)cout<<3<<" "<<mid<<endl;
    else{
        for(int i=0;i<=N;i++)
        {
            if(ar[i]==100){
                cout<<3<<" "<<i<<endl;
            }
        }
    }

}
