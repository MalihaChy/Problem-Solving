#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    int s;
    cin>>tc;
    while(tc--)
    {
        cin>>s;
        int ar[s];
        char c;
        int cnt=0;
        for(int i=0; i<s; i++)cin>>ar[i];
        for(int i=0; i<s; i++)
        {
            cin>>c;
            if(c=='S'&&ar[i]<3)cnt++;
            else if(c=='J'&&ar[i]>2)cnt++;
        }
        cout<<cnt<<endl;
    }
}
