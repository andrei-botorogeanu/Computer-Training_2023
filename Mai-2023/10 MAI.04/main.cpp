#include <iostream>

using namespace std;
int divide_et_impera(int array[], int first, int last)
{
    if(first==last) return array[first];
    else
    {
        int middle_index=(first+last)/2;
        int a=divide_et_impera(array, first, middle_index);
        int b=divide_et_impera(array, middle_index+1, last);
        if(a<b) return a;
        else return b;
    }
}
int main()
{
    int array[]= {5,6,7,8,9,10,45,7,7,8,89,90};
    int n=sizeof( array )/sizeof( array[0] );
    int maxim;
    maxim=divide_et_impera(array, 0, n-1);
    cout<<maxim;
    return 0;
}
