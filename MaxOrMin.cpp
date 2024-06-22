#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ar[5];
        for(int i=0;i<5;i++)
            cin>>ar[i];
        sort(ar,ar+5);
        if(ar[4]!=ar[3])cout<<ar[4]*ar[3]<<endl;
        else if(ar[3]!=ar[2])cout<<ar[3]*ar[2]<<endl;
        else if(ar[2]!=ar[1])cout<<ar[2]*ar[1]<<endl;
        else cout<<ar[1]*ar[0]<<endl;

    }
}
