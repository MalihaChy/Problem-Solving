#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a="I am going to ask you this one time, where is Gamora?";
    string b="I will do you one better, who is Gamora?";
    string c="I will do you one better, why is Gamora?";
    string d="What is Gamora?";

    string x="Quill";
    string y="Stark";
    string z="Drax";

    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s==x)
            cout<<a<<endl;
        else
        {
            if(s==y)
                cout<<b<<endl;
            else
            {
                if(s==z)
                    cout<<c<<endl;
                else
                    cout<<d<<endl;
            }
        }
    }
}
