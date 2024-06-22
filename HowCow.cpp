#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int n;
        cin>>n;
        int ar[n][2];
        for(int i=0;i<n;i++){
            cin>>ar[i][0];
            cin>>ar[i][1];
        }
        printf("Case %d:\n",j);
        for(int i=0;i<n;i++){
            if(ar[i][0]>=x1&&ar[i][0]<=x2){
                if(ar[i][1]>=y1&&ar[i][1]<=y2)
                    printf("Yes\n");
                else
                    printf("No\n");
            }
            else
                printf("No\n");
        }
    }
}
