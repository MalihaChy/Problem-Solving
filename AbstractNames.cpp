#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    getchar();
    while(T--){
        string a,b;
        getline(cin,a);
        getline(cin,b);
        if(a.size()!=b.size())
            cout<<"No\n";
        else{
            bool flag=false;
            for(int i=0;a[i];i++){
                if(a[i]!=b[i]){
                    if((a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')&&(b[i]!='a'&&b[i]!='e'&&b[i]!='i'&&b[i]!='o'&&b[i]!='u')){
                        flag=true;
                        break;
                    }
                }
            }
        if(flag)
            cout<<"No\n";
        else
            cout<<"Yes\n";
        }
    }
}
