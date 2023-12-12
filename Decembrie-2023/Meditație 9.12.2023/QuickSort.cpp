#include<iostream>
#define FIN "algsort.in"
#define FOUT "algsort.out"
using namespace std;
int v[500000], n ;
void read()
{
	freopen(FIN, "r", stdin);
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &v[i]);
}
void quick_sort(int low, int high)
{
	int pivot = v[(low+high)>>1],
		i=low, j=high;
	while(i<=j){
		while( v[i]< pivot ) 
			i++;
		while( v[j]> pivot )
			j--;
		if(i<=j) {
			int temp = v[i];
			v[i] = v[j];
			v[j] = temp;
			i++; j--;
		}
 	}
// 				i>>>>	high
// low 	j<<<<
	if( low < j ) quick_sort(low, j);
	if( i < high ) quick_sort(i, high );
}

void write()
{
	freopen(FOUT, "w", stdout);
	for(int i=0; i<n; i++)
		printf("%d ", v[i] );
}
int main()
{
	read();
	quick_sort(0, n-1);
	write();
}