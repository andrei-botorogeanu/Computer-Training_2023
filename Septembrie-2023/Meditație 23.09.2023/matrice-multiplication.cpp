/*
int mat1[50][50], mat2[50][50], ....matn[50][50]

citeste(mat1)
citeste(mat2)

matrice A,B,C
*/
#include <iostream>
#define DIM 100



//using namespace std;

typedef struct {
	
	 int n,    //n = numarul de linii
	     m;    //m = numarul de coloane

	 int M[ DIM ][ DIM ];//matricea propriu-zisa

} Matrix;

int multiply(Matrix A, Matrix B, Matrix *C) {

	if(A.n - B.m) return 0;

    //initializam toate elementele cu zero
	for(int i = 0; i < A.n; ++i) {

		for(int j = 0; j < B.m; ++j) {

			C->M[i][j] = 0;

		}
	}

    //completam numarul de linii
	C->n = A.n;

    //completam numarul de coloane
	C->m = B.m;

    //algoritmul nostru
	for(int i = 0; i < A.n; ++i) {

        for(int j = 0; j < B.m; ++j) {

        	for(int k = 0; k < B.m; ++k) {

        		C->M[i][j] += A.M[i][k] * B.M[k][j];
        	}
        } 
	}

    std::cout<<"Matrix multiplication:\n";
    return 1;
}

void display(Matrix mat) {

	for(int i = 0; i < mat.n; ++i) {
         for(int j = 0; j < mat.m; ++j) {
         	printf("%d ",mat.M[i][j]);
         	//cout<<mat.M[i][j]<<" ";
         }
         printf("\n");
         //cout<<endl;
	}
}

//pointer catre Matrix, rezulta ca mat poate retine doar adrese catre tipul de data Matrix
void read(Matrix *mat) {
 
     int n, m;

     printf("Citim matrice: \n");

     printf("Numarul de linii lines = ");
     scanf("%d", &n);
     //cin>>n;

     mat->n = n;
     printf("Numarul de coloane cols = ");

     scanf("%d", &m);
     //cin>>m;
     mat->m = m;

     for(int i = 0; i < n; ++i) {
     	for(int j = 0; j < m; ++j) {
     		printf("mat[%d][%d] = ", i, j);
     		scanf("%d", &mat->M[i][j]);
     	}
     }


}


//int mat1[50][50], mat2[50][50], ....matn[50][50]

int main(int argc, char const *argv[])
{
	Matrix A, 
	       B, 
	       C, 
	       //alta variabila de tip Matrix
	       D; 

	       //ca sa accesam n,m,M[][] folosim punctul "."

	//int a,b,c;

    //printf("a=");
	//scanf("%d",&a);       
	//printf("%d", a);
	//std::cout<<"a =";	
	//std::cin>>a;
	//std::cout<<a;
	//::operatorul de rezolutie

    //&A = adresa lui A
	//read( &A );	
	//printf("Matrix1: \n");
	//display( A );
	//&B = adresa lui B
	//read(&B);
	//printf("Matrix2: \n");
	//functie de afisare a matricei;
	//display(B);

    //if(multiply(A, B, &C) == 1) {

    //	display( C );

    //} else {

    	//std::cout<<"No multiplication!";
    //}


    typedef struct Human {
         int a, 
             b;
    } Human;

    Human  var1,
          *var3;//pointer catre Human, deci retine doar adresa catre Human          
    //var1.a = 5;
    //var1.b = 7;      
    var3 = new Human;//am alocat ub HEAP spatiu pentru Human si adresa am transmis-o lui var3    
    var3->a = 44;
    var3->b = 88;
    std::cout<<var3->a;
    delete var3;
    
    int a;
    a = 8;

    ////in memoria RAM 0x123423423 a=8
    //0000 00001 
    //0000 00001
    //adunare, scadere, inmultire si impartire

    //inainte ax + b = 0 

    //if, while, a = 2, for traduse in limbaj masina -> output

    // Data Structures + Algorithms = PROGRAM (exista 1000000 de limbaje de programre)

    //structuri de date  + algoritmi = programe

    //declam P de tip de data  Matrix = structura de data care are in componenta sa:
    //n,m,M[DIM][DIM]
    Matrix A, B;
    Matrix *P;

    float x,
         *y;
    float z;   
    
    //facem o atribuire, pointerul P primeste adresa variabilei A
    P = &A;

    y = &z;

    //declari un pointer catre Matrix , asta inseamna ca asteapta sa primeasca doar adrese catre Matrix

    //p = new Matrix//alocam spatiu in HEAP pentru Matrix //adresa 0x32423423 se transmite lui p

    //sizeof(Matrix) = 100 de bytes
    //pn->n = 3; 0x32423423
    //p->m = 3; 0x32423423
    //p->M[DIM][DIM] = ....; 0x32423423
    //std::cout<<&P;
    //accesare p.n, p.m, p.M[DIM][DIM]


	return 0;
}