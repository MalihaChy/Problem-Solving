#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n<0)
            break;
        else
        {
            string a;
            while(n/3)
            {
                if(n%3==0)
                    a+='0';
                else
                {
                    if(n%3==1)
                        a+='1';
                    else
                        a+='2';
                }
                n=n/3;
            }
            if(n%3==0)
                a+='0';
            else
            {
                if(n%3==1)
                    a+='1';
                else
                    a+='2';
            }
            reverse(a.begin(),a.end());
            cout<<a<<endl;
        }
    }
}
