#include<stdio.h>
#define FIN "algsort.in"
#define FOUT "algsort.out"
#define MAX 500
int vec[MAX], n;
void read()
{
	freopen(FIN, "r", stdin);
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &vec[i]);
}
void shell_sort()
{	
	int i, j, aux, d, 
		dist[4]= {1, 3, 4, 7};

	for(d=3; d>=0; d--)
	{
		int dis = dist[d];
		for(j=dis; j<n; j++)
		{
			aux = vec[j];
				for(i = j-dis; i>=0 && vec[i]>aux; i-=dis) {
					vec[i+dis] = vec[i];
				}
					vec[i+dis] = aux;
		}
	}	
}
void write(){
	freopen(FOUT, "w", stdout);
	for(int i=0; i<n; i++)
		printf("%d ", vec[i]);
}
int main()
{
	read();
	shell_sort();
	write();
}