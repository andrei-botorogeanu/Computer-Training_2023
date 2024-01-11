#include<iostream>
#define size 100
using namespace std;
int mat[size][size],
	stack[size], n, m,
	level, mat2[size][size],
	s_max=0;
void init( )
{
	stack[level]=-1;
}
int succesor()
{
	if( stack[level]<1 ){
		stack[level]++;
		return 1;
	}
	return 0;
}
int valid()
{
	return 1;
}
int solution()
{
	return level==n;
}
void display()
{// Pornim cu i=1 pt ca am initializat stack-ul cu level-ul 1
	for(int i=1; i<=n; i++)
		printf("%d ", stack[i]);
	printf("\n");
}
void solve_flip()
{
	int s, s_total = 0;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)
			mat2[i][j] = mat[i][j];

	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)
// stack[1] == 1 inseamna ca avem o linie de modificat
// Aici facem flip() pt linii
			if( stack[i]==1 )
				mat2[i][j] = mat2[i][j]*(-1); 
	for(int j=1; j<=m; j++){
		s = 0;
		for(int i=1; i<=n; i++)
			s = s + mat2[i][j];// Calculam suma pe coloane
		if( s<0 ) s= s*(-1);
// Aici facem flip() numai dc suma pe o coloana este negativa 
		s_total += s;
// s_total este suma totala pt fiecare configuratie,
// pt fiecare caz local
	} 
// Aici facem flip() pe coloane
	if( s_max<s_total )	
		s_max = s_total;
}
void bk()
{
	level = 1;
	init();// s=succesor, v=valid
	int s, v;
	while( level>0 )
	{
		s = 1; v=0;
		while(s && !v)
		{
			// s==1 && v==0
			s=succesor();
			if(s)
				v = valid();
		}
		if(s) {
			if( solution() ) 
				solve_flip();
			else {
				level++;
				init();
			}
		}
		else level--;
	}
}
int main()
{
	freopen( "flip.in", "r", stdin );
	cin>>n>>m;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)
			cin>>mat[i][j];
	freopen( "flip.out", "w", stdout );
	bk();	printf("%d", s_max);
	fclose(stdout);
}