#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,temp,length;
    while(scanf("%d%d",&n,&m)!=EOF){
        set<int>A;
        length=n+m;
        for(int i=0;i<length;i++){
            scanf("%d",&temp);
            A.insert(temp);
        }

        set<int >:: iterator it;
        for(it=A.begin();it!=A.end();it++)
            printf("%d",*it);
        printf("\n");
        A.clear();
    }
}
