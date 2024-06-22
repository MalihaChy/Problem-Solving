#include<bits/stdc++.h>
using namespace std;

void prime_factorisation(int x)
{
    int n=x;
    set<int>s;
    int cnt=0;
    while(x%2==0)
    {
        cnt++;
        x=x/2;
        s.insert(2);
    }
    for(int i=3; i*i<=x; i+=2)
    {
        while(x%i==0)
        {
            cnt++;
            s.insert(i);
            x=x/i;
        }
    }
    if(x>1)
    {
        cnt++;
        s.insert(x);
    }
    if(cnt==s.size()&&cnt>=3)printf("The number %d is a Carmichael number.\n",n);
    else printf("%d is normal.\n",n);
}

int main()
{
    int x;
    while(cin>>x && x)
    {
        prime_factorisation(x);
    }
}
