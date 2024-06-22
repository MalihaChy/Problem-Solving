#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,X,Y;
    while(1)
    {
        cin>>n;
        if(n==0)return 0;
        X=0;
        Y=0;
        while(n--)
        {
            cin>>x>>y;
            if(x>y)X++;
            else if(x<y)Y++;
        }
        cout<<X<<" "<<Y<<endl;
    }
}
