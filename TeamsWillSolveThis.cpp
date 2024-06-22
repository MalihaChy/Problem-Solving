#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();
    for(int i=1;i<=t;i++){
        string a,b;
        getline(cin,a);
        getline(cin,b);
        if(a==b)
            printf("Case %d: Yes\n",i);
        else{
            if(a!=b){
                string c;
                for(int j=0;a[j];j++){
                    if(a[j]!=' ')
                        c+=a[j];
                }
                if(b==c)
                    printf("Case %d: Output Format Error\n",i);
                else
                    printf("Case %d: Wrong Answer\n",i);
            }
        }
    }
}
