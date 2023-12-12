#include<bits/stdc++.h>
#define sqr(x) ((x)*(x)) 
using namespace std;

typedef struct Point{
	float x,
		  y;
}Point;
typedef struct {
	Point O;
	float R;
}Circle;
float ComputeDistance(Point p1, Point p2)
{
	return sqrt( sqr(p2.x-p1.x) + sqr(p2.y-p1.y) );
} 
bool apartine(Circle C, Point p)
{
	if( ComputeDistance(p, C.O) < C.R )
		return true;
	else return false;
}

int main()
{
	int N;
	Point p;
	Circle C[100];
	cout<<"Dati nr de cercuri:"<<endl;
	cin>>N;
	for(int i=1; i<=N; i++){
		cout<<"Introduceti cercul nr "<<i<<endl;
		cin>>C[i].O.x>>C[i].O.y>>C[i].R;
	}
	cout<<"Introduceti coordonatele punctului: "<<endl;
	cin>>p.x>>p.y;
	for(int i=1; i<=N; i++)
		if(apartine(C[i], p)==true)
			cout<<C[i].O.x<< " "<<C[i].O.y<<C[i].R<<endl;
}