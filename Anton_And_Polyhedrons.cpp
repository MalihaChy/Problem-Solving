#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin>>n;
    string s;
    map<string, int>m;
    while(n--)
    {
        cin>>s;
        m[s]++;
    }
    int sz = m.size();
    map<string, int>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        s = it->first;
        if(s=="Tetrahedron")sum+=(4*it->second);
        else if(s=="Cube")sum+=(6*it->second);
        else if(s=="Octahedron")sum+=(8*it->second);
        else if(s=="Dodecahedron")sum+=(12*it->second);
        else if(s=="Icosahedron")sum+=(20*it->second);
    }
    cout<<sum<<endl;
}
