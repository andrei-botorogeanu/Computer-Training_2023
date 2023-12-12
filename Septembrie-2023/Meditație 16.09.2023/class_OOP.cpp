#include<iostream>
using namespace std;

class fractie {
private:
	int num, nr;
public:
	void read()
	{
		cin>>nr>>num;
	}
	void display()
	{
		cout<<nr<< "/"<<num;
	}
	void add(int a, int b)
	{
		nr = nr+a;
		num=num+b;
	}
	int numarator()
	{
		return nr;
	}
	int numitor()
	{
		return num;
	}
};
class Fractie2 {
private:
	int nr, num;
public:
	Fractie2()
	{
		cin>>nr>>num;
	//Am apelat constructorul fara parametri
	}
	Fractie2(int a, int b)
	{
		nr = a;
		num= b;
		cout<<nr<< " " <<num;
	//Am apelat constructorul cu doi parametri
	}
	Fractie2(int c)
	{
		int s=0;
		while(c)
		{
			s=  s*10 +c%10;
			c/=10;
		}
		nr= s;
		cout<<s;
	}
};
class euclid
{
private:
	int a, b;
public:
	euclid(int x, int y)
	{
		a=x;
		b=y;
	}
	/* OR
	euclid()
	{
		cin>>a>>b;
	} */
	euclid(int c)
	{
		cout<< c*10;
	}
	int cmmdc()
	{
		int copy_a = a, copy_b = b;
		while(copy_a!=copy_b){
			if( copy_a > copy_b ) copy_a = copy_a - copy_b;
			else copy_b = copy_b - copy_a;
		}
		return copy_a;
	}
	int cmmmc()
	{
		return (a*b) / cmmdc();
	}
};
int main()
{ // aici se creeza o instanta a clasei fractie, un obiect de tip fractie
/*	fractie F;
	F.read();
	F.add(1, 1);
	F.display();
	cout<< "\n";
	cout<<F.numarator() << "\n" <<F.numitor();

		Fractie2 F1;
		cout<<endl;
		Fractie2 F2(2, 4);
		cout<<endl;
		Fractie2 F3(87654);
*/



	[nume_clasa]   [nume_obiect][parametri]
	euclid          F1			(10, 50);//declar un obiect F1 care se initializeaza 
	//								cu constructorul cu 2 paramwetri 
//	F1 este obiectul de tip euclid

	euclid F2(100);
	cout<<endl;

	cout <<F1.cmmdc();// apelez metoda cmmdc astfel: [nume_obiect].[nume_metoda]
	// Nr de parametri ai obiectului trebuie sa fie egal cu nr de parametri ai metodei
// Metoda are rolul de a prelucra datele membre,iar constructorul de a initializa datele. 
	cout << endl;	
	cout << F1.cmmmc();
}