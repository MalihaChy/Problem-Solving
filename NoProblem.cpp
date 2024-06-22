#include<bits/stdc++.h>
using namespace std;

int ar[13],ar2[13];

int main()
{
    int t=1;
    int z;
    while(cin>>z)
    {
        if(z<0)
            break;
        ar[0]=z;
        for(int x=1; x<=12; x++)
        {
            cin>>ar[x];
            ar[x]+=ar[x-1];
        }
         for(int x=1; x<=12; x++)
        {
            cout<<ar[x]<<" ";
           // ar[x]+=ar[x-1];
        }
        for(int x=1; x<=12; x++)
            cin>>ar2[x];
        printf("Case %d:\n",t++);
        for(int x=0; x<12; x++)
        {
            if(ar[x]>=ar2[x+1])
                cout<<"No problem! :D\n";
            else
                cout<<"No problem. :(\n";

        }
    }
}
