#include<iostream>
#include<cstring>
using namespace std;

class old_family
{
public:
	string t, m, f, s ;
};
class new_family:public old_family
{
public:
	void how()
	{
		m="Mihaela"; t = "Marian";
		s= "Ana"; f = "Andrei";
	}
	void display()
	{
		cout<<m<< " "<<t<<endl;
		cout<<s<< " "<<f;
	}
};
int main()
{
	new_family FAM;
	FAM.how();
	FAM.display();

}