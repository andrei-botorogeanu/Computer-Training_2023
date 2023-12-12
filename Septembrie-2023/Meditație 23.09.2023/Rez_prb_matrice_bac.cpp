#include<bits/stdc++.h>
using namespace std;
int n, m, mat[10][10], arr[100]; 
int main()
{
	cin>>n>>m;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin>>mat[i][j];
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			arr[ i*m + j ] = mat[i][j];
	bool setup=false;	
	int size = n*m; 
	cout<<size<<endl;
	while( !setup )
	{
		bool swaped = false;
		for(int i=0; i < size-1; i++)
			if( arr[i]>arr[i+1] )
				{
					swap( arr[i], arr[i+1] );
					swaped = true;
				}
			if(swaped == true)
				size--;
			else setup =  1;
	}
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			 mat[i][j] = arr[ i*m + j ] ;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
			cout<< mat[i][j]<< " ";
		cout<<endl;
	}
}