//Binary search implemented recursively

#include <iostream>

int search_bin(int array[], int limit_left, int limit_right, int key)
{
    if( limit_left > limit_right )
        return -1;
    else {
        int m = ( limit_left + limit_left ) >> 1;
        // Same with:  (a+b)/2
        if( key < array[m] )
            return search_bin(array, limit_left, m-1, key);
        else if( key > array[m] )
            return search_bin(array, m+1, limit_right, key);
        else
            return m;
    }
}
int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9},
        n = sizeof(array) / sizeof(array[0])-1,
        key = 8;
    int answer = search_bin(array, 0, n, key );
    
    if( answer != -1 )
        printf("\n %s %d \n","The item is in position:", answer );
    else 
        printf("Not found!");

    return 0;
}