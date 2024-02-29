#include <iostream>
using namespace std;
//fact(1)     1
//fact(2) n = 2
//fact(3) n = 3
//fact(4) n = 4
//fact(5) n = 5

int fact( int n ) {

    if(n == 1) return 1;

    else return n * fact(n-1);

}

void dfs(int node) {
      //node = 2
      //node = 3
      //node = 4
     //node = 5

     if(node == 1) return;//conditia de oprire din recursivitate

       else
              dfs( node - 1 );//dfs(4);dfs(3);dfs(2);dfs(1)

     //finalmente
     //cout<<node<<" ";
     printf("\nDupa ce a intalnit conditia de oprire recursiva:\n");

     cout<<node<<" ";

}

int main(int argc, char const *argv[]) {

  //printf("%d ", fact( 5 )) ;

  dfs( 5 );
  
  return 0;
}

//dfs(9) node = 9
//dfs(7) node = 7
//dfs(3) node = 3
//dfs(1) node = 1
//output: 9, 7, 3, 1
