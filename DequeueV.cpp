#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int>ada;
    int Q,length;
    string s;
    scanf("%d",&Q);
    while(Q--){

        scanf("%s",&s);
        length=s.size();
        if(length==4 || length==5){
            if(ada.empty()==1)
                printf("No job for Ada?\n");
            else{
                if(s=="back"){
                    printf("%d\n",ada.back());
                    ada.pop();
                }
                else{
                    printf("%d\n",ada.front());
                    ada.pop();
                }
            }
        }
        else{
            if(s=="reverse")
                reverse(ada.begin(),ada.end());
            else{
                if
            }
        }
}
