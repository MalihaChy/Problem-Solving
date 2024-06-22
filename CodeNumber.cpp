#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();
    for(int x=1; x<=t; x++)
    {
        //cout<<t;
        while(1)
        {
            string s;
            getline(cin,s);
            int sz=s.size();
            if(s[0]=='\0')
                break;
            for(int i=0; i<sz; i++)
            {
                if(s[i]=='3')
                    s[i]='E';
                else
                {
                    if(s[i]=='0')
                        s[i]='O';
                    else
                    {
                        if(s[i]=='1')
                            s[i]='I';
                        else
                        {
                            if(s[i]=='4')
                                s[i]='A';
                            else
                            {
                                if(s[i]=='9')
                                    s[i]='P';
                                else
                                {
                                    if(s[i]=='8')
                                        s[i]='B';
                                    else
                                    {
                                        if(s[i]=='5')
                                            s[i]='S';
                                        else
                                        {
                                            if(s[i]=='7')
                                                s[i]='T';
                                            else
                                            {
                                                if(s[i]=='2')
                                                    s[i]='Z';
                                                else
                                                {
                                                    if(s[i]=='6')
                                                        s[i]='G';
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            cout<<s<<endl;
        }
        if(x<t)
            cout<<endl;
    }
}
