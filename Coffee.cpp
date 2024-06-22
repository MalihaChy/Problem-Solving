#include<bits/stdc++.h>
using namespace std;

int main()
{
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
        //vector< pair<string,int> >v3;
        //vector< pair<string,int> > v1[c];
        //vector< pair<int,int> >v2[c];
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
        //x=100/p;
        //cout<<x<<endl<<endl<<endl;
        for(int i=0; i<p; i++)
        {
            cin>>s>>a>>b;
            for(int j=0; j<c; j++)
            {
                if(b==v1[j])
                {
                    if(a=="medium")
                    {
                        //y=v2[j][1]+x;
                        //if((y+1)%5==0)
                            //v3.push_back(make_pair(s,y+1));
                            cout<<s<<" "<<v2[j][1]<<endl;
                        //else if((y-1)%5==0)
                            //v3.push_back(make_pair(s,y-1));
                            //cout<<s<<" "<<y-1<<endl;
                        //else
                            //v3.push_back(make_pair(s,y));
                            //cout<<s<<" "<<y<<endl;
                        break;
                    }
                    else if(a=="large")
                    {
                        //y=v2[j][2]+x;
                        //if((y+1)%5==0)
                            //v3.push_back(make_pair(s,y+1));
                            cout<<s<<" "<<v2[j][2]<<endl;
                        //else if((y-1)%5==0)
                            //v3.push_back(make_pair(s,y-1));
                            //cout<<s<<" "<<y-1<<endl;
                        //else
                            //v3.push_back(make_pair(s,y));
                            //cout<<s<<" "<<y<<endl;
                        break;
                    }
                    else if(a=="small")
                    {
                        //y=v2[j][0]+x;
                        //if((y+1)%5==0)
                            //v3.push_back(make_pair(s,y+1));
                            cout<<s<<" "<<v2[j][0]<<endl;
                        //else if((y-1)%5==0)
                            //v3.push_back(make_pair(s,y-1));
                            //cout<<s<<" "<<y-1<<endl;
                        //else
                            //v3.push_back(make_pair(s,y));
                            //cout<<s<<" "<<y<<endl;
                        break;
                    }
                }
            }
        }
        //for(int i=0; i<p; i++)
        //cout<<v3[i].first<<" "<<v3[i].second<<endl;
    }
}
