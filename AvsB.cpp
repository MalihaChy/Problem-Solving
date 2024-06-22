#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
            printf("Argentina %d - %d Brazil\n",a,b);
        else
            printf("Brazil %d - %d Argentina\n",b,a);
    }
}
