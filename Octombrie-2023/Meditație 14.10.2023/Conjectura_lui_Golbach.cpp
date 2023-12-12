#include<iostream>
using namespace std;
int mat[100][100], n, m;
int e_prim(int n)
{
	if(n<=1)	return 0;
	else if(n==2 || n==3) return 1;
	for(int i=2; i*i<=n; i++)
		if(n%i==0)	return 0;
	return 1;
}
void golbach(int n)
{
	for(int i=2; i<= n/2; i++){
		if(e_prim(i) && e_prim(n-i)){
			cout<< n << " = "<<i<<"+"<<n-i<<endl;
		}
	}
}
int main()
{
	cin>>n>>m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++)
			cin>>mat[i][j];
		}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++)
			if( !(mat[i][j]&1) ){
				golbach(mat[i][j]);
			}	
	}
}