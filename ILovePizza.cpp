#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    string a;
    while(T--)
    {
        int j=0,k=0,m=0,n=0,r=0,t=0,g=0,o=0;
        cin>>a;
        for(int i=0; a[i]; i++)
        {
            if(a[i]=='M')
                m++;
            else
            {
                if(a[i]=='A')
                {
                    k++;
                    if(k==3)
                    {
                        k=0;
                        o++;
                    }
                }
                else
                {
                    if(a[i]=='R')
                    {
                        r++;
                        if(r==2)
                        {
                            n++;
                            r=0;
                        }
                    }
                    else
                    {
                        if(a[i]=='G')
                            g++;
                        else
                        {
                            if(a[i]=='T')
                                t++;
                            else
                            {
                                if(a[i]=='I')
                                    j++;
                            }
                        }
                    }
                }
            }
        }
        int ans=min(m,o);
     ans=min(ans,n);
     ans=min(ans,g);
     ans=min(ans,t);
     ans=min(ans,j);
     cout<<ans<<endl;
    }
    //cout<<m<<o<<r<<g<<t<<j;

}

