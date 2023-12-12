#include<bits/stdc++.h>
using namespace std;
typedef float(*name_function)( int, int, int );
/// TYPEDEF se creeaza un tip de data numit name_function si rep. un pointer catre functie
///cu 3 argumente care intoarce float ca rezultat
float an(int a, int b, int c)
{
	cout<<endl;
	return a+b+c;
}
float bn(int c, int d, int n)
{
	return c+d-n;
}
float cn(int a, int b, int c)
{
	return a-b+c;
}
 
void display( name_function fn , int var1, int var2, int var3 )
/// Prin fn se transmite an, bn, cn, numele functiilorpe care i le transmit prin display in int main() 
{	
	double S = 0;

     for(int i = 1; i <= var3; ++i) cout<<fn(i,i,i)<<" ", S += fn(i,i,i);

     cout<<"Sum = "<<S;

     cout<<endl; 
}

typedef int(*ptr)(int ,int);
int adunare(int a, int b)
{
	return a+b;
}
int scadere(int a ,int b)
{
	return a-b;
}
int inmultire(int a, int b)
{
	return a*b;
}
int impartire(int a, int b)
{
	return a/b;
}
void display2(ptr gn, int a, int b) 
{
	cout << gn(a, b);
	cout<<endl;
}
int divide_et_impera(int n, int m)
{
	string n1="MATE" ;
 	string m1="INFO" ;
	cout<<n1<< " "<<m1;
	return 1;
}
int main()
{
	  int n = 10;
	  int n1,n2;
    //apelam functie display care are 2 argumente: nume_functie si o valoare a unei variabile n
	// display(an, n);
	// display(bn, n);
	// display(cn, n);
	// display(en, n);
	// display(an, 12, 56, 78);
	  display2(adunare, 100, 50);
	  display2(scadere, 100, 50);
	  display2(inmultire, 100, 50);
	  display2(impartire, 100, 50);
	  
	  display2( divide_et_impera, n1, n2);
}