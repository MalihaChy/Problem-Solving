#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    while(1)
    {
        cin>>a>>b;
        if(a==0&&b==0)return 0;
        if(a>b)swap(a,b);
        cout<<a-(b-a)<<endl;
    }
}
