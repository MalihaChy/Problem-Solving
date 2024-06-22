#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,p1,p2,k;
    int sum,chef,cook;
    cin>>t;
    while(t--)
    {
        cin>>p1>>p2>>k;
        sum=p1+p2;
        chef=0;
        cook=k;
        p1=2*k;
        while(chef<=sum||cook<=sum)
        {
            chef+=p1;
            cook+=p1;
            if(chef>sum||cook>sum)
        }

    }
}
