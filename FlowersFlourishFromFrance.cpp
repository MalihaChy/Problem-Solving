#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(1)
    {
        getline(cin,s);
        if(s[0]=='*')return 0;
        transform(s.begin(),s.end(),s.begin(),::toupper);
        char c = s[0];
        int flag=0;
        int sz=s.size()-1;
        for(int i=1;i<sz;i++)
        {
            if(s[i]==' '&&s[i+1]!=c){
                cout<<"N\n";
                flag=1;
                break;
            }
        }
        if(flag==0)cout<<"Y\n";
    }
}
