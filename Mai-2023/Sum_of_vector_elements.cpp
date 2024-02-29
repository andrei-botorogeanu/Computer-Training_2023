#include <iostream>
using namespace std;

int divide_et_impera(int array[], int first, int last)
{
    if( first == last )   return array[first];
    else {
        int middle_index;
        middle_index = ( first + last ) / 2;
        int a = divide_et_impera(array, middle_index+1, last),
            b = divide_et_impera(array, first, middle_index);
        return a + b;
    }
}
int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof( array ) / sizeof( array[0] );
    
    cout << "The sum of all elements in the vector is: \n";
    cout << divide_et_impera(array, 0, n-1);
    return 0;
}
