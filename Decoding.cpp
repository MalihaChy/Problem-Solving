#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();
    for(int j=1;j<=t;j++){
        string a,b;
        getline(cin,a);
        for(int i=0;a[i];i+=2){
            string c;
            for(;;i++){
                if(a[i]>='0'&&a[i]<='9')
                    c+=a[i];
            else
                break;
            }
            int x=a[i+1]-48;
            while(x--)
                b+=a[i];
        }
        printf("Case %d: ",j);
        cout<<b<<endl;
    }
}
