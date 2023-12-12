#include<iostream>
using namespace std;
int stack[101], nodes, level, start_node, edges;
int mat[100][100];
// nodes=nr de orase, start_nodes= nodul de plecare, edges= nr de drumuri
// mat este matricea codificata binar prin care mat[i][j]=1 dc exista drum de la i la j
// altfel va fi 0 
void init(int level )
{
	stack[level]=0;
}// initializam stiva cu 0
int succesor(int level)
{
	if(stack[level] < nodes)
	{
		stack[level]++;
		return 1;
	}
	else return 0;
}// verificam dc avem un oras, dc if-ul este true inseamna ca avem inca un oras 
int valid(int level)
{
	if( !mat[ stack[level-1] ][ stack[level] ] )
		return 0;
	for(int i=1; i<level; i++)
		{
			if(stack[i]==stack[level])	return 0;
		}
	return 1;
}
// dc exista drum intre orasul curent si orasul precedent si dc nu a mai trecut
// prin respectivul oras

int solutia_noastra(int level)
{							//mat[de_unde_am_plecat][finalul/destinatia/ult_oras]
	return level == nodes && mat[start_node][stack[level]]==1;
		//aici verificam dc level este egal cu nr maxim de orase					
}// verificam dc exista solutie
void read_graph()
{

	int x,y;
	for(int edge=1; edge<=edges; edge++)
	{
		cin>>x>>y;
		mat[x][y]=1;
		mat[y][x]=1;
	}
}
void print()
{
	for(int i=1 ;i<=nodes; i++)
	{
		cout<<stack[i]<< " ";
	}
	cout<<endl;
}// tipareste solutia gasita pana cand se epuizeaza toate solutiile
void display_graph()
{
	for(int i=1; i<=nodes; i++)
	{
		for(int j=1; j<=nodes; j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}// asta e pt mine ca sa vizualizez corectitudinea pt matricea binara
void back(int level)
{
	init(level);
	while(succesor(level)==1)
	{
		if(valid(level)==1)
			if( solutia_noastra(level) )	print();
			else	back(level+1);
	}	
}//RECURSIV
int main()
{
	cin>>nodes>>edges;
	read_graph();
	//display_graph();
	start_node=1;
	stack[1]=start_node;
	back(2);
}//matrice de adiacenta