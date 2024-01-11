/*
Merge Sort = sortare prin interclasare
Divide et impera:
*/
#include <iostream>
#include <vector>
#define FIN "algsort.in"
#define FOUT "algsort.out"
#define MAXN 100
#define pb push_back

using namespace std;

class Container {

      public:
      //constructorul clasei
      Container(int x) : n(x){
        //n(x) <=> n = x

      }

      void added(int elem) {

           vec.pb(elem);
      }

      void display() {

         for(int i = 0; i < n; ++i) cout<<vec[i]<<" ";
      }

      void sorted() {

           _divide( 0, n - 1);
           //       low, high
      }

      private:
      vector<int> vec;
      int n, m;

      void _divide(int low, int high) {
           cout<<"Divide["<<low<<", "<<high<<"]"<<endl;
           //daca lo == hi return
           //conditia de iesire din recursivitate
           if(low == high) return;
           int middle = (low + high)>>1;//luam jumatatea intervalului
           cout<<"Interclaseaza LOW="<<low<<" "<<"MIDDLE="<<middle<<" "<<"HIGH="<<high<<"\n";
           _divide(low, middle);
           _divide(middle+1, high);
           _interclasare(low, middle, high);
      }


                            //0       0       1
      void _interclasare(int low, int m, int high) {

            int i = low, j = m + 1, k = low;
            int aux[MAXN];

            while(i <= m && j <= high) {
                  if(vec[i] < vec[j]) aux[k++] = vec[i++];
                  else
                                      aux[k++] = vec[j++];
            }

            while(i<=m) aux[k++] = vec[i++];
            while(j<=high) aux[k++] = vec[j++];

            for(int i = low; i <= high; ++i) vec[i] = aux[i];
      }
};

int main(int argc, char const *argv[]) {

  int elem, n;

  freopen(FIN, "r", stdin);

  cin>>n;

  Container container( n );

  for(int i = 0; i < n; ++i) {
    cin>>elem;
    container.added( elem );
  }

  container.sorted();

  container.display();

  return 0;
}
