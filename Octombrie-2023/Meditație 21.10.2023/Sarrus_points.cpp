#include<iostream>
using namespace std;

typedef struct Points{
	float x,
		y;
}Points;
float arie(Points P1, Points P2, Points P3)
{
	return P1.x*(P2.y-P3.y) - P1.y*(P2.x-P3.x) + P2.x*P3.y - P3.x*P2.y == 0;
}
int main()
{
	Points P[4];
	for(int i=1; i<=3; i++)
		cin>>P[i].x>>P[i].y;
	if( arie(P[1], P[2], P[3]) )	
		cout<< "Punctele sunt coliniare";
	else cout<< "Punctele nu sunt coliniare";
}