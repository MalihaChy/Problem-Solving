#include<bits/stdc++.h>
using namespace std;

string to_binary(int a)
{
    string x;
    for(int i=0;i<8;i++)
    {
        if(a%2)
            x+='1';
        else
            x+='0';
        a=a/2;
    }
    //reverse(x.begin(),x.end());
    return x;
}

int main()
{
    int t,n;
    int a;
    string one,b,two;
    vector<int>v;
    cin>>t;
    while(t--)
    {
        int blue,green;
        cin>>n;
        while(n--)
        {
            cin>>one;
            blue=0;
            green=0;
            for(int i=0;i<6;i++)
            {
                a=one[i];
                b=to_binary(a);
                //cout<<b<<endl;
                if(b[i]=='1')
                    //cout<<pow(2,i)<<" b "<<endl;
                    blue+=(pow(2,i));
                if(b[(i+3)%6]=='1')
                    //cout<<pow(2,i)<<" g "<<endl;
                    green+=(pow(2,i));

            }
            v.push_back(blue);
            //cout<<blue<<endl<<green<<endl;
            v.push_back(green);
        }
        cin>>two;
        int sz=v.size();
        for(int i=0;i<sz;i++)
            cout<<two[v[i]];
            //cout<<v[i];
        cout<<endl;
        v.clear();
    }
}
