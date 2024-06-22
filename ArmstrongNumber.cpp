#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        //  char a[15];
        //itoa(x,a,10);
        // int a = 10;
        stringstream ss;
        ss << x;
        string a = ss.str();
        // char a[15];
        // gets(a);
        //  int l=strlen(a);
        int l=a.size();
        long long sum=0,y,z;
        for(int i=0; a[i]; i++)
        {
            y=a[i]-48;
            z=y;
            for(int j=1; j<l; j++)
                z*=y;
            //  sum+=(pow(y,l));
            sum+=z;
            //  cout<<sum<<endl;
        }
        if(sum==x)
            cout<<"Armstrong"<<endl;
        else
            cout<<"Not Armstrong\n";
    }
}
