#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[3];
    while(scanf("%d%d%d",&ar[0],&ar[1],&ar[2])!=EOF)
    {
        sort(ar,ar+3);
        if(ar[0]*ar[0]+ar[1]*ar[1]!=ar[2]*ar[2])
            cout<<"tripla\n";
        else
        {
            int i;
            for(i=ar[0]; i>1; i--)
            {
                if(ar[0]%i==0&&ar[1]%i==0&&ar[2]%i==0)
                    break;
            }
            if(i==1)
                cout<<"tripla pitagorica primitiva\n";
            else
                cout<<"tripla pitagorica\n";
        }
    }
}
