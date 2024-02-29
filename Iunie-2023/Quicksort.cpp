#include<bits/stdc++.h>
#include<vector>
using namespace std;
int n;
vector<int> myArray;
void quicksort(int limit_left, int limit_right)
{
/*  
limit_left and limit_right
are two elements that keep track of the upper and lower limit. */
        int i = limit_left, j = limit_right,
            m = myArray[(i+j)>>1];
// "m" is the element in the middle
    while(i<=j)
    {
        while( myArray[i] < m )
            i++;
//"m" is a pivot and we compare to the left of the pivot an element that is larger and
// to the left an element that is smaller and is done as long as i < j
        while( myArray[j] > m )
            j--;
        if(i<=j) {
            swap( myArray[i], myArray[j] );
            i++;
            j--;
        }
    }
    if(limit_left < j)
        quicksort(limit_left, j);
    
    if(i<limit_right)
        quicksort(i, limit_right);
}
int main()
{
    cin>>n;
    
    myArray.resize(n+1);   
    
    for(int i = 0; i < n; i++)
       cin >> myArray[i];
    
    quicksort(0, n-1);
    
    for(int i = 0; i < n; i++)
        printf("%d ", myArray[i] );
    return 0;
}