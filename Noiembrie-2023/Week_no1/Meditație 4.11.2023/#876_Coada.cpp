#include<iostream>
#include<vector>
using namespace std;

class Queque{
private:
	int capacity;
	int *array;
	int Front, rear, count;
public:
	
	Queque(int capacity)
	{
	this->capacity=capacity;
	array = new int[capacity];
	Front = 0;
	rear = -1;
	count = 0;
	} 

	~Queque(){
		delete [] array;
	}
	void push(int data)
	{
		rear = rear+1;
		array[rear] = data;
		count++;
	}
	void pop(){
		Front = Front+1;
		count--;
	}
	int front(){
		return array[Front];
	}
};
int main()
{
	Queque Coada(100);
	int N, value;
	vector<int>vec;
	string operation;
	cin>>N;
	for(int i=1; i<=N; i++)
	{
		cin>>operation;
		if(operation== "push"){
			cin>>value;
			Coada.push(value);
		}	
		else if(operation=="pop")
			Coada.pop();
		else 
		vec.push_back(Coada.front());
	}
	for(int i=0; i<vec.size(); i++)
		cout<<vec[i]<<endl; 
}

/*
       rear
       |
       4  ->45
       3  ->10
	   2  ->8
	   1  ->6
index: 0  ->4
  	 front

front=0;
pop();
front devine 1 si se sterge 4
pop();

front devine 2 si se sterge 6

Prin pop() se scade din coada 
Principiul este FIFO: FIRST IN, FIRST cout
FRONT creste atunci cand se face pop, dar scade count
Rear este constant dc nu adaugam elemente
*/