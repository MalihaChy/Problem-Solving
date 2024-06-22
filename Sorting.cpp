#include<bits/stdc++.h>
using namespace std;

int main()
{

    int ar[15] = {15, 14, 13, 2, 6, 9, 1, 15, 0, -1, 10, 5, 3, 12, 43};
    cout<<"Unsorted Array : \n";
    for(int i=0;i<15;i++)cout<<ar[i]<<" ";
    cout<<endl<<endl;

    int sz = 15-1;
    for(int i=0;i<sz;i++)
    {
        for(int j=0;j<sz-i;j++)
        {
            if(ar[j]>ar[j+1])swap(ar[j+1], ar[j]);
        }
    }

    cout<<"Sorted Array : \n";
    for(int i=0;i<15;i++)cout<<ar[i]<<" ";
    cout<<endl<<endl;


    /// ////////////////////////////////////////////////////////////////////////


    int ar[15] = {15, 14, 13, 2, 6, 9, 1, 15, 0, -1, 10, 5, 3, 12, 43};
    cout<<"Unsorted Array : \n";
    for(int i=0;i<15;i++)cout<<ar[i]<<" ";
    cout<<endl<<endl;

    int sz = 15;
    for(int i=0;i<sz;i++)
    {
        int minimum = i;
        for(int j=i+1;j<sz;j++)
        {
            if(ar[j]<ar[minimum])minimum=j;
        }
        swap(ar[i], ar[minimum]);
    }

    cout<<"Sorted Array : \n";
    for(int i=0;i<15;i++)cout<<ar[i]<<" ";
    cout<<endl<<endl;


    /// //////////////////////////////////////////////////////////////////////

    int ar[15] = {15, 100, 13, 2, 6, 9, 1, 15, 0, -1, 10, 5, 3, 12, 43};
    cout<<"Unsorted Array : \n";
    for(int i=0; i<15; i++)cout<<ar[i]<<" ";
    cout<<endl<<endl;

    int sz = 15;
    for(int i=0; i<sz; i++)
    {
        int temp = ar[i];
        int j = i;
        while(j>0 && temp<ar[j-1])
        {
            ar[j]=ar[j-1];
            j--;
        }
        ar[j] = temp;
    }

    cout<<"Sorted Array : \n";
    for(int i=0; i<15; i++)cout<<ar[i]<<" ";
    cout<<endl<<endl;


    /// ///////////////////////////////////////

    void merge_sort (int A[ ], int start, int end)
    {
        if( start < end )
        {
            int mid = (start + end ) / 2 ;           // defines the current array in 2 parts .
            merge_sort (A, start, mid ) ;                  // sort the 1st part of array .
            merge_sort (A,mid+1, end ) ;               // sort the 2nd part of array.

            // merge the both parts by comparing elements of both the parts.
            merge(A,start, mid, end );
        }
    }

    void merge(int A[ ], int start, int mid, int end)
    {
//stores the starting position of both parts in temporary variables.
        int p = start,q = mid+1;

        int Arr[end-start+1], k=0;

        for(int i = start ; i <= end ; i++)
        {
            if(p > mid)      //checks if first part comes to an end or not .
                Arr[ k++ ] = A[ q++] ;

            else if ( q > end)   //checks if second part comes to an end or not
                Arr[ k++ ] = A[ p++ ];

            else if( A[ p ] < A[ q ])     //checks which part has smaller element.
                Arr[ k++ ] = A[ p++ ];

            else
                Arr[ k++ ] = A[ q++];
        }
        for (int p=0 ; p< k ; p ++)
        {
            /* Now the real array has elements in sorted manner including both
                 parts.*/
            A[ start++ ] = Arr[ p ] ;
        }
    }
}
