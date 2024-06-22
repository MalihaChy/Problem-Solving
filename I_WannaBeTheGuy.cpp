#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x;
    set<int>s;
    int p;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>x;
        s.insert(x);
    }
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>x;
        s.insert(x);
    }
    if(s.size()==n)cout<<"I become the guy.\n";
    else cout<< "Oh, my keyboard!\n";
}
