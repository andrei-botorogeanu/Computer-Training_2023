/*
Sabloane in C++ (Templates)

void interschimbare(int a, int b) {
	
	int aux;
	aux = a;
	a = b;
	b = aux;
}

//int a, b;
float a, b;
double a, b;

interschimbare(a,b)

*/

#include <iostream>
#include <string.h>

using namespace std;


//TYPE vec[10] = {1,2,3,4,5,6,7,8,9,10}
//Type *ptr = &vec;
//*(ptr) 1
//*(ptr+1) 2
//*(ptr+2) 3


template <class TYPE>
void sort(TYPE *p, int n) {

     int i, j;

     TYPE aux;

     for(i = 1; i < n; ++i) {

     	for(j = n - 1; j >= i; j--) {

     		aux = p[j - 1]

     		p[j-1] = p[ j ]; // *( p + j) sau p[j]

     		p[j] = aux;

     	}
     }
}


//varianta 2

template <class Type>  
void _swap_(Type &a, Type &b) {

	 Type aux;
	 aux = a;
	 a = b;
	 b = aux;
}

//varianta 1
void interschimbare2(int *a, int *b) {

	 int aux;
	 aux = *a;
	 *a = *b;
	 *b = aux;
}

int main(int argc, char const *argv[])
{
	//int a,b;//T = int
	//float a, b; //T = float
	//double a, b; //T = double
	//char a, b;//T = char
	//a = 'y';
	//b = 'z';
	//a = 10.33;
	//b = 99.43;
	//string a, b;
	//a = "DAvid";
	//b = "Walsh";

	//std::cout<<"a = "<<a<<"\n";
	//std::cout<<"b = "<<b<<"\n";

	//_swap_(a,b);
    //interschimbare2(&a,&b);
	//std::cout<<"---"<<"\n";

    //std::cout<<"a = "<<a<<"\n";
	//std::cout<<"b = "<<b<<"\n";

    char c_arr[10] = {'v', 'f', 'b', 'b', 'c', 'r', 'y', 'y', 't', 'x'};

    int i_arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    float f_arr[10] = {9,8.1,7.3,64.5,5.3,4.5,3.6,2.5,1.3,0};

    double d_arr[10] = {-9,8.1,7.3,64.5,5.3,4.5,3.6,2.5,1.3,0};

    int n = sizeof(i_arr)/sizeof(i_arr[0]);

    printf("SIZE = %d\n", n);

    for (int i = 0; i < n; ++i)
    {
    	 printf("%d ", i_arr[i]);
    }
 
    //numele functie, transmis ca paramentru vectorul de double
    sort( i_arr, n );

    printf("\n");

    for (int i = 0; i < n; ++i)
    {
    	 printf("%d ", i_arr[i]);
    }
 
	return 0;
}