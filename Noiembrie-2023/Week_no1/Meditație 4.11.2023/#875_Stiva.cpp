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
	Stiva stack(100);
	int N, value;
	vector<int>vec;
	string operation;
	cin>>N;
	for(int i=1; i<=N; i++)
	{
		cin>>operation;
		if(operation== "push"){
			cin>>value;
			stack.push(value);
		}	
		else if(operation=="pop")
			stack.pop();
		else 
		vec.push_back(stack.top());
	}
	for(int i=0; i<vec.size(); i++)
		cout<<vec[i]<<endl; 
}