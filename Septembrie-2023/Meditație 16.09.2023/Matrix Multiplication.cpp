#include <iostream>
using namespace std;
int main() {
  // Nr de coloane din prima sa fie la fel cu nr de linii din a doua
  // matrice
  int mat1[101][101], mat2[101][101], mat3[101][101], n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> mat1[i][j];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> mat2[i][j];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      for (int k = 0; k < n; k++) {
        mat3[i][j] += mat1[i][k] * mat2[k][j];
      }
      
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << mat3[i][j] << " ";
    }
    cout << endl;
  }
}