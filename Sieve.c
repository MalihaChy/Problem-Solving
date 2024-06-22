#include<bits/stdc++.h>
using namespace std;
int main()
{
    const int SIZE = 1000000;
const int LIMIT = sqrt(SIZE)+1;

bool prime[SIZE];

	void sieve() {
		for(int i=0;i<SIZE;i++) prime[i]=true;
		prime[1]=false;
		for(int i=2;i<=LIMIT;i++)
			if(prime[i])
				for(int j=2*i;j<SIZE;j+=i)
					prime[j]=false;

	}

	bool isPrime(int n) {
		return prime[n];
}
