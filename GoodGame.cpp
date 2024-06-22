#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        int n,m;
        scanf("%d%d",&n,&m);
        string a,b,c;
        cin>>a>>b>>c;
        if(n&1){
            for(int j=0;j<c.size();j++)
                c[j]=toupper(c[j]);
            printf("Case %d: ",i);
            cout<<c<<endl;
        }
        else{
            if(c==a){
                for(int j=0;j<b.size();j++)
                    b[j]=toupper(b[j]);
                printf("Case %d: ",i);
                cout<<b<<endl;
            }
            else
                {
                    for(int j=0;j<a.size();j++)
                    a[j]=toupper(a[j]);
                printf("Case %d: ",i);
                cout<<a<<endl;
                }
        }
    }
}
