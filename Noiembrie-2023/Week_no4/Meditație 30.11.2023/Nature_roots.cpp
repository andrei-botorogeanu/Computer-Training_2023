#include<bits/stdc++.h>
using namespace std;
int sqrt(int n){
	int x = n;
	double	y = 1.0,
			eps = 0.000001;
		while(x-y>eps)
		{
			x = (x+y)/2;
			y = n / x;
		}
		return x;
}
void Nature_Roots_Quadratic_Equation(int a, int b, int c)
{
	int S = -b/a,
		P = c/a,
		delta = b*b-4*a*c;
	if( delta<0 )
		printf("Nu avem solutii reale");
	else if( delta>=0 )
	{
		if( S > 0 ) 
		{
			if( P>0 ) 
				cout<<"x positive, y positive";
			else if( P<0 )
				cout<<"x negative, y positive, |x1| < |x2|";
			else
				cout<<"x1 zero, x2 positive";			
		}
		else
		{
			if( P>0 )
				cout<<"x1 negative, x2 negative";
			else if( P<0 )
				cout<<"x1 negative, x2 positive, |x1|>|x2|";
			else
				cout<<"x1 zero,x2 negative";
		}
	}
}
int main()
{
	int A, B, C;
	cout<<"Introduceti coeficientii:\n";
	cin>>A>>B>>C;
	Nature_Roots_Quadratic_Equation(A, B, C);	
}