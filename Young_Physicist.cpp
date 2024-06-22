#include<bits/stdc++.h>
using namespace std;

int ar[2][3];

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        for(int i=0; i<3; i++)
        {
            cin>>ar[1][i];
            ar[0][i]+=ar[1][i];
        }
    }
    if(ar[0][0]==0&&ar[0][1]==0&&ar[0][2]==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
