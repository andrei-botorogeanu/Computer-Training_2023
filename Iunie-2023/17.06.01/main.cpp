#include <iostream>
/// CAUTAREA BINARA IMPLEMENTATA IN MANIERA RECURSIVA
using namespace std;
int search_bin(int array[], int limit_i, int limit_s, int key)
{
    if(limit_i>limit_s)
        return -1;
    else{
        int m=(limit_i+limit_s)>>1;
        /// acelasi lucru cu (a+b)/2
        if( key < array[m] )
            return search_bin(array, limit_i, m-1, key);
        else if( key>array[m] )
            return search_bin(array, m+1, limit_s, key);
        else
            return m;
    }
}
int main()
{
    int array[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(array)/sizeof(array[0])-1;
    int key=79;
    int answer = search_bin(array, 0, n, key );
   /// int a=2,b=9;
   /// int r= (a+b)>>1;
   /// cout<<r;
   cout<< answer;
    return 0;
}
