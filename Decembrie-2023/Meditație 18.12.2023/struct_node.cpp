#include <iostream>

using namespace std;

/*
struct Student {

       string name;
       int age;
       float salary;
       string address;

       struct Student *urmator;
}
*/
//lista simplu inlantuita
//lista de studenti = student1, student2, student3, student4->>NULL

//                  header
//---------->

/*
D C B A

A B C D ->
         header
in lista A       -->    B  ->>>   C   --->  D->>NULL
*/
struct Student {

       char data;
       struct Student *urmator;

  } *head = NULL;

//int *head;
//float *head3;
//tip de data *pointer;
//tip de data (int, float, double, struct, ...)

int main(int argc, char const *argv[]) {

  //int *p; //declari un pointer catre int
  //am declarat un pointer catre struct Node
  struct Student *new_node;

//node1--->node2---->node3....
  //SCOP: pentru a crea lista simplu inlantuita

  int num;
      char node;
  cout<<"num=";
  cin>>num;

  for(int i = 1; i <= num; ++i) {

      cout<<"Node=";
      cin>>node;

      new_node = new Student;
      new_node->data = node;

      new_node->urmator = head;

      head = new_node;
  }

  while(head!=NULL) {
    cout<<head->data<<" ";
    head = head->urmator;
  }
  
  return 0;
} 
