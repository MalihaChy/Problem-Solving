#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;
    int n;
    int out,in;
    vector<int>v;

    while(1){
        scanf("%d",&n);
        if(n==0)
            break;
        for(int i=1;i<=n;i++)
            q.push(i);
        //cout<<q.size()<<endl;
        for(int i=1;i<=n;i+=2){
            //if(q.size()!=1){
                out=q.front();
                v.push_back(out);
                q.pop();

                in=q.front();
                q.pop();
                q.push(in);
                if(q.size()==1)
                {
                    printf("Discarded cards: %d",v[0]);
                    for(int i=0;i<v.size();i++){
                        printf(", %d",v[i+1]);
                    }
                    printf("\nRemaining card: %d\n",q.front());
                    v.clear();
                    while(q.empty()!=true)
                        q.pop();
                    break;
                }

            //}
        }


    }
}


        /*
        printf("Discarded cards: 1");
        for(int i=3;i<=n;i+=2)
            printf(", %d",i);

        if(n&1==0){
            q.push(n);
        }

        */



            /*
        for(int i=1;i<=n;i++){
            cout<<q.front()<<endl;
            q.pop();
        }
*/



                //else{

              //  }
    //    }

        /*
            q.push(i);
        vector<int>out;
        for(int i=0;;i++){
            if(q.size()==1)
                break;
            else{
                int in=q.front();
                q.pop();
                q.push(in);

                int die=q.front();
                out.push_back(die);
                q.pop();
        }
        }
        printf(", ");
        for(int i=0;i<out.size();i++){
            printf("%d, ",out[i]);
        }

        printf("\nRemaining card: %d\n",q.front());*/

   // }
//}
