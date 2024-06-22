#include<bits/stdc++.h>
using namespace std;

struct abc
{
    int value, mark ;
} Inp [ 100020 ] ;
bool cmp ( abc A, abc B )
{
    if ( A.value == B.value ) return A.mark < B.mark ;
    return A.value < B.value ;
}

int main()
{
    int n, i, x, y, idx = 0,t;
    scanf("%d",&t);
    for(int s=1; s<=t; s++)
    {
        scanf("%d",&n);
        idx=0;
        for ( i = 0 ; i < n ; i++ )
        {
            scanf("%d%d",&x,&y);
            Inp[idx].value = x ;
            Inp[idx++].mark = 0 ;
            Inp[idx].value = y ;
            Inp[idx++].mark = 1 ;
        }
        sort(Inp, Inp+idx, cmp );
        int Ans = -10000000 ;
        int cur = 0 ;
        for ( i = 0 ; i < idx ; i++ )
        {
            if( Inp[i].mark == 0 ) cur++;
            else cur-- ;
            Ans = max(Ans, cur );
        }
        printf("Case %d: %d\n",s,Ans);
    }
    return 0 ;

}
