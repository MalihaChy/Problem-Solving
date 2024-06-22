#include<bits/stdc++.h>
using namespace std;

struct node
{
    bool endmark;
    node* next[26 + 1];
    int cnt;
    node()
    {
        endmark = false;
        for (int i = 0; i < 26; i++)
            next[i] = NULL;
        cnt=0;
    }
} * root;
void insert(string str, int len)
{
    node* curr = root;
    for (int i = 0; i < len; i++)
    {
        int id = str[i] - 'a';
        if (curr->next[id] == NULL)
            curr->next[id] = new node();
        //curr->cnt++;
        curr = curr->next[id];
        curr->cnt++;
    }
    curr->endmark = true;
}
int search(string str, int len)
{
    node* curr = root;
    for (int i = 0; i < len; i++)
    {
        int id = str[i] - 'a';
        if (curr->next[id] == NULL)
            return 0;
        curr = curr->next[id];
    }
    //if(curr->endmark)return curr->cnt+1;
    //else
    return curr->cnt;
}
void del(node* cur)
{
    for (int i = 0; i < 26; i++)
        if (cur->next[i])
            del(cur->next[i]);

    delete (cur);
}
int main()
{
    root = new node();
    int num_word;
    cin >> num_word;
    int query;
    cin >> query;
    string str;
    for (int i = 1; i <= num_word; i++)
    {
        cin>>str;
        insert(str, str.size());
    }
    for (int i = 1; i <= query; i++)
    {
        cin>>str;
        cout<<search(str,str.size())<<endl;
    }
    del(root);
    return 0;
}
