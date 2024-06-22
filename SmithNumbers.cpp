#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll sum_of_factors(ll x)
{
    //int a = 10;
    stringstream ss;
    ss << x;
    string str = ss.str();
    ll sz=str.size();
    ll sum=0;
    for(int i=0; i<sz; i++)
    {
        sum+=(str[i]-48);
    }
    return sum;
}

ll prime_factorisation(ll n)
{
    ll sum=0;
    while(n%2==0)
    {
        sum+=2;
        n=n/2;
    }
    for(ll i=3; i*i<=n; i+=2)
    {
        while(n%i==0)
        {
            n=n/i;
            sum+=sum_of_factors(i);
        }
    }
    if(n>1)sum+=sum_of_factors(n);
    return sum;
}

bool is_prime(ll x)
{
    for(ll i=2;i*i<=x;i++)
    {
        if(x%i==0)return false;
    }
    return true;
}

int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(1)
        {
            n++;
            if(!is_prime(n))
            {
                ll f=prime_factorisation(n);
                ll s=sum_of_factors(n);
                if(f==s)
                {
                    cout<<n<<endl;
                    break;
                }
            }
            //cout<<sum_of_factors(12345678910)<<endl;
        }


    }

}
