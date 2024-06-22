#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, z;
    while((scanf("%d", &n))!=EOF)
    {
        vector< pair<int, int> >current, goal;
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            current.push_back(make_pair(x, i));
        }
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            goal.push_back(make_pair(x, i));
        }
        sort(current.begin(), current.end());
        sort(goal.begin(), goal.end());
        int ans=0;
        int player;
        while(1)
        {
            int h=0, jump=-1;
            for(int i=0; i<n; i++)
            {
                x=current[i].second;
                y=goal[i].second;
                if(x>y)
                {
                    z=x-y;
                    h+=z;
                    if(z>jump)
                    {
                        jump=z;
                        player=i+1;
                    }
                }
            }
            if(h==0)break;
            else
            {
                y=current[player-1].second;
                current[player-1].second-=jump;
                z=current[player-1].second;
                for(int i=0; i<n; i++)
                {
                    x=current[i].second;
                    if(x>z && x<=y)current[i].second++;
                }

                ans+=jump;
            }

        }
        cout<<ans<<endl;
    }
}
