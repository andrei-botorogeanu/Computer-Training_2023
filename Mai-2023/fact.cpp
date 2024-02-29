#include <iostream>

using namespace std;

//nivelul 1=> n:4
//functia recursiva factorial
int fact(int n) {
  if(n == 1) {
    return 1;
  } else {
    //dupa ce se apeleaza functia fact se creeaza in memoria computerului o stiva sistem
    //pe primul nivel
    return n * fact(n-1);
    //5 * fact(4)
    //4 * fact(3)
    //3 * fact(2)
    //2 * fact(1)
    //1
    //fact(5) = 1*2*3*4*5

  }
}

int main(int argc, char const *argv[]) {
  int n;
  cout<<"n=";
  cin>>n;
  // citim 5 de la tastatura
  //se apeleaza fact(5)
  cout<<fact(n);
  return 0;
}
/*
stiva:
nivelul 4=>n = 1 ||
nivelul 3=>n = 2 ||
nivelul 2=>n = 3 ||
nivelul 1=>n = 4 ||
                 \/

apel functie fact(4)
*/
