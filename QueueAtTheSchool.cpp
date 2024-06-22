#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    string a;
    cin>>a;
    int sz=n-1;
    while(t--)
    {
        for(int i=0; i<sz;)
        {
            if(a[i]=='B'&&a[i+1]=='G')
            {
                swap(a[i],a[i+1]);
                i+=2;
            }
            else
                i++;
        }
    }
    cout<<a<<endl;
}
