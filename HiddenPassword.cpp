#include<bits/stdc++.h>
using namespace std;

string to_binary(int a)
{
    string x;
    for(int i=1;i<=8;i++)
    {
        if(a%2)
            x+='1';
        else
            x+='0';
        a=a/2;
    }
    reverse(x.begin(),x.end());
    return x;
}

int main()
{
    int t,n;
    string one,two;
    cin>>t;
    char ln;
    int a,b,c,d,e,f;
    string blue,green;
    string a1;

    while(t--)
    {
        string ans;
        cin>>n;
        //getline(cin,one);
        //getline(cin,two);
        cin>>one>>two;
        cin>>ln;
        int sz=one.size();
        //cout<<one<<endl<<two<<endl;
        //cout<<one[0]<<endl<<one[sz-1]<<endl<<sz<<endl;
        for(int i=0;i<sz;i+=6)
        {
            a=one[i];
            a1=to_binary(a);
            green+=a1[4];
            blue+=a1[7];

            b=one[i+1];
            a1=to_binary(b);
            green+=a1[3];
            blue+=a1[6];

            c=one[i+2];
            a1=to_binary(c);
            green+=a1[2];
            blue+=a1[5];

            d=one[i+3];
            a1=to_binary(d);
            green+=a1[7];
            blue+=a1[4];

            e=one[i+4];
            a1=to_binary(e);
            green+=a1[6];
            blue+=a1[3];

            f=one[i+5];
            a1=to_binary(f);
            green+=a1[5];
            blue+=a1[2];

            reverse(green.begin(),green.end());
            reverse(blue.begin(),blue.end());

            int x=0,y=0;

            for(int j=0;j<6;j++)
            {
                if(green[j]=='1')
                    x+=pow(2,j);
                if(blue[j]=='1')
                    y+=pow(2,j);
            }

            ans+=two[y];
            ans+=two[x];

            i++;
            //cout<<a<<endl<<b<<endl<<c<<endl;
        }
        cout<<one<<endl<<two<<endl;
        cout<<ans<<endl;
    }

}
