#include <iostream>
using namespace std;

int binary_search(int array[], int key, int first, int last)
{
    if(first>last)  return -1;
    int middle_index = (first+last)/2;
    int middle_value=array[middle_index];
    if( key>middle_value )
        binary_search(array, key,middle_index+1,last);
    else if(key<middle_value)
        binary_search(array, key, first, middle_index-1);
    else return middle_index;
}
int main()
{
    int array[]={5,6,7,8,9,10,11};
    int n=sizeof(array)/sizeof(array[0]);
    int key=15;
    int search;
    search=binary_search(array, key, 0, n-1);
    if(search==-1)  cout<< "---NOT FOUND---";
    else cout<< "Elementul se afla po pozitia"<<search;
    return 0;
}
