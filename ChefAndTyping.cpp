#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>n;
        double sum=0.0;
        bool check[n];
        for(int i=0;i<n;i++)
            check[i]=false;
        vector< pair<string,double> >v;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            //if(i!=0)
            //{
                double x=0.2;
                for(int j=1;s[j];j++)
                {
                    if(s[j-1]=='d'&&s[j]=='f'||s[j-1]=='f'&&s[j]=='d'||s[j-1]=='d'&&s[j]=='d'||s[j-1]=='f'&&s[j]=='f'||s[j-1]=='k'&&s[j]=='j'||s[j-1]=='j'&&s[j]=='k'||s[j-1]=='k'&&s[j]=='k'||s[j-1]=='j'&&s[j]=='j')
                        x+=0.4;
                    else
                        x+=0.2;
                }
                //cout<<x<<endl;
                v.push_back(make_pair(s,x));
            //}
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(i!=j&&v[i].first==v[j].first&&check[j]==false){
                    v[j].second=v[i].second/2.0;
                    check[j]=true;
                }
            }
        }
        for(int i=0;i<n;i++)
            //cout<<v[i].second<<endl;
            sum+=v[i].second;
        cout<<sum*10<<endl;
    }
}
