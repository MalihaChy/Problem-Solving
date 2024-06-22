#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    while(getline(cin,a))
    {
        string b;
        for(int i=0; a[i]; i++)
        {
            if(a[i]=='A'||a[i]=='B'||a[i]=='C')
                b+='2';
            else
            {
                if(a[i]=='D'||a[i]=='E'||a[i]=='F')
                    b+='3';
                else
                {
                    if(a[i]=='G'||a[i]=='H'||a[i]=='I')
                        b+='4';
                    else
                    {
                        if(a[i]=='J'||a[i]=='K'||a[i]=='L')
                            b+='5';
                        else
                        {
                            if(a[i]=='M'||a[i]=='N'||a[i]=='O')
                                b+='6';
                            else
                            {
                                if(a[i]=='P'||a[i]=='Q'||a[i]=='R'||a[i]=='S')
                                    b+='7';
                                else
                                {
                                    if(a[i]=='T'||a[i]=='U'||a[i]=='V')
                                        b+='8';
                                    else
                                    {
                                        if(a[i]=='W'||a[i]=='X'||a[i]=='Y'||a[i]=='Z')
                                            b+='9';
                                        else
                                        {
                                            if(a[i]=='-'||a[i]=='1'||a[i]=='0')
                                                b+=a[i];
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout<<b<<endl;
    }
}
