#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        else
        {
            string a;
            int cnt=0;
            while(n/2)
            {
                if(n%2==0)
                    a+='0';
                else
                {
                    a+='1';
                    cnt++;
                }
                n=(n/2);
            }
            a+='1';
            reverse(a.begin(),a.end());
            cout<<"The parity of "<<a<<" is "<<cnt+1<<" (mod 2).\n";
        }
    }
}
