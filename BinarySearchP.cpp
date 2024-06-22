#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,Q,temp,high,low,mid;
    vector<int>marble,query;//position,flag;

    for(int j=1;j<=65;j++){

        scanf("%d%d",&N,&Q);
        if(N==0 && Q==0)
            break;
        else{
        for(int i=0;i<N;i++){
            scanf("%d",&temp);
            marble.push_back(temp);
        }
        for(int i=0;i<Q;i++){
            scanf("%d",&temp);
            query.push_back(temp);
        }
        sort(marble.begin(),marble.end());
        int position[Q],flag[Q];

        for(int i=0;i<query.size();i++){
            high=marble.size()-1;
            low=0;
            //position.push_back(0);
            //flag.push_back(0);
            while(low<=high){
                mid=(low+high)/2;
                if(marble[mid]>query[i])
                    high=mid-1;
                else{
                    if(marble[mid]<query[i])
                        low=mid+1;
                    else{
                        position[i]=mid;
                        flag[i]=1;
                        break;
                    }
                }
            }
        }
        printf("CASE# %d:\n",j);
        for(int i=0;i<query.size();i++){

            if(flag[i]==1)
                printf("%d found at %d\n",query[i],position[i]+1);
            else
                printf("%d not found\n",query[i]);

        }
        marble.clear();
        query.clear();
        //flag.clear();
        //position.clear();
        }
    }
}
