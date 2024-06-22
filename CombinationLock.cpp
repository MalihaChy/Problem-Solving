#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int ans=0;
    char x,y;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            if(a[i]>b[i])
            {
                x=a[i];
                y=b[i];
            }
            else if(a[i]<b[i])
            {
                x=b[i];
                y=a[i];
            }
            ans+=min( abs(x-y),abs('0'-y)+1+abs('9'-x) );
            //cout<<ans<<endl;
        }
    }
    cout<<ans<<endl;
}
