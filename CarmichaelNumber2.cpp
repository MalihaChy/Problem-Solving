#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a < b)
        return gcd(b, a);
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

int power(int x, int y, int mod)
{
    if (y == 0)
        return 1;
    int temp = power(x, y / 2, mod) % mod;
    temp = (temp * temp) % mod;
    if (y % 2 == 1)
        temp = (temp * x) % mod;
    return temp;
}

bool isCarmichaelNumber(int n)
{
    for (int b = 2; b < n; b++) {
        if (gcd(b, n) == 1){
            if (power(b, n - 1, n) != 1)
                return false;
        }
    }
    return true;
}

int main()
{
    int x;
    while(cin>>x && x)
    {
        if(isCarmichaelNumber(x))printf("The number %d is a Carmichael number.\n",x);
        else printf("%d is normal.\n",x);
    }
}
