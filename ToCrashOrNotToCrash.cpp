#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    vector<string>v;
    for(int i=0;i<3;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    char c='A';
    int robo;
    bool robo_found=false;
    for(int i=0;i<3;i++)
    {
        a=v[i];
        for(int j=0;j<10;j++)
        {
            if(a[j]=='='){
                robo=j;
                b=a;
                robo_found=true;
                break;
            }
        }
        if(robo_found)break;
    }
    for(int i=robo+1;i<10;i++)
    {
        if(b[i]!='.'){
            c=b[i];
            break;
        }
    }
    if(c=='A')cout<<"You shall pass!!!\n";
    else cout<<c<<"\n";
}
