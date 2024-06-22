#include<bits/stdc++.h>
using namespace std;

bool isPrime(int a)
{
    int loop=sqrt(a);
    for(int i=2; i<=loop; i++)
    {
        if(a%i==0)return false;
    }
    return true;
}

int main()
{
    int t;
    int n,x,y,z;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        cin>>n;
        //if(isPrime(n))printf("Case %d: %d = %d (1)\n",k,n,n);
        //else
        //{
            set<int>s;
            int ar[110];
            for(int i=0; i<110; i++)ar[i]=0;
            for(int m=2; m<=n; m++)
            {
                x=m;
                while(x%2==0)
                {
                    x=x/2;
                    s.insert(2);
                    ar[2]++;
                }
                int loop=sqrt(x);
                for(int i=3; i<=x; i+=2)
                {
                    while(x%i==0)
                    {
                        s.insert(i);
                        ar[i]++;
                        x=x/i;
                    }
                }
                if(x>1)
                {
                    s.insert(x);
                    ar[x]++;
                }
            }
            set<int>::iterator it;
            it=s.begin();
            printf("Case %d: %d = %d (%d)",k,n,*it,ar[*it]);//2 (1)")
            s.erase(s.begin());
            for(it=s.begin(); it!=s.end(); it++)
            {
                printf(" * %d (%d)",*it,ar[*it]);
            }
            cout<<endl;
        //}
    }
}
