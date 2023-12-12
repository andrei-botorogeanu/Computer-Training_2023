#include<iostream>
#include<cstring>
using namespace std;

int atoi2( char lit[100] )
{
	int sign=1, 
		result=0, 
		i=0;
	if( lit[i]=='+' )	i++;
	else if(lit[i]=='-'){
		sign=-1;	i++;
	} 
	while(lit[i]!='\0') {
		result = result*10 + lit[i] - '0' ;
		i++;
	}
	return result * sign;
}
int correct( char lit[100] )
{
	int ok=1;
	if( !isdigit(lit[0]) && lit[0]!='+' && lit[0]!='-' )
		return 0;
	for(int i=1; lit[i]!= '\0'; i++)
		if( !isdigit(lit[i]) ) ok=0;
	return ok;
}
int main()
{
	char str[100];
	cout<< "string=";
	cin>>str;
	if(!correct(str)) 
		cout<< "Nu este un nr intreg";
	else cout<<atoi2(str);

}