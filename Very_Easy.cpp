#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,A;
    while(scanf("%d%d",&N,&A)!=EOF){
        long long sum=0;
        for(int i=1;i<=N;i++){
            sum+=(i*pow(A,i));
        }
        cout<<sum<<endl;
    }
}
