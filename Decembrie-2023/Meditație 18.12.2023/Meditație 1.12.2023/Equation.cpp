#include<bits/stdc++.h>
using namespace std;

double rad(int n)
{
	double  x = n,
		y=1.0,
		eps = 0.000001;
	while( x-y>eps )
	{
		x = ( x + y ) / 2;
		y = n / x;
	}
	return x;
}
int main()
{
	int c1, c2, a, b;
	printf("Introduceti coeficientii lui x^2:\n");
	cin>>c1>>c2;
	printf("Introduceti termenii liberi ai ecuatiei:\n");
	cin>>a>>b;
//  c1 * x^2 + a = c2 * x^2 + b
//  x^2(c1-c2) = b - a
	int rez_c = c1-c2;
	int rez_term = b-a;
	double result = rez_term / rez_c ;
	double x = rad(result);
	printf("Solutiile ecuatiei sunt: +/-%.2f", x); 
}