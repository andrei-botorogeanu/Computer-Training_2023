#include<iostream>
#include<vector>
using namespace std;

class Stiva {
private:
	int *array,
		capacity,
		size = 0;
public:
	Stiva(int capacity){
		this->capacity = capacity;
		array = new int[capacity];
	}
	void push(int data)
	{
		array[size] = data;
		size++;
	}
	int top()
	{
		return array[size-1];
	}
	int isEmpty()
	{
		return size==0;
	}
	void pop()
	{
		size--;
	}
	void PlusPlus()
	{
		array[size-1] = array[size-1]+1;
	}
	void display()
	{
		cout<<"{ ";
		for(int i=0; i<size; i++)
			cout<<array[i]<< " ";
		cout<<"}";
		cout<<endl;
	}
	~Stiva() { 
		delete [] array;
	} 
};
int main()
{
	Stiva stack(50);
	int n;	cin>>n;
	cout<<"\n"<<"Multimea vida\n";
	stack.push(1);
	while( !stack.isEmpty() )
	{
		stack.display();
		if( stack.top() < n )
			stack.push(stack.top()+1);
		else{
			stack.pop();
			if( !stack.isEmpty() )
				stack.PlusPlus();
		} 
	}
}