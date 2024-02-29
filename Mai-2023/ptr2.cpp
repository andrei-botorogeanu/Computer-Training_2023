#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  //variabila de tip int
  int a;
  //variabila de tip float
  float b;

  b = 1.2;

  //variabila pointer de tip int
  int *ptr1;
  //variabila pointer de tip float
  float *ptr2;

  a = 100;

  ptr2 = &b;

  //ptr2 = &a; // error: cannot convert ‘int*’ to ‘float*’ in assignment
  cout<<*ptr2;

  return 0;

  
}
