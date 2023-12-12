#include <iostream>
using namespace std;
int binsearch(int array[],int n, int key)
{
    int limit_i=0;
    int limit_s=n;

    while(limit_i<=limit_s)
    {
        int middle=( limit_i+limit_s ) / 2;
        if( key>array[middle] )
        {
            limit_i=middle+1;
        }
        else if( key<array[middle] )
        {
            limit_s=middle-1;
        }
        else return middle;
    }
    return -1;
}

int main()
{
    int array[]={1,2,3,4,5,6,7,8};
    int limit_s=sizeof(array)/sizeof(array[0])-1;

    cout<<"Elementul cautat se afla pe indexul: "<<binsearch(array, limit_s, 1)<< "\n";
cout<<"Elementul cautat se afla pe indexul: "<<binsearch(array, limit_s, 5)<<"\n";
cout<<"Elementul cautat se afla pe indexul: "<<binsearch(array, limit_s, 8)<<"\n";
cout<<"Elementul cautat se afla pe indexul: "<<binsearch(array, limit_s, 19);


    return 0;
}
