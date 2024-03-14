#include <iostream>
#define size 1001
using namespace std;
// SHELL SORT

int main()
{
    int arr[size], n;
    cin>>n;
    //n=sizeof( arr )/sizeof( arr[0] );
    for(int i = 0; i < n; i++)
        cin>>arr[i] ;
    int temp, j;

    for(int dists = n/2; dists > 0; dists /= 2) {
        cout<<"\ndists="<<dists<<"\n";
        //int dist=dists;
        for(int i = dists; i < n; ++i)
        {
            int temp = arr[i];
            printf("=>>pt i=%d, avem: \n\ttemp = arr[i] = %d ", i, temp);
            for(j = i - dists; (j>=0 && arr[j]>temp); j-=dists)
            {
                printf("\n\tCand j = %d, avem: \n", j);
                arr[j+dists] = arr[j];
                 cout<<"\t\tarr[j+dists] = arr[j]= "<<arr[j];
            }
            arr[j+dists] = temp;
            printf("\n\t\tAm iesit din for(j), arr[j+dists]=arr[%d+%d] = %d \n", j, dists, temp );
        }
    }
    cout<<endl;
    for(int i=0; i<n; ++i)
        cout<<arr[i]<< " ";
    return 0;
}
