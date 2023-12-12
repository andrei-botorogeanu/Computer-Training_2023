#include <iostream>

using namespace std;

typedef struct Human {
	 int age, 
	     salary;
} Student;

int main(int argc, char const *argv[])
{
	Student *arr[100];
	//am declarat un vector de pointers catre tipul de baza Student

	arr[0]->age = 10;
	arr[0]->salary = 100;

	cout<<arr[0]->age<< " - "<<arr[0]->salary;

	return 0;
}