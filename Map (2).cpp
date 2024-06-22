#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin>>m>>n;
    map<string, int>mag,note;
    string s;
    for(int i=0; i<m; i++)
    {
        cin>>s;
        mag[s]++;
    }
    for(int i=0; i<n; i++)
    {
        cin>>s;
        note[s]++;
    }

    int flag = 0;
    map<string, int>::iterator it;
    for(it = note.begin(); it!=note.end(); it++)
    {
        if(mag[it->first]<it->second)
        {
            flag=1;
            break;
        }
    }
    if(flag)cout<<"No\n";
    else cout<<"Yes\n";
}
