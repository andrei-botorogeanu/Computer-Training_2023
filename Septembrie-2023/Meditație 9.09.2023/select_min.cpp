#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int n, arr[100], min, posMin;

  cout<<"n=";
  cin>>n;

  for(int i = 0; i < n; ++i) cin>>arr[i];

  //input: 9 2 3 4 5 -1
  //metoda de selectie a minimului
  for(int i = 0; i < n - 1; ++i)  {

      min = arr[i];
      posMin = i;

      for(int j = i + 1; j < n; ++j) {
          if(arr[j] < min) {
            min = arr[j];
            posMin = j;
          }
      }

      arr[posMin] = arr[i];

      arr[i] = min;
  }

  for(int i = 0; i < n; ++i) cout<<arr[i]<<" ";

  return 0;
}
