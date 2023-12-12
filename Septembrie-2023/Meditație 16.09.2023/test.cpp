#include<bits/stdc++.h>
using namespace std;
class triunghi
{
public:
	int a, b, c;
	triunghi(int x, int y, int z)
	{
	a = x;	b = y; c = z;
	}
	void arie()
	{
		 double keep, HERON;
		 double semi_p = (a+b+c) / 2;
	     keep = semi_p*(semi_p-a)*(semi_p-b)*(semi_p-c);
		cout<<semi_p<< " ";
		cout<<keep<<endl;
	    HERON = sqrt( keep ); 
		cout<<HERON;
		// //return HERON;
	}
};
int main()
{
	triunghi TRI_1(8, 6, 10);
	TRI_1.arie();
	//cout<<TRI_1.arie();
}