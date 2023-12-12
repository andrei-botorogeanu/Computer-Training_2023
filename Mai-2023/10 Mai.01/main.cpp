#include <iostream>
#define BINARY_SEARCH_NOT_FOUND -1
using namespace std;
int binary_search(int array[], int key, int first, int last)
{
    if( first>last ) return BINARY_SEARCH_NOT_FOUND;
    int middle_index=(first+last)/2;
    int middle_value=array[middle_index];
    if( key > middle_value)
        binary_search(array, key, middle_index+1, last);
    else if(key < middle_value )
        binary_search(array, key, first, middle_index-1);
    else return middle_index;

}
int main()
{
    int search;
    int array[]={2,3,4,5,6,7,8,9,10,12,13},n ;
    n=sizeof( array )/sizeof( array[0] );
    for(int i=0; i<n; i++)
        cout<<array[i]<< " ";
    search=binary_search( array, -8, 0, n-1);
    cout<<endl;
    if(search==-1)  cout<<"not found";
    else
    cout<<"Elementul se afla pe pozitia "<<search;

    return 0;
}
