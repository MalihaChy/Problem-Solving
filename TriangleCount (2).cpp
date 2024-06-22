#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,tm,cnt=0;
    scanf("%d",&N);
    //int ar[N];
    vector<int>v;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&tm);
        v.push_back(tm);
    }
    sort(v.begin(),v.end());
    //for(int i=0;i<N;i++)
        //printf("%d ",v[i]);
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            int sum=v[i]+v[j];
            for(int k=j+1;k<N;k++)
            {
                if(sum>v[k])
                {
                    cnt++;
                }
            }
        }

    }
    printf("%d\n",cnt);
}
