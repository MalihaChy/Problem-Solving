#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    set<int>s;
    int tem;
    for(int i=0;i<p;i++)
    {
        cin>>tem;
        s.insert(tem);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>tem;
        s.insert(tem);
    }
    if(s.size()==n)
        printf("I become the guy.\n");
    else
        printf("Oh, my keyboard!\n");
}
