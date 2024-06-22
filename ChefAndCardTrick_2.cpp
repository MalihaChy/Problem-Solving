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
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
            b.push_back(x);
        }
        sort(b.begin(),b.end());
        x=0;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
                break;
            else
                x++;
        }
        if(x==n)
            cout<<"YES\n";
        else{
            x=0;
            int N=n-1;
            for(int i=0;i<N;i++)
            {
                if(a[i]<=a[i+1])
                {
                    a.push_back(a[i]);
                    a.erase(a.begin()+0);
                }
                else{
                    a.push_back(a[i]);
                    a.erase(a.begin()+0);
                    break;
                }
            }
            for(int i=0;i<n;i++)
            {
                if(a[i]!=b[i])
                {
                    flag=true;
                    cout<<"NO\n";
                    break;
                }
            }
            if(flag==false)
                cout<<"YES\n";
            //int N=n-1,p,q;
            for(int i=0;i<N;i++)
            {
                if(a[i]<a[i+1])
                    x++;
                else{
                    p=a[i];
                    break;
                }
            }
            //int p,q;
            //p=a[i];
            /*for(int i=x+1;i<N;i++)
            {
                if(a[i]>a[i+1])
                {
                    flag=true;
                    break;
                }*/
                    ////cout<<a[i]<<" "<<a[i+1]<<endl;
                    //x++;
                //else{
                //    flag=true;
                //    break;
                //}
                    //break;
            }
            /*if(flag==false&&a[N]<=a[0])
                cout<<"YES\n";
            else
                cout<<"NO\n";*/
        }
    }
}
