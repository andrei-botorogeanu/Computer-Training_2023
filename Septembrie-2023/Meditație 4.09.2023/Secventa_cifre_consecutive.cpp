#include<iostream>
using namespace std;
int strlen( string str )
{
	int i=0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}
int search( string str,int *lMAX )
{
	int i=0, i_curent=0, iMAX;
	int n = strlen( str );
	*lMAX=1;
	while(i<n)
	{
		if( i-i_curent > *lMAX )
		{
			iMAX = i_curent;
			*lMAX = i-i_curent;
		}
		i_curent = i;
		while( str[i]+1 == str[i+1] && i<n )
			{
				i++;
			}
		i++;
	}
	return iMAX;
}
int main()
{	
	int lMAX, iMAX;
	string str;
	cin>>str;
	//cout<<str;
//lMAX = lungimea maxima, iMAX = pozitia de start a sirului
	iMAX = search(str, &lMAX);
	cout<<strlen(str);
	cout<< "LUNGIMEA MAXIMA= "<< lMAX << "  POZITIA DE START= " <<iMAX<< "\n";
	// for(int i=0; i<strlen(str); i++)
	// 	cout<<str[i]<< " ";
	for(int i=iMAX; i<iMAX+lMAX; i++)
		cout<<str[i]<<" "; 
}