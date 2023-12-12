#include<iostream>
using namespace std;
int main()
{// (I)
	char text1[100], text2[100];
	char mess[] = "I'm working in C++, at the moment";
	int i=0;
	char *p1, *p2;
	while(mess[i]!= '\0')
	{
		text1[i] = mess[i];
		i++;
	}
	text1[i]= '\0';
	cout<<text1<<endl;
// OR(II)
	char mesaj1[] = "Acesta este un text", mesaj2[200] ;
	char *a, *b;
	a = mesaj1;
	b = mesaj2;

	while( *a!='\0' )
	{
		*b = *a;
		a++;
		b++;
	}
	*b = '\0';
	cout<<mesaj2;

}