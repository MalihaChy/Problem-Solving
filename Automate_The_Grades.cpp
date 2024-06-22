#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        int ar[4];
        int total=0;
        for(int j=0; j<4; j++)
        {
            cin>>ar[j];
            total+=ar[j];
        }
        int test[3];
        cin>>test[0]>>test[1]>>test[2];
        sort(test,test+3);
        total+=((test[1]+test[2])/2);
        if(total>=90)
            printf("Case %d: A\n",i);
        else
        {
            if(total>=80)
                printf("Case %d: B\n",i);
            else
            {
                if(total>=70)
                    printf("Case %d: C\n",i);
                else
                {
                    if(total>=60)
                        printf("Case %d: D\n",i);
                    else
                    {
                        if(total<60)
                            printf("Case %d: F\n",i);
                    }
                }
            }
        }
    }
}
