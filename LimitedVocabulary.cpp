#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    string s,big;
    int l=0;
    vector<char>v;
    while(n--){
        cin>>s;
        v.push_back(s[0]);
        for(int i=1;i<s.size();i++){
            char c=s[i];
            int j;
            for(j=0;j<v.size();j++){
                if(v[j]==c){
                    break;
                }
            }
            if(j==v.size())
                v.push_back(c);
        }
            if(v.size()<=k){
                big=s;
                if(big.size()>l){
                    l=big.size();
                }
            }
        v.clear();
    }
    if(l==0)
        printf("-1\n");
    else
        printf("%d\n",l);
}
