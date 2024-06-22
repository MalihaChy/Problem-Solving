#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    scanf("%d",&N);
    set<int>s;
    s.insert(1);
    s.insert(100000);
    for(int i=1;i<=N;i++){
        int tm;
        scanf("%d",&tm);
        s.insert(tm);
    }
    vector<int>v;
    set< int > :: iterator it;
    for(it = s.begin(); it != s.end(); it++) {
        v.push_back(*it);
    }
    int big=0;
    for(int i=0;i<=(v.size()-3);i++){
        int j=i+2;
        int ans=0;
        if(v[i]==1&&v[j]==100000)
            ans=v[j]-v[i]+1;
        else
        {
            if(v[i]==1 || v[j]==100000)
                ans=v[j]-v[i];
            else
                ans=v[j]-1-v[i];

        }
        if(ans>big)
            big=ans;
    }
    printf("%d\n",big);
}
