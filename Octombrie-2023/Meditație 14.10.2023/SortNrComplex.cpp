#include<bits/stdc++.h>
using namespace std;
class Complex {

private:
	double real, imag;
public:
	Complex(){
		imag=0; real=0;
	}
	void set(double a, double b){
		real = a;
		imag = b;
	}
	void display(){
		cout<< real;
			if(imag>0)	cout<< "+";
			cout<<imag<<"i"<<endl;
	}
	double modul(){
		return sqrt(real*real + imag*imag);
	}
};
void bubblesort( Complex* p,int size )
{
	bool finished=0;
	while(!finished)
	{
		bool swap=0;
		for(int i=0; i<size-1; i++){
			if( p[i].modul() > p[i+1].modul() )
			{
				Complex aux=p[i];
				p[i] = p[i+1];
				p[i+1] = aux;
				swap=1;
			}
		}
		if(swap==1)	size--;
		else finished=1;
	}
}
int main()
{
	Complex arr[100];
	int n;
	double real, imag;
	cin>>n;
	cout<<"Introduceti nr complexe: real si imag";
	for(int i=0; i<n; i++)
	{
		cin>>real>>imag;
		arr[i].set(real, imag);
	}
	for(int i=0; i<n; i++){
		arr[i].display();
		cout<<" Modul = "<<setprecision(2)<<arr[i].modul()<<endl;
	}
	bubblesort(arr, n);
	for(int i=0; i<n; i++)
		arr[i].display();
	
}