#include<iostream>
using namespace std;
int level, stack[1001], nodes, edges, mat[1001][1001];
void init()
{
	stack[level] = 1;
}
int succesor()
{// folosim 4 fiindca putem sa coloram cu maxim 4 culori tarile
	if(stack[level]<4)
	{
		stack[level]++;
		return true;
	}
	return false;
}
int valid()
{
	for(int i=1; i<level; i++)
	{	//  verificam daca este aceeasi culoare 2 tari  
		if(stack[level] == stack[i] && mat[i][level]==1)
			return false;				// se invecineaza
	}
	return true;
}
int sol()
{// verifica daca am ajuns la nr maxim de tari
	return level==nodes;
}
void print()
{
	for(int i=1; i<=nodes; i++)
	{
		cout<<stack[i]<< " ";
	}
	cout<<endl;
}
void bk()
{
	level=2;
	while(level>0)
    {
    	int h=true, v=false;
    	while(h && !v) 
    	{
      	h=succesor();
      	if( h )
        	v=valid();
		}// daca iese din while, se cauta un succesor si o culoarea valida
    	if(h==1)// verifica daca avem o culoare valida din nou
    	{
      		if( sol() )//verificam dc avem solutie
        		print();
      		else{
        		level++;//urca la urmatorul nivel in staiva si initializeaza cu 1 
        		init();
          		}
    	}	
    	else{
      			level--;
  			}//  daca nu avem succesor/ h==0, coboara in stiva
  	}
}
void displayGraph()
{
	for(int i=1; i<=nodes; i++)
	{
		for(int j=1; j<=nodes; j++)
		{
			cout<< mat[i][j]<< " ";
		}
		cout<<endl;
	}
}
//[2,4],[1,2],[1,4],[2,3],[2,5],[3,2],[3,5],[4,5] ]
int main()
{
	cin>>nodes>>edges;
	int x,y;
	for(int edge=1; edge<=edges; edge++)
	{
		cin>>x>>y;
		mat[x][y]=1;
		mat[y][x]=1;
	}
	stack[1]=1;// pornim cu prima culoare la tara nr. 1
	bk();
	//displayGraph();
}