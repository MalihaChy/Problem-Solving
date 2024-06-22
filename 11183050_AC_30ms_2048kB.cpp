#include<bits/stdc++.h>
using namespace std;

int cost[5][5];
 bool vis[5][5];
queue<int>qx,qy;
int main()
{
    vector<int>v[5];

    int temp;
    int sx,sy;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&temp);
            if(temp==1){
                vis[i][j]=true;
                sx=i;
                sy=j;
            }
            v[i].push_back(temp);
        }
    }
    int dx[]={-1,0,1,0},dy[]={0,-1,0,1};
    int ux,uy;

    qx.push(sx);
    qy.push(sy);
    //cout<<sx<<" "<<sy<<endl;
    while(qx.empty()!=true){

        int vx=qx.front();
        int vy=qy.front();
        //cout<<vx<<" "<<vy<<endl;
        for(int i=0;i<4;i++){
            ux=vx+dx[i];
            uy=vy+dy[i];
            if(ux>=0&&uy>=0&&ux<5&&uy<5){
                if(vis[ux][uy]!=true){
                    vis[ux][uy]=true;
                    qx.push(ux);
                    qy.push(uy);
                    cost[ux][uy]=cost[vx][vy]+1;
                }
            }
        }
        qx.pop();
        qy.pop();
    }
    /*for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<vis[i][j] << " ";
        }
        printf("\n");
    }*/
    printf("%d\n",cost[2][2]);
}
