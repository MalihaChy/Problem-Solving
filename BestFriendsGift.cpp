#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    for(int i=1; i<=t; i++)
    {
        cin>>s;
        vector<int>v;
        vector<string>ans;
        for(int j=0; j<6; j++)
        {
            if(s[j]>='0'&&s[j]<='9')
                v.push_back(s[j]-48);
            else
            {
                if(s[j]=='A')
                    v.push_back(10);
                else
                {
                    if(s[j]=='B')
                        v.push_back(11);
                    else
                    {
                        if(s[j]=='C')
                            v.push_back(12);
                        else
                        {
                            if(s[j]=='D')
                                v.push_back(13);
                            else
                            {
                                if(s[j]=='E')
                                    v.push_back(14);
                                else
                                {
                                    if(s[j]=='F')
                                        v.push_back(15);
                                }
                            }
                        }
                    }
                }
            }
        }
        int a,b,c;
        a=v[0]*16+v[1];
        b=v[2]*16+v[3];
        c=v[4]*16+v[5];

        //cout<<a<<b<<c<<endl;

        if(a>=0&&a<=127&&b==0&&c==0)
            ans.push_back("A");
        if(a>=0&&a<=127&&b>=0&&b<=127&&c==0)
            ans.push_back("B");
        if(a>=0&&a<=127&&b>=0&&b<=127&&c>=0&&c<=127)
            ans.push_back("C");
        if(a>=0&&a<=255&&b==0&&c==0)
            ans.push_back("D");
        if(a>=0&&a<=255&&b>=0&&b<=127&&c==0)
            ans.push_back("E");
        if(a>=0&&a<=255&&b>=0&&b<=127&&c>=0&&c<=127)
            ans.push_back("F");
        if(a>=0&&a<=255&&b>=0&&b<=255&&c==0)
            ans.push_back("G");
        if(a>=0&&a<=255&&b>=0&&b<=255&&c>=0&&c<=127)
            ans.push_back("H");
        if(a>=0&&a<=255&&b>=0&&b<=255&&c>=0&&c<=255)
            ans.push_back("I");
        int sz=ans.size();
        printf("Case %d:",i);
        for(int j=0;j<sz;j++)
            cout<<" "<<ans[j];
        cout<<endl;
    }
}
