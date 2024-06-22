#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c,k;
    cin>>r>>c>>k;
    bool ar[r+1][c+1];
    memset(ar,false,sizeof(ar));
    int x1[k],y1[k];
    int x,y,ans=100000000;

    for(int i=0;i<k;i++)
        cin>>x1[i]>>y1[i];

    for(int i=0;i<k;i++)
    {
        x=x1[i];
        y=y1[i];
        ar[x][y]=true;

        if(x-1<=r&&y-1<=c)
        {
            if(ar[x][y-1]&&ar[x-1][y-1]&&ar[x-1][y]){
                cout<<i+1<<endl;
                ans=0;
                break;
            }
        }

        if(x-1<=r&&y+1<=c)
        {
            if(ar[x-1][y]&&ar[x-1][y+1]&&ar[x][y+1])
            {
                cout<<i+1<<endl;
                ans=0;
                break;
            }
        }

        if(y+1<=c&&x+1<=r)
        {
            if(ar[x][y+1]&&ar[x+1][y+1]&&ar[x+1][y])
            {   ans=0;
                cout<<i+1<<endl;
                break;
            }
        }

        if(y-1<=c&&x+1<=r)
        {
            if(ar[x][y-1]&&ar[x-1][y-1]&&ar[x-1][y])
            {
                ans=0;
                cout<<i+1<<endl;
                break;
            }

        }
    }

    if(ans!=0)cout<<0<<endl;
}
