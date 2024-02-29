#include<iostream>
using namespace std;

int N,S, v[1001];

void sort_downgrader()
{
	for( int i = 1; i < N; i++ ) {
		int j = i - 1, aux = v[i];
		while( j >= 0 && aux > v[j] ) {
			v[j+1] = v[j];
			j = j-1;
		}
		v[j+1] = aux;
	}
}
int main()
{
	cin >> N >> S;
	for(int i = 0; i < N; i++)
		cin >> v[i];
	
	sort_downgrader();
	
	for(int i = 0; i < N; i++) {
		if(S >= 0)
			cout << S / v[i] << " * " << v[i] << endl;
		S -= (S / v[i]) * v[i];
		if(!S) break;
	}
	if(S!=0)	cout<< "NO SOLUTION";
}