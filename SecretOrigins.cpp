#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n;
        string a;
        int m=n;
        while(n/2)
        {
            if(n%2==0)
                a+='0';
            else
                a+='1';
            n=n/2;
        }
        a+='1';
        int cnt=0;
        for(int j=0; a[j]; j++)
        {
            if(a[j]=='1')
                cnt++;
        }
        // int onoroy=0;
        for(int k=m+1;; k++)
        {
            int j=k;
            string a;
            while(j/2)
            {
                if(j%2==0)
                    a+='0';
                else
                    a+='1';
                j=j/2;
            }
            a+='1';
            int onoroy=0;
            for(int j=0; a[j]; j++)
            {
                if(a[j]=='1')
                    onoroy++;
            }
            if(cnt==onoroy){
                printf("Case %d: %d\n",i,k);
                break;
            }
        }
    }
}
