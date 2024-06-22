#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h, m;
        cin>>h>>m;
        cout<<(60-m)+(23-h)*60<<endl;
    }
}
