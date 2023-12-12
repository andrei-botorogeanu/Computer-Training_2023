#include<iostream>
using namespace std;

typedef struct Points{
	float x,
		  y;
}Points;
int panta( Points P1, Points P2, Points P3 )
{
	if( P1.x==P2.x==P3.x )	return 1;
	else if( P1.y==P2.y==P3.y )	return 1;
	float panta_p1_p2 = (P2.y-P1.y)/(P2.x-P1.x);
	float panta_p2_p3 = (P3.y-P2.y)/(P3.x-P2.x);
	if( panta_p1_p2==panta_p2_p3 )	return 1;
    return 0;
}
int main()
{
	Points P[4];
	for(int i=1; i<=3; i++)
		cin>>P[i].x>>P[i].y;
	if( panta(P[1], P[2], P[3]) )	
		cout<< "Punctele sunt coliniare";
	else cout<< "Punctele nu sunt coliniare";
}