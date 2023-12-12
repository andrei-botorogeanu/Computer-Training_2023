#include <stdio.h>
#include <time.h>
#include <math.h>

double sink;

int main (void)
{
  clock_t start = clock();

  //------------------------------------
  //algoritmul nostru
  //------------------------------------

  clock_t end = clock();

//pentru C language
  printf("%ld - %ld", start, end);

//pentru c++ language
//  cout<<start<<" - "<<end;

  double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

  printf("for loop took %f seconds to execute \n", cpu_time_used);
}
