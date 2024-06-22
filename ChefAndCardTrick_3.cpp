#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int x;
        vector<int>a,b;
        queue<int>q;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            a.push_back(x);
            b.push_back(x);
        }
        sort(b.begin(),b.end());
        x=0;
        bool flag=false,flag2=false;
        for(int i=0; i<n; i++)
        {
            if(a[i]!=b[i])
                break;
            else
                x++;
        }
        if(x==n)
            cout<<"YES\n";
        else
        {
            x=0;
            int N=n-1;
            for(int i=0; i<N; i++)
            {
                if(a[i]<=a[i+1])
                {
                    q.push(a[i]);
                    //a.push_back(a[0]);
                    //a.erase(a.begin()+0);
                }
                else
                {
                    q.push(a[i]);
                    //a.push_back(a[0]);
                    //a.erase(a.begin()+0);
                    break;
                }
            }
            //x=n-q.size();
            x=q.size();
            for(int i=x,j=0; i<n; i++,j++)
            {
                //N=q.front();
                //q.pop();
                //cout<<N<<endl;
                //cout<<a[i]<<" "<<b[j]<<endl;
                if(a[i]!=b[j])
                {
                    flag=true;
                    cout<<"NO\n";
                    break;
                }
            }
            if(flag==false)
            {
                for(int i=n-x; i<n; i++)
                {
                    N=q.front();
                    q.pop();
                    //cout<<N<<" "<<b[i]<<endl;
                    if(N!=b[i])
                    {
                        flag2=true;
                        cout<<"NO\n";
                        break;
                    }
                }
            }

            if(flag==false&&flag2==false)
                cout<<"YES\n";
        }
    }
}


