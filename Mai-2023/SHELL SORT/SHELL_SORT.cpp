#include <iostream>
#include<fstream>
using namespace std;
// SHELL SORT
ifstream fin("algsort.in");
ofstream fout("algsort.out");
int main()
{
    int arr[500000],n;
    fin>>n;

    //n=sizeof( arr )/sizeof( arr[0] );
    for(int i = 0; i < n; i++)
        fin>>arr[i] ;
    int temp, j;

    for(int dists = n/2; dists > 0; dists /= 2)
    {
        //int dist=dists;
        for(int i = dists; i < n; ++i)
        {
            int temp = arr[i];
            for(j = i - dists; (j>=0 && arr[j]>temp); j-=dists)
            {
                arr[j+dists] = arr[j];
            }
            arr[j+dists] = temp;
        }
    }
    fout<<endl;
    for(int i=0; i<n; ++i)
        fout<<arr[i]<< " ";
    return 0;
}
