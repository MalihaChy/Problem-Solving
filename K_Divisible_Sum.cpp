#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n, k;
    while(t--)
    {
        cin>>n>>k;
        if(n==1)cout<<k<<endl;
        else if(k>n)
        {
            if((k%n)!=0)cout<<(k/n)+1<<endl;
            else cout<<(k/n)<<endl;
        }
        else if(n==k)cout<<1<<endl;
        else if(n>k)
        {
            if((n%k)!=0)
            {
                int c = (n/k)+1;
                k = k*c;
                if(k%n)cout<<(k/n)+1<<endl;
                else cout<<k/n<<endl;
            }
            else cout<<1<<endl;
        }
    }
}
