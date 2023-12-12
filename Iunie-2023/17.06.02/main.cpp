#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("algsort.in");
ofstream fout("algsort.out");
int n, array[500001];
void quicksort(int limit_i, int limit_s)
{
    int i,j;/// 2 variabile in care tinem minte limita inf. si limita sup.
    i=limit_i, j=limit_s;
    int m= array[(i+j)>>1];
    /// inseamna elem. din mijloc
    while(i<=j)
    {
        while( array[i]<m )
             ///m este un pivot si compar in stanga pivotului un elem care este mai mare
            ///si in stanga un elem care este mai mic si se face pana cand limita inf. < limita sup.
        {
            i++;
        }
        while( array[j]>m )
        {
            j--;
        }
        if(i<=j)
        {
            swap(array[i], array[j]);
            i++;
            j--;
        }
    }
    if(limit_i<j)
        quicksort(limit_i, j);
    if(i<limit_s)
        quicksort(i, limit_s);

}
int main()
{
    fin>>n;
    ///n=sizeof( array )/sizeof( array[0] ) - 1;
    for(int i=0; i<n; i++)
       fin>>array[i];
    quicksort(0,n-1);
    for(int i=0; i<n; i++)
        fout<<array[i]<< " ";
    return 0;
}
