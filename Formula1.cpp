#include<bits/stdc++.h>
using namespace std;

int main()
{
    int g,p,s,k,z;
    while(1)
    {
        cin>>g>>p;
        if(g==0&&p==0)return 0;
        int ar[g+1][p+1];
        for(int i=0; i<g; i++)
        {
            for(int j=1; j<=p; j++)
            {
                cin>>ar[i][j];
            }
        }
        cin>>s;
        for(int i=0; i<s; i++)
        {
            cin>>k;
            for(int i=0; i<=p; i++)ar[g][i]=0;
            for(int j=1; j<=k; j++)
            {
                cin>>z;
                for(int x=0; x<g; x++)
                {
                    for(int y=1; y<=p; y++)
                    {
                        if(ar[x][y]==j)
                        {
                            ar[g][y]+=z;
                            //break;
                        }
                    }
                }
            }
            int big=0;
            for(int x=1; x<=p; x++)
            {
                if(ar[g][x]>big)big=ar[g][x];
            }
            int x;
            for(x=1; x<=p; x++)
            {
                if(ar[g][x]==big)
                {
                    cout<<x;
                    break;
                }
            }
            for(x=x+1; x<=p; x++)
            {
                if(ar[g][x]==big)cout<<" "<<x;
            }
            cout<<endl;
        }
    }
}
