#include<bits/stdc++.h>
using namespace std;

int main()
{
    long ar[40];
    for(int i=0; i<=32; i++)
        ar[i]=pow(2,i);
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)
            break;
        else
        {
            int cnt=0;
            for(int i=0; n>0; i++)
            {
                if(n<ar[i])
                {
                    n=n-ar[i-1];
                    i=-1;
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }
    }
}
