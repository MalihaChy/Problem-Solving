#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, x;
    cin>>n>>h;
    int width = 0;
    while(n--)
    {
        cin>>x;
        if(x>h)width+=2;
        else width++;
    }
    cout<<width<<endl;
}
