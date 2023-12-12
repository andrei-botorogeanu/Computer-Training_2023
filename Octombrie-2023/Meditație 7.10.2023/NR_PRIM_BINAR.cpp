#include <iostream>
using namespace std;
bool i_prim(int x)
{
	if( x<=1 ) return 0;
	else if(x==2) return 1;
	else for(int i=2; i*i<=x; i++)
		if(x%i==0) return 0;
	return 1;
}
void binar(int x)
{
	const int size = sizeof(int)*8;
	for(int i=size-1; i>=0; i--)
		if( (x>>i) & 1 ) cout<< 1;
		else cout<< 0; 
}
int main() {
	for(int k=1; k<=1000; k++)
	{
		if(i_prim(k)==1 )	
		{
			binar(k);
			cout<<endl;
		}
	}
}