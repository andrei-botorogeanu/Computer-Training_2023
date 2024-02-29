// VARIANTA I
#include<iostream>
#include<ctime>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{ 
// Am declarat o variabila de timp clock_t, iar clock() este o functie predefinita pe care
// o folosim sa luam timpul la inceputul programului

// Ca sa am acces la clock() folosim clock_t pt ca este in legatura directa cu procesorul
	 int n, v[1001];
	 cin>>n;
	 for(int i=1; i<=n; i++)
	 	 	cin>>v[i];	 
	 clock_t start_time;
	 start_time=clock();
	 
	 for(int i=1; i<n; i++)
	 	for(int j=i+1; j<=n; j++)
	 		if(v[i]>v[j]) swap(v[i], v[j]);


	 clock_t end_time;     
	 end_time = clock();

	 for(int i=1; i<=n; i++)
	 	cout << v[i] << " "; 

// end_time este timpul final, iar timpul scurs este diferenta dintre cele 2 timpuri
	 double time_spend =  ( double (end_time - start_time) )  / CLOCKS_PER_SEC;
	 													// este o constanta din libraria ctime
	 //Si se imparte ca sa se afle timpul in milisecunde; 
		cout<<fixed;
		cout<<setprecision(6);
	 cout<<endl;
	 cout<<time_spend;
	 cout<<endl;
	  cout<<start_time<< " "<<end_time<<endl;
	  cout<< CLOCKS_PER_SEC;

}
// VARIANTA II
// #include <stdio.h>
// #include<iostream>
// #include <time.h>
// #include <math.h>
// using namespace std;
// volatile double sink;
// int main (void)
// {
//   //clock_t start = clock();

//      int n, v[1001];
// 	 cin>>n;
// 	 for(int i=1; i<=n; i++)
// 	 	cin>>v[i];
//  clock_t start = clock();
// 	 for(int i=2; i<=8; i++)
// 	 	if( v[1] < v[i] )	v[1]=v[i];

//   clock_t end = clock();
//   double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

//   printf("for loop took %f seconds to execute \n", cpu_time_used);
// }

