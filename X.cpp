#include<bits/stdc++.h>
using namespace std;

//#define ll long long

struct work
{
    int w,p,id;
    bool taken;
} W;

bool cmp(work a,work b)
{
    if(a.w==b.w)
    {
        return a.p>b.p;
    }
    else return a.w<b.w;
}

bool cmp2(work a, work b)
{
    if(a.p==b.p)
    {
        return a.id<b.id;
    }
    else return a.p>b.p;
}

int main()
{
    int t;
    int n,x,w,p;
    scanf("%d",&t);
    for(int tc=1; tc<=t; tc++)
    {
        vector< work >v;
        int sum=0;
        scanf("%d%d",&n,&x);
        for(int i=0; i<n; i++)
        {
            scanf("%d%d",&W.w,&W.p);
            W.id=i;
            W.taken=false;
            v.push_back(W);
            sum+=W.w;
        }
        printf("CASE #%d:\n",tc);
        if(sum<=x)printf("Hurray! You can finish all your tasks!\n");
        else
        {
            sum=0;
            //ll cnt=0;
            sort(v.begin(),v.end(),cmp);
            //for(int i=0;i<n;i++)printf("%d ",v[i].id);
            for(int i=0;; i++)
            {
                sum+=v[i].w;
                if(sum>x)
                {
                    break;
                }
                else if(sum<=x)
                {
                    v[i].taken=true;
                    //cnt++;
                }
            }
            sort(v.begin(),v.end(),cmp2);
            printf("Oh no! You will have the following tasks remaining:\n");
            for(int i=0; i<n; i++)
            {
                if(v[i].taken==false)printf("TASK #%d\n",v[i].id);
            }
            //for(int i=0;i<n;i++)printf("%d ",v[i].id);

        }
    }
}
