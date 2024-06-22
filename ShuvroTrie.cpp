/*written by: Shaeekh Al Jahan*/
#include<bits/stdc++.h>
using namespace std;
struct node
{
    bool endis;
    node* next[27];
    node()
    {
         endis=false;
        for (int i=0;i<26;i++)
        {
            next[i]=NULL;

        }

    }

} * root;
void insertit( char* str,int l)
{
    node *cur = root;
    for (int i=0;i<l;i++)
    {
        int d=str[i]-'a';
        if(cur->next[d]==NULL)
        {
            cur->next[d]= new node();
        }
        cur=cur->next[d];
    }
    cur->endis=true;


}
bool searchit(char* str,int len)
{
    node *cur= root;
    for (int i=0;i<len;i++)
    {

        int d=str[i]-'a';
        if(cur->next[d]==NULL)
        {
            cout<<"str[i] "<<str[i]<<endl;

            return false;
        }

        cur=cur->next[d];
    }
    return cur->endis;

}
void del(node *cur)
{
    for (int i=0;i<26;i++)
    {
        if(cur->next[i]!=NULL)
        {
            del(cur->next[i]);
        }
    }
    delete(cur);
}
int main()
{
    root = new node();
    int n;
    cout<<"Enter number of words"<<endl;
    cin>>n;

    for (int i=0;i<n;i++)
    {
        char str[50];

        scanf("%s",str);
        //cout<<"st is "<<st<<" len is "<<strlen(st)<<endl;
        insertit(str,strlen(str));

    }
    printf("Enter query \n");
    int q;
    cin>>q;
    for (int i=0;i<q;i++)
    {
        char str[50];
        scanf("%s",str);
        if(searchit(str,strlen(str)))
        {
            cout<<"YES the word found"<<endl;

        }
        else
        {
            cout<<"Sorry :("<<endl;

        }
    }
  del(root); // deleting the whole trie;
}
/*7
abcdee
abc
ab
abcdgt
kaopl
calculation
kanbe
7
abcdee
abc
ab
abcdgt
kaopl
calculation
kanbe
*/
