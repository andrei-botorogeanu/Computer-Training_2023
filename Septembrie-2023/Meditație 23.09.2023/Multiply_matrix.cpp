#include<iostream>
#define DIM 50
using namespace std;
typedef struct {
	int n, m;
	int M[DIM][DIM];
} Matrix;
void read(Matrix *p)
{
	int x, y;
	cout<<"Transmiteti nr de linii si de coloane: ";
	cin>>x>>y;
//	OR
//  cin>>p->n>>p->m;
	p->n = x; //atribuim val. lui x in p->n
	p->m = y;
	for(int i=0; i<x; ++i)
		for(int j=0; j<y; ++j)
		{
			cout<< "Mat["<<i<<"]["<<j<<"]="; 
			cin>>p->M[i][j];
		// OR p->M[i][j] = A[i][j]
		}
}
int multiply(Matrix M1, Matrix M2, Matrix *pt)
{
	if(M1.n-M2.m) return 0;
	for(int i=0; i<M1.n; i++)
		for(int j=0; j<M2.m; j++)
			pt->M[i][j]=0;

	pt->n = M1.n;
	pt->m = M2.m;
	for(int i=0; i<M1.n; i++)
		for(int j=0; j<M2.m; j++)
			for(int k=0; k<M2.m; k++)
				pt->M[i][j] += M1.M[i][k] * M2.M[k][j];
	return 1;
}
void display(Matrix mat)
{
	for(int i=0; i<mat.n; i++)
	{
		for(int j=0; j<mat.m; j++)
			cout<<mat.M[i][j]<< " ";
		cout<<"\n";
	}
}
int main()
{
	Matrix A, B, C;
	read(&A);
	display(A);
	read(&B);
	display(B);
	multiply(A, B, &C);
	display(C);
}