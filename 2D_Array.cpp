#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[6][6];
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)cin>>ar[i][j];
    }
    int mx = INT_MIN, temp;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            temp = ar[i][j] + ar[i][j+1] + ar[i][j+2];
            temp += ar[i+1][j+1];
            temp += ar[i+2][j] + ar[i+2][j+1] + ar[i+2][j+2];
            if(temp > mx)mx = temp;
        }
    }
    cout<<mx<<endl;
}
