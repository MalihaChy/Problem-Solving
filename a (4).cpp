

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        double r;
        cin>>r;
        //printf("%10llf\n",2*r*(pow(3,0.5)+1));
        printf("%.10llf\n",4*r*(pow(2,0.5)));
    }
}

/*
#include<stdio.h>
#include<math.h>
int main()
{

    int test;
    scanf("%d",&test);
    for(int i =1;i<test;i++)
    {

        long long r;
        scanf("%ld",&r);
        long long area = pow(r,2);
        area = area*2;
        area = sqrt(area);
        long long p = area+area;
        p=p*2;
        printf("%lld\n",p);
    }
    return 0;
}

*/
