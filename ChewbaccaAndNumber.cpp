#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin>>x;
    int sz=x.size();
    int ar[sz];
    string a;
    for(int i=0; i<sz; i++)
        ar[i]=x[i]-48;
    if(ar[0]!=9&&ar[0]>4)
        ar[0]=9-ar[0];
    for(int i=1; i<sz; i++)
    {
        if(ar[i]>4)
            ar[i]=(9-ar[i]);
    }
    for(int i=0; i<sz; i++)
        cout<<ar[i];
    cout<<endl;
}
