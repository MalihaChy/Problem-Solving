#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int a,b,c;
    int moment=0;
    int result=999999999;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(b>=a){
            moment=b+c;
        }
        else
            moment=a+c;
        if(moment<result)
            result=moment;
    }
    printf("%d\n",result);
}
