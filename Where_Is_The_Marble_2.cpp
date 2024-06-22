#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,Q,T=0;
    while(1)
    {
        cin>>N>>Q;
        if(N==0 && Q==0)
            break;
        else
        {
            int A[N],B[Q];
            for(int i=0; i<N; i++)
                cin>>A[i];
            sort(A,A+N);
            for(int i=0; i<Q; i++)
                cin>>B[i];
            printf("CASE# %d:\n",++T);
            for(int i=0; i<Q; i++)
            {
                int flag=0;
                for(int j=0; j<N; j++)
                {
                    if(B[i]==A[j])
                    {
                        printf("%d found at %d\n",B[i],j+1);
                        flag=1;
                        j=N;
                    }
                }
                if(flag==0)
                    printf("%d not found\n",B[i]);
            }
        }
    }
}
