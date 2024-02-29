#include <iostream>
using namespace std;
int euclid(int a, int b)
{
    while(a!=b)
    {
        if(a>b) a-=b;
        else b-=a;
    }
    return a;
}
int divide_et_impera(int array[], int first, int last)
{
    if(first==last) return array[first];
    else
    {
        int middle_index=(first+last)/2;
        int a = divide_et_impera(array, first, middle_index);
        int b = divide_et_impera(array, middle_index+1, last);
        return euclid(a,b);
    }
}
int main()
{
    int array[] = {6,8,10,20,100};
    int n = sizeof( array ) / sizeof( array[0] );
    int CMMDC;
    CMMDC = divide_et_impera(array, 0, n-1);
    cout << CMMDC;
    return 0;
}
