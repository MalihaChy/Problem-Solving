#include<bits/stdc++.h>
using namespace std;

long long m,n,cnt;

int main()
{
    int T;
    cin>>T;
    for(int k=1; k<=T; k++)
    {
        cin>>m>>n;
        cnt=0;
        long long mid=(n+m)/2;
        for(long long i=m; i<=mid; i++)
        {
            stringstream ss;
            ss << i;
            string a = ss.str();
            for(long long j=0; a[j]; j++)
            {
                if(a[j]=='0')
                    cnt++;
            }
        }
        for(long long i=mid+1; i<=m; i++)
        {
            stringstream ss;
            ss << i;
            string a = ss.str();
            for(long long j=0; a[j]; j++)
            {
                if(a[j]=='0')
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
