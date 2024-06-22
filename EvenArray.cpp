#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int x, even=0, odd=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if((x&1) && (i&1)==0)odd++;
            else if((x&1)==0 && (i&1))even++;
        }
        if(even!=odd)cout<<-1<<endl;
        else cout<<even<<endl;
    }
}
