#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,in,out;
    vector<int>v;
    queue<int>q;
    while(1){
        scanf("%d",&n);
        if(n==0)
            break;
        for(int i=1;i<=n;i++)
        {
            q.push(i);
        }
        while(1){
            if(q.size()!=1){
                out=q.front();
                q.pop();
                v.push_back(out);
            }
            if(q.size()!=1){
                in=q.front();
                q.pop();
                q.push(in);
            }
            if(q.size()==1){
                printf("Discarded cards: %d",v[0]);
                for(int i=1;i<v.size();i++){
                    printf(", %d",v[i]);
                }
                printf("\nRemaining card: %d\n",q.front());
                v.clear();
                while(q.empty()!=1)
                    q.pop();
                break;
            }
        }
    }
}
