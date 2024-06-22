#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF){
        if(x==0&&y==0)
            cout<<"On Origin\n";
        else{
            if((x>0||x<0)&&y==0)
                cout<<"On X-axis\n";
            else{
                if(x>0&&y>0)
                    cout<<"On 1st Quadrent\n";
                else{
                    if(x==0 && (y>0||y<0))
                        cout<<"On Y-axis\n";
                    else{
                        if(x<0&&y>0)
                            cout<<"On 2nd Quadrent\n";
                        else{
                            if(x<0&&y<0)
                                cout<<"On 3rd Quadrent\n";
                            else{
                                if(x>0&&y<0)
                                    cout<<"On 4th Quadrent\n";
                            }
                        }
                    }
                }
            }
        }
    }
}

//On Origin, On X-axis, On Y-axis, On 1st Quadrent, On 2nd Quadrent, On 3rd Quadrent, On 4th Quadrent)
