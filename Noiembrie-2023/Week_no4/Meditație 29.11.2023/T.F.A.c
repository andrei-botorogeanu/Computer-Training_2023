#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n, // input
  i = 2, // pornim cu i = 2
  fm = 0; //factor de multiplicitate

  printf("Teorema Fundamentala a Aritmeticii:\n");
  printf("N = ");
  scanf("%d",&n);

  //primes: 2, 3, 5, 7,....
  //n = 10
  // i = 2
  // 10 : 2 = 5 rest 0
  // 100: 2 = 50 rest 0
  //50 : 2 = 25 rest 0
  // i^fm 2^2
  //fm = 0
  //n = 8
  //8 = 2^3
  do {

    fm = 0;

    while(n % i == 0) {

        fm++;

        n /= i;
    }

    if( fm ) printf("%d^%d\n", i, fm);

    i++;

  } while(!(n == 1)); //pana cand n == 1


  return 0;
}
