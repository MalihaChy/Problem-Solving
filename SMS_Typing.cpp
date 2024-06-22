#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();
    for(int j=1; j<=t; j++)
    {
        string a;
        int cnt=0;
        getline(cin,a);
        for(int i=0; a[i]; i++)
        {
            if(a[i]=='a'||a[i]=='d'||a[i]=='g'||a[i]=='j'||a[i]=='m'||a[i]=='p'||a[i]=='t'||a[i]=='w'||a[i]==' ')
                cnt+=1;
            else
            {
                if(a[i]=='b'||a[i]=='e'||a[i]=='h'||a[i]=='k'||a[i]=='n'||a[i]=='q'||a[i]=='u'||a[i]=='x')
                    cnt+=2;
                else
                {
                    if(a[i]=='c'||a[i]=='f'||a[i]=='i'||a[i]=='l'||a[i]=='o'||a[i]=='r'||a[i]=='v'||a[i]=='y')
                        cnt+=3;
                    else
                    {
                        if(a[i]=='s'||a[i]=='z')
                            cnt+=4;
                    }
                }
            }
        }
        printf("Case #%d: %d\n",j,cnt);
    }
}
