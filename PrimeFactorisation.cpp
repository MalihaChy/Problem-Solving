#include<bits/stdc++.h>
using namespace std;

void prime_factorization(long x)
{
    long i; /* counter */
    long c; /* remaining product to factor */
    c = x;
    int cnt=0;
    while ((c % 2) == 0)
    {
        printf("%ld\n",2);
        cnt++;
        c = c / 2;
    }
    long ex=cnt+1;
    i = 3;
    cnt=0;
    while (i <= (sqrt(c)+1))
    {
        if ((c % i) == 0)
        {
            printf("%ld\n",i);
            cnt++;
            c = c / i;
        }
        else{
            i = i + 2;
            ex*=(cnt+1);
            cnt=0;
        }
    }
    if (c > 1){ printf("%ld\n",c);
    cnt++;
    ex*=(cnt+1);
    }
    cout<<endl<<ex<<endl;
}

int main()
{
    long x;
    while(1)
    {
        cin>>x;
        prime_factorization(x);
    }
}
