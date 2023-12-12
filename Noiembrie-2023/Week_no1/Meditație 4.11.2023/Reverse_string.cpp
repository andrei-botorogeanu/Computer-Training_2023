#include<iostream>
#include<vector>
using namespace std;
//VARIANTA 2:
class Stiva {
private:
	char *array;
	int	capacity,
		size = 0;
public:
	Stiva(int capacity){
		this->capacity = capacity;
		array = new char[capacity];
	}
	int isEmpty()
	{
		return size==0;
	}
	void push(char data)
	{
		array[size] = data;
		size++;
	}
	char top()
	{
		return array[size-1];
	}
	void pop()
	{
		size--;
	}
	~Stiva() { 
		delete [] array;
	} 
};

int main()
{
	Stiva auxiliar(100);
	char str[100];
	cin>>str;
	int i=0;
	while(str[i]!= '\0')
	{
		auxiliar.push(str[i++]);
	}
	while( !auxiliar.isEmpty() )
	{
		cout<< auxiliar.top() ;
		auxiliar.pop();
	}

}

/*VARIANTA 1:
int main()
{
	char str[100];
	cin>>str;
	int lung = strlen(str);
	for(int i=0; i<=lung/2; i++)
	{
		char aux;
		aux = str[i];
		str[i] = str[lung-i];
		str[lung-i] = aux;
	}	

	for(int i=0; i<=lung; i++)
	cout<<str[i];
}
*/