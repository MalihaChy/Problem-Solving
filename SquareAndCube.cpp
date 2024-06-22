#include<bits/stdc++.h>
using namespace std;

long long sqr[35000];
long long cb[1500];

void Square()
{
    for(int i=0; i<=32000; i++)
        sqr[i]=i*i;
}

void Cube()
{
    for(int i=0; i<1005; i++)
        cb[i]=i*i*i;
}

int main()
{
    int t;
    cin>>t;
    Square();
    Cube();
    while(t--)
    {
        int n;
        cin>>n;
        bool s=false,c=false;
        //int S=sqrt(n);
        //int C=cbrt(n);
        //if(S*S==n)
        for(int i=0; i<=32000; i++)
        {
            if(n==sqr[i])
            {
                s=true;
                break;
            }
        }
        //if(C*C*C==n)
        for(int i=0; i<1005; i++)
        {
            if(n==cb[i])
            {
                c=true;
                break;
            }
        }
        if(s&&c)
            cout<<"Both\n";
        else
        {
            if(s==true && c==false)
                cout<<"Perfect Square\n";
            else
            {
                if(s==false && c==true)
                    cout<<"Perfect Cube\n";
                else
                {
                    if(s==false && c==false)
                        cout<<"None\n";
                }
            }
        }
    }
}
