#include<bits/stdc++.h>
using namespace std;
typedef struct abscisa_ordonata{
	int x,
		y;
}Point;
struct Cerc{
	Point O;
	float R;
};
int main()
{
	Cerc coord; 
	cin>>coord.O.x>>coord.O.y;
	cin>>coord.R;
	Point N;
	cin>>N.x>>N.y;
	float distanta = sqrt( (N.x-coord.O.x)*(N.x-coord.O.x)+(N.y-coord.O.y)*(N.y-coord.O.y) );
	if(distanta>coord.R)	
		cout<< "Punctul se afla in exteriorul cercului";
	else if(distanta==coord.R)
		cout<< "Punctul se afla pe cerc";
	else cout<< "Punctul se afla in interiorul cercului";
}