#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        while(N--){
            vector<int>v;
            char str[100];
            gets(str);
            char num[10];
            int i,j=0;
            for(i=0;;i++){
                if(str[i]==' ')
                    break;
            }
            for(i=i+1;str[i];i++,j++)
                num[j]=str[i];
            //v.push_back(atoi(num));
            //sort(v.begin(),v.end());
            cout<<atoi(num)<<endl;
        }
    }
}
