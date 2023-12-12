#include<iostream>
#define sqr(x) ( (x)*(x) )
using namespace std;

typedef struct Point{
	float x, y;
}Point;
float sqrt(int n)
{
	float x = n,
	    y = 1.0,
	    eps = 0.000001;
	while( x-y>eps )
	{
		x=(x+y) / 2;
		y= n/x;
	}
	return x;
}
float compute_distance(Point p1,Point p2)
{
	return sqrt( sqr(p2.x-p1.x) + sqr(p2.y-p1.y) );
}
void readPoint(Point *p)
{
	cin >> p->x >> p->y;
}
int main()
{
	cout<<"Point#0";
	Point p0, p1, p;
	readPoint( &p0 );
	int n; cin>>n;
	cout<<"Point#1";
	readPoint( &p1 );
	float	dist =compute_distance(p0, p1);
	for(int i=2; i<=n; i++){
		cout<< "Point#"<<i;
		readPoint(&p);
		float d = compute_distance(p0, p);
		if( d < dist ){
			dist = d;
			cout<< "Found point"<<endl;
			p1 = p;
		}
	}
	cout<<"Distanta minima = "<<dist<<".Cel mai apropiat punct de p0 este Point( "<<p1.x<<", "<<p1.y<<" )";
}