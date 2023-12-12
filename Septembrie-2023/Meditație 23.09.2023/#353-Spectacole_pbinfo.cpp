#include<bits/stdc++.h>
#include <vector>
#include<fstream>
using namespace std;
ifstream fin("spectacole.in");
ofstream fout("spectacole.out");
typedef struct { 
	int start, end;
} Interval;
Interval Time;
// I este tip de data
bool cmp(Interval interval1, Interval interval2 )
{
	return interval2.end > interval1.end;
}
int main()
{
	int n;
	vector<Interval> Spectacles;	
// este diferit	"Interval Spectacles";
// Fiecare element din vector rep. un interval
// care este de tip struct, cu un start si end
// vector<tip_de_data> nume_var;
	fin>>n;
	for(int i=0; i<n; i++)
	{
		fin>>Time.start>>Time.end;
		Spectacles.push_back(Time);		
	}
	sort( Spectacles.begin(), Spectacles.end(), cmp );
	int i=1, count=1, curent = Spectacles[0].end;
	while(i<n)
	{
//Mai intai se ordoneaza momentele de final ale spectacolelor
// Si se compara al doilea spectacol(start) cu primul spectacol(start)
		if( Spectacles[i].start >= curent )
			{
				curent = Spectacles[i].end;
				count++;
			}
			i++;
	}
	fout<<count;
}