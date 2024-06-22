#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(1)
    {
        cin>>N;
        if(N==0)
            break;
        queue<int>q;
        for(int i=1; i<=N; i++)
            q.push(i);

        vector<int>v;
        while(q.size()>1)
        {
            v.push_back(q.front());
            q.pop();

            if(q.size()>1)
            {
                q.push(q.front());
                q.pop();
            }
        }
        printf("Discarded cards: %d,",v[0]);
        for(int i=1; i<v.size(); i++)
        {
            cout<<" "<<v[i];
            if(i<v.size()-1)
                cout<<",";
        }
        cout<<endl;
        printf("Remaining card: %d\n",q.front());
        q.pop();
    }
}
