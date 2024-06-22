#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string x,y;
    cin>>n;
    vector<string>a,b;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        cin>>x;
        b.push_back(x);
    }
    int l=a.size(),cnt=0;
    for(int i=0; i<l; i++)
    {
        for(int j=0; j<l; j++)
        {
            if(b[i]==a[j])
            {
                cnt++;
                a[j]="MEH";
                break;
            }
        }
    }
    cout<<l-cnt<<endl;
}
