#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int sz_a=a.size();
        int sz_b=b.size();
        int x=0;
        int ans=0;
        /*
        for(int i=0;i<sz_a;i++)
        {
            for(int j=0;j<sz_b;j++)
            {
                if(a[i]==b[j])
                {
                    b[j]='7';
                    x++;
                    break;
                }
            }
        }
        */
        int freq1[27],freq2[27];
        for(int i=0;i<27;i++)
        {
            freq1[i]=0;
            freq2[i]=0;
        }
        for(int i=0;i<sz_a;i++)
            freq1[a[i]-96]++;
        for(int i=0;i<sz_b;i++)
            freq2[b[i]-96]++;
        for(int i=1;i<27;i++)
            x+=min(freq1[i],freq2[i]);
        ans+=(sz_b-x);
        ans+=(sz_a-x);
        cout<<ans<<endl;
    }
}
