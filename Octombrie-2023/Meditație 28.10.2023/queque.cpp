#include<iostream>
using namespace std;

class Queque{
private:
	int capacity;
	int *array;
	int front, rear, count;
/* front = index-ul elementului din fata
rear = indexul din spate
count = numarul de element din coada */
public:
	
	Queque(int capacity)
	{
		this->capacity=capacity;
//alocam spatiu in HEAP pentru un vector de intregi
	array = new int[capacity];
	front = 0;
	rear = -1;
	count = 0;
	} 

	~Queque(){
		delete [] array;
	}
	void enqueue(int data)
	{
		if( isFull() ){ cout<< "Coada este plina";
		return; }
		cout<< "Adaugam in coada:"<<data<<endl;
		rear = rear+1;
		array[rear] = data;
		count++;
	}
	bool isFull(){
		return count==capacity;
	}
	bool empty(){
		return count==0;
	}
	int dequeue(){
		if(empty()){
			cout<< "Coada este goala";
			return -1;
		}
		int data = array[front];
		cout<< "Scot din coada "<< data;
		front = front+1;
		count--;
		return data;
	}
	void display()
	{
		for(int i=front; i<=rear; i++)
		{
			cout<<array[i]<< " ";
		}
	}
};
int main()
{
	Queque ob(200);
	Queque Coada(100);
	Coada.enqueue(23);
	Coada.enqueue(67);
	Coada.enqueue(78);
	Coada.enqueue(89);
	Coada.display();
	Coada.dequeue();
	cout<<endl;
	Coada.display();
}