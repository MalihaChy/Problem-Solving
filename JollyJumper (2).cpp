#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int ar[n];
        int flag=0;
        bool jolly[n];
        memset(jolly,false,sizeof(jolly));
        jolly[0]=true;
        cin>>ar[0];
        for(int i=1;i<n;i++)
        {
            cin>>ar[i];
            int d=abs(ar[i]-ar[i-1]);
            if(d>=1&&d<n)
                jolly[d]=true;
        }
        for(int i=1;i<n;i++)
        {
            if(jolly[i]==false){
                cout<<"Not jolly\n";
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"Jolly\n";
    }
}
