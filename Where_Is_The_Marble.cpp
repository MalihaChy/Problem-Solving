#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,Q,t=0;
    while(1)
    {
        cin>>N>>Q;
        if(N==0&&Q==0)
            break;
        int ar[N];
        for(int i=0; i<N; i++)
            cin>>ar[i];
        sort(ar,ar+N);
        int ar2[Q];
        for(int i=0; i<Q; i++)
            cin>>ar2[i];
        printf("CASE# %d:\n",++t);
        int flag=0;
        for(int i=0; i<Q; i++)
        {
            flag=0;
            for(int j=0; j<N; j++)
            {
                if(ar2[i]==ar[j])
                {
                    printf("%d found at %d\n",ar2[i],j+1);
                    j=N;
                    flag=1;
                }
                else
                {
                    //if(ar[j]>ar2[i]||ar[j]<ar2[i]&&flag==0)
                    if(flag==0)
                    {
                        printf("%d not found\n",ar2[i]);
                        j=N;
                    }
                }
            }
        }
    }
}
