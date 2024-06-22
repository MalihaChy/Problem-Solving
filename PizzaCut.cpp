#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int xa,ya,xb,yb;
    double sa,sb;
    for(int i=1; i<=t; i++)
    {
        cin>>xa>>xb>>ya>>yb;
        sa=atan2(ya,xa)*(180.0/3.14159265);
        sb=atan2(yb,xb)*(180.0/3.14159265);
        vector<double>v;
        vector<int>a;
        v.push_back(sa);
        v.push_back(sb);
        for(int i=0; i<2; i++)
        {
            if(v[i]>0.0&&v[i]<45.0)
                a.push_back(1);
            else
            {
                if(v[i]>45.0&&v[i]<90.0)
                    a.push_back(2);
                else
                {
                    if(v[i]>90.0&&v[i]<135.0)
                        a.push_back(3);
                    else
                    {
                        if(v[i]>135.0&&v[i]<180.0)
                            a.push_back(4);
                        else
                        {
                            if(v[i]>180.0&&v[i]<225.0)
                                a.push_back(5);
                        }
                        else
                        {
                            if(v[i]>225.0&&v[i]<270.0)
                                a.push_back(6);
                            else
                            {
                                if(v[i]>270.0&&v[i]<315.0)
                                    a.push_back(7);
                                else
                                {
                                    if(v[i]>315.0&&v[i]<360.0)
                                        a.push_back(8);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
