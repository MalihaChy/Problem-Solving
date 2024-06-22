#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int cnt;
    int st,et,n;
    priority_queue< pair<int,int> >pq;
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&st,&et);
            pq.push(make_pair(-et,-st));
        }
        /*
        printf("hello\ln");
        for(int i=0;i<n;i++)
        {
            printf("%d %d\n",-pq.top().first,-pq.top().second);
            pq.pop();
        }
        */
        cnt=1;
        pair<int,int>a,b;
        a=pq.top();
        pq.pop();
        while(!pq.empty())
        {
            b=pq.top();
            pq.pop();
            if((-b.second)>=(-a.first)){
                cnt++;
                a=b;
            }
        }
        printf("%d\n",cnt);
    }
}
