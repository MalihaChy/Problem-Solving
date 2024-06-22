#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(b>a)
            cout<<"nao encaixa\n";
        else
        {
            char A[100],B[100];
            itoa(a,A,10);
            itoa(b,B,10);
            int length_a=strlen(A);
            int length_b=strlen(B);
            int flag=0;
            for(int i=length_b-1,j=length_a-1; i>=0; i--,j--)
            {
                if(A[j]!=B[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
                cout<<"nao encaixa\n";
            else
                cout<<"encaixa\n";
        }
    }
}
