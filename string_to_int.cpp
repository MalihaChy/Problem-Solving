#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="1:234:567:8:9",a="123",b;
    b+=a[0];
    //b[1]='\0';
    stringstream ss;
            ss<<b;
            ss.str(b);
            int temp;
            ss>>temp;
            cout<<temp<<endl;
  /*  vector<int>v;
    for(int j=0,k=0; s[j]!='\0'; j++)
    {
        if(s[j]!=':')
        {
            a[k]=s[j];
            k++;
        }
        else
        {
            a[k]='\0';
            stringstream ss;
            ss>>a;
            ss.str(a);
            int temp;
            ss<<temp;
            cout<<temp<<endl;
            //v.push_back(temp);
            a.clear();
            k=0;
        }
    }*/
    // for(int i=0;i<v.size();i++)
    //    cout<<v[i]<<endl;
}
