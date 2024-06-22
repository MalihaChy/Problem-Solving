#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("coffee.in","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int c,p;
        cin>>c>>p;
        int w,x,y,z;
        string s,a,b;
        vector<string>v1;
        vector<int>v2[c];
        w=100/p;
        for(int i=0; i<c; i++)
        {
            cin>>s>>x>>y>>z;
            v1.push_back(s);
            x+=w;
            if((x+1)%5==0)v2[i].push_back(x+1);
            else if((x-1)%5==0)v2[i].push_back(x-1);
            else v2[i].push_back(x);
            y+=w;
            if((y+1)%5==0)v2[i].push_back(y+1);
            else if((y-1)%5==0)v2[i].push_back(y-1);
            else v2[i].push_back(y);
            z+=w;
            if((z+1)%5==0)v2[i].push_back(z+1);
            else if((z-1)%5==0)v2[i].push_back(z-1);
            else v2[i].push_back(z);
        }
        for(int i=0; i<p; i++)
        {
            cin>>s>>a>>b;
            for(int j=0; j<c; j++)
            {
                if(b==v1[j])
                {
                    if(a=="medium")
                    {
                        cout<<s<<" "<<v2[j][1]<<endl;
                        break;
                    }
                    else if(a=="large")
                    {
                        cout<<s<<" "<<v2[j][2]<<endl;
                        break;
                    }
                    else if(a=="small")
                    {
                        cout<<s<<" "<<v2[j][0]<<endl;
                        break;
                    }
                }
            }
        }
    }
}

