#include <iostream>

using namespace std;

//pointer catre functie
typedef float(*NUME_Pointer_Functie)(int,int,int,int);

//definim 3 functii:

float en(int n,  int a, int b, int c) {

	return n;
}

float an(int n, int a, int b, int c) {

     return (double)1/(n+1);
}

float bn(int n, int a, int b, int c) {

   return 2 * n + 1;
}

float cn(int n,  int a, int b, int c) {

	return 2 * n;
}

void display(NUME_Pointer_Functie fn, int n) {

     double S = 0;

     for(int i = 1; i <= n; ++i) cout<<fn(i,i,i,i)<<" ", S += fn(i,i,i,i);

     cout<<"Sum = "<<S;

     cout<<endl; 
}

int main(int argc, char const *argv[])
{

    int n = 10;

    //apelam functie display care are 2 argumente: nume_functie si o valoare a unei variabile n
	display(an, n);

	display(bn, n);

	display(cn, n);

	display(en, n);

    //for(int i = 1; i <= 10; i++) cout<<an(i,i,i,i)<<" ";

	//1+2+3+...+10 = 55
	
	return 0;
}