#include<bits/stdc++.h>
using namespace std;


/*
int BFS(int sx,int sy,int row,int col,char maze[row][col])
{
    bool vis[row][col];
    int count=0;
    memset(vis,false,sizeof(vis));
    vis[sx][sy]=true;
    int dx[]={-1,0,1,0},dy[]={0,-1,0,1};
    queue<int>qx,qy;
    qx.push(sx);
    qy.push(sy);
    while(qx.empty()){
        int vx=qx.front();
        int vy=qy.front();
        for(int i=0;i<4;i++){
            int ux=vx+dx[i];
            int uy=vy+dy[i];
            if(ux>=0&&ux<row&&uy>=0&&uy<col){
                if(maze[ux][uy]!='#' && vis[ux][uy]!=true)
                {
                    vis[ux][uy]=true;
                    qx.push(ux);
                    qy.push(uy);
                }
            }
        }
        qx.pop();
        qy.pop();
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(vis[i][j]==true)
                count++;
        }
    }
    return count;
}    */

int main()
{
    int T;
    int col,row;
    int sx,sy;
    char temp;
    scanf("%d",&T);
    for(int k=1;k<=T;k++){

        scanf("%d%d",&col,&row);
        scanf("%c",&temp);
        int maze[row][col];
        //vector<char>v[row];
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                scanf("%d",&maze[i][j]);
                //v.push_back(temp);
                if(maze[i][j]=='@'){
                    sx=i;
                    sy=j;
                }
            }
        }


        /*
        for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<< maze[i][j];
        }
        cout<<endl;
    }
    */
        bool vis[row][col];
    int count=0;
    memset(vis,false,sizeof(vis));
    vis[sx][sy]=true;
/*
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<< vis[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
*/
    int dx[]={-1,0,1,0},dy[]={0,-1,0,1};
    queue<int>qx,qy;
    qx.push(sx);
    qy.push(sy);
    while(qx.empty()){
        int vx=qx.front();
        int vy=qy.front();
        for(int i=0;i<4;i++){
            int ux=vx+dx[i];
            int uy=vy+dy[i];
            if(ux>=0&&ux<row&&uy>=0&&uy<col){
                if(maze[ux][uy]!='#' && vis[ux][uy]!=true)
                {
                    vis[ux][uy]=true;
                    qx.push(ux);
                    qy.push(uy);
                }
            }
        }
        qx.pop();
        qy.pop();
    }

    /*for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
                cout<<vis[i][j]<<" ";
        }
        cout<<endl;
    }*/

    cout<<sx<<" "<<sy<<endl;


    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(vis[i][j]==true)
                count++;
        }
    }





        //int ans=BFS(sx,sy,row,col,maze[row][col]);
        printf("Case %d: %d\n",k,count);
    }
}
