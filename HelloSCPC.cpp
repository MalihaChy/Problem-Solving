#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("hello.in","r",stdin);
    int t;
    int ar[12];
    cin>>t;
    while(t--)
    {
        int flag=0;
        for(int i=0;i<4;i++){
            cin>>ar[i];
        }
        for(int i=4;i<12;i++){
            cin>>ar[i];
            if(ar[i]<ar[3])
                flag=1;
        }
        //for(int i=0;i<12;i++)
            //cout<<ar[i]<<" ";
        if(ar[0]<ar[1]&&ar[1]<ar[2]&&ar[2]<ar[3]&&flag==0)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
}
