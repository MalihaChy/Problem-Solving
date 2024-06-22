#include<bits/stdc++.h>
using namespace std;

int d;

void Digit_To_Braille()
{
    string s,s1="",s2="",s3="";
    cin>>s;
    char x;
    for(int i=0; i<d;)
    {
        x=s[i];

        if(x=='1'||x=='2'||x=='5'||x=='8')s1+="*.";
        else if(x=='3'||x=='4'||x=='6'||x=='7')s1+="**";
        else if(x=='9'||x=='0')s1+=".*";

        if(x=='1'||x=='3')s2+="..";
        else if(x=='2'||x=='6'||x=='9')s2+="*.";
        else if(x=='4'||x=='5')s2+=".*";
        else if(x='7'||x=='8'||x=='0')s2+="**";

        s3+="..";

        i++;

        if(i!=d)
        {
            s1+=" ";
            s2+=" ";
            s3+=" ";
        }
    }
    int sz = s1.size();
    for(int i=0; i<sz; i++)cout<<s1[i];
    cout<<"\n";
    for(int i=0; i<sz; i++)cout<<s2[i];
    cout<<"\n";
    for(int i=0; i<sz; i++)cout<<s3[i];
    cout<<"\n";
}

void Braille_To_Digit()
{
    string s1,s2,s3,s;
    char c;
    cin>>c;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    s1 = c+s1;
    int sz=s1.size();
    for(int i=0;i<sz;i+=3)
    {
        if(s1[i]=='*'&&s1[i+1]=='.'&&s2[i]=='.'&&s2[i+1]=='.')s+='1';
        else if(s1[i]=='*'&&s1[i+1]=='.'&&s2[i]=='*'&&s2[i+1]=='.')s+='2';
        else if(s1[i]=='*'&&s1[i+1]=='*'&&s2[i]=='.'&&s2[i+1]=='.')s+='3';
        else if(s1[i]=='*'&&s1[i+1]=='*'&&s2[i]=='.'&&s2[i+1]=='*')s+='4';
        else if(s1[i]=='*'&&s1[i+1]=='.'&&s2[i]=='.'&&s2[i+1]=='*')s+='5';
        else if(s1[i]=='*'&&s1[i+1]=='*'&&s2[i]=='*'&&s2[i+1]=='.')s+='6';
        else if(s1[i]=='*'&&s1[i+1]=='*'&&s2[i]=='*'&&s2[i+1]=='*')s+='7';
        else if(s1[i]=='*'&&s1[i+1]=='.'&&s2[i]=='*'&&s2[i+1]=='*')s+='8';
        else if(s1[i]=='.'&&s1[i+1]=='*'&&s2[i]=='*'&&s2[i+1]=='.')s+='9';
        else if(s1[i]=='.'&&s1[i+1]=='*'&&s2[i]=='*'&&s2[i+1]=='*')s+='0';
    }
    cout<<s<<endl;

}

int main()
{
    char c;
    while(1)
    {
        cin>>d;
        if(d==0)return 0;
        cin>>c;
        if(c=='S')Digit_To_Braille();
        else if(c=='B')Braille_To_Digit();

    }
}

