#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ar[10];
    while(cin>>ar[0])
    {
        int black=0,white=0;
        for(int i=1;i<10;i++)
            cin>>ar[i];
        if(ar[0][1]==ar[1][1]&&ar[1][1]==ar[2][1]&&ar[2][1]==ar[3][1]&&ar[3][1]==ar[4][1]&&ar[0][0]+1==ar[1][0]&&ar[1][0]+1==ar[2][0]&&ar[2][0]+1==ar[3][0]&&ar[3][0]+1==ar[4][0])
            black++;
        if(ar[5][1]==ar[6][1]&&ar[6][1]==ar[7][1]&&ar[7][1]==ar[8][1]&&ar[8][1]==ar[9][1]&&ar[5][0]+1==ar[6][0]&&ar[6][0]+1==ar[7][0]&&ar[7][0]+1==ar[8][0]&&ar[3][0]+1==ar[9][0])
            white++;
        if(black==1&&white==0)cout<<"Black wins.\n";
        else if(black==0&&white==1)cout<<"White wins.\n";
        else if(black==0&&white==0){

        }
    }
}
