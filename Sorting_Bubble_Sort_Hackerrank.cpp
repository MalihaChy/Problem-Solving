#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, num_swap = 0;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)cin>>ar[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                num_swap++;
                swap(ar[j], ar[j + 1]);
            }
        }
    }
    cout<<"Array is sorted in "<<num_swap<<" swaps.\n";
    cout<<"First Element: "<<ar[0]<<endl;
    cout<<"Last Element: "<<ar[n-1]<<endl;
}
