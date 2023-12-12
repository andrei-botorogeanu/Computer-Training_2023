#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	do{
		int s = 0;
			while(n>0){	
				s = s + n % 10;
			n/=10;
			}
		n=s;
	}while( !(n<10) );
	cout<<n;
}