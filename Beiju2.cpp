#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c,d;
    int sz;
    while(cin>>a)
    {
        sz=a.size();
        for(int i=0;i<sz;)
        {
           if(a[i]=='[')
           {
               i++;
               //cout<<"you too\n";
               while(a[i]!='['&&a[i]!=']'&&i<sz)
               {
                   b+=a[i];
                   i++;
                   //cout<<"die\n";
               }
           }
           c=b+c;
           b.clear();

           if(a[i]==']')
           {
               i++;
               //cout<<"you too\n";
               while(a[i]!='['&&a[i]!=']'&&i<sz)
               {
                   b+=a[i];
                   i++;
                   //cout<<"die\n";
               }
           }
           c=b+c;
           b.clear();

           if(a[i]!='['&&a[i]!=']'){
                c+=a[i];
                i++;
           }
           //cout<<"moro nai?\n";
        }
        cout<<c<<endl;
        c.clear();
    }
}

