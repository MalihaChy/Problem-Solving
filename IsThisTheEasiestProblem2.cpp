#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        int ar[3];
        cin>>ar[0]>>ar[1]>>ar[2];
        sort(ar,ar+3);
        if(ar[0]<0||ar[1]<0||ar[2]<0||ar[0]+ar[1]<=ar[2])
            printf("Case %d: Invalid\n",i);
        else{
            if(ar[0]+ar[1]>ar[2]){
                if(ar[0]==ar[1]&&ar[1]==ar[2]&&ar[2]==ar[0])
                    printf("Case %d: Equilateral\n",i);
                else{
                    if(ar[0]!=ar[1]&& ar[1]!=ar[2]&&ar[2]!=ar[0])
                        printf("Case %d: Scalene\n",i);
                    else
                    {

                    if(ar[0]==ar[1]||ar[1]==ar[2])
                        printf("Case %d: Isosceles\n",i);
                    }
                }
            }
        }
    }
}
