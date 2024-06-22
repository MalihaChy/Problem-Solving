#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,K;
    scanf("%d%d",&N,&K);
    vector<int>v;
    for(int i=1;i<=N;i++)
        v.push_back(i);

    if(N&1)
        K=K%2;
    else
        K=K%4;
    if(K==0){
        for(int i=0;i<v.size();i++)
            printf("%d ",v[i]);
        printf("\n");
        return 0;
    }
    deque<int>q;
    for(int i=1;i<=K;i++){
        for(int j=0;j<v.size();j+=2){
            q.push_back(v[j]);
        }

        for(int j=1;j<v.size();j+=2)
        {
            q.push_back(v[j]);
        }


        v.clear();
        int l=q.size();
        for(int j=0;j<l;j+=2){
            if(q.size()!=0){
                v.push_back(q.front());
                //cout<<q.front()<<" ";
                q.pop_front();
                //cout<<v[j];
            }

            if(q.size()!=0){
                v.push_back(q.back());
                //cout<<q.back()<<" ";
                q.pop_back();
                //cout<<v[j+1];
            }
            if(q.size()==0){
                    cout<<endl;
                break;
            }
           // for(int j=0;j<v.size();j++)
            //printf("%d ",v[j]);
        printf("\n");
        }

//cout<<"Hi"<<" ";

    }
   // reverse(v.begin(),v.end());
     //   for(int j=0;j<v.size();j++)
       //     printf("%d ",v[j]);
       // printf("\n");

}
