#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s,d;
    while(cin>>s>>d){
        long long sum=0,guest=0;
        for(long long i=s;;i++){
            sum+=i;
            guest=i;
            if(sum>=d)
                break;
        }
        cout<<guest<<endl;
    }
}
