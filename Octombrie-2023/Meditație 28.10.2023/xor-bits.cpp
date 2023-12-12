#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int a, b, c;

  cout<<"a = ";
  cin>>a;
  cout<<"b = ";
  cin>>b;
  c = a^b;
  cout<<"Aplicand XOR operator pe a si b a^b = : "<<c;
  //  a = 5     5:2 = 2 rest 1
  //            2:2 = 1 rest 0
  //            1:2 = 0 rest 1
  //  5 = 101

  //  b = 10
  //10 : 2 = 5 rest 0
  //5 : 2 = 2 rest 1
  //2 : 2 = 1 rest 0
  //1:2 = 0 rest 1
  //10 = 1010
  //
  //a ^ b = 0101 ^ 1010
  // 0101
  // 1010
  // 1111 -> in baza 10
  // 15
  //a^=b  a = a^b
  //a+=1 <=> a = a + 1

  return 0;
}
