#include <iostream>
#define SIZE 100000

class Stiva {

  public:
  //constructorul clasei
  Stiva() {
     summit = 0;//varful stivei va fi zero
     //alocam spatiu in HEAP pentru stiva
     stiva_mea = new struct container[ SIZE ];
     //returneaza o adresa din HEAP 0x12428734239
  }

  //destructorul clasei
  ~Stiva(){
    //dezalocam spatiul rezervat in HEAP pt stiva
    delete [] container;
  };

void Push(int value) {

     if(summit == SIZE) {

        std::cout<<"Stiva este plina!";
        return;
     } else {
        std::cout<<"Added\n";
        if( summit == 0 ) {

          container[ summit ] = {value, value};

        } else {

          container[ summit ] = { value,  max(container[summit-1].max_value , value) };

          summit++;
        }
     }
}

void Pop() {
     if(!this->isEmpty()) summit--;
}

int Top() {

    if(!this->isEmpty()) return container[summit-1].value;
}

int max(int a, int b) {if(a>b) return a;else return b;}

int Max() {
    if(!this->isEmpty()) return container[summit-1].max_value;
}

//verifica daca stiva este goala
//returneaza True (1) daca stiva este goala
//altfel returneaza False 0
int isEmpty() {

  return summit == 0;
}


  //date membre
  private:

    struct container {
          int value,
              max_value;
    };

    //pointer
    struct container *stiva_mea; //containerul in care stocam elementele stivei

    int summit;//varful stivei
};

int main(int argc, char const *argv[]) {

  Stiva s;
  return 0;
}


/*
Stiva
{5, 10} ->summit = 3
{10,10} ->summit = 2
{7,7} -> summit = 1


push(7) ->summit = 1
push(10) => summit = 2
push(5) =>summit = 3
pop() ->summit-- adica summit = 2
pop() =>summit -> 1


typedef struct Node {
  int nr;//4 bytes
  int num; //4 bytes
  float nota;//8 bytes
} Node1;
//in C: malloc(sizeof(tip de data)),
//in c++: operatorul new tip_data[SIZE]
s = new struct Node[ 100 ]
           {nr,num,float}      {nr,num, float}      {nr,num,float}    {nr,num, float}
//HEAP:  0x234AB334C, 0x234AB3434C, 0x234A3434C..0x32423423
//        s           s + 1         s + 2          s + 99

//s = 0x234AB334C
s + 1
s + 2
s + 3
delete [] s

struct Node {
  int code;
  char name[50];
};

Node1 *s;

        nr, num   nr,num   nr,num
 s = [ {struct} {struct} {struct} ....{struct}   ]
s[0] = {nr,num}
s[1] = { nr, num}
s[2]  = {nr, num}
.....
s[99] = {nr, num}

        100 de struct-uri

Node2 *w;

s = new struct Node[100];
sau
s = new Node1[100];

s[0].nr
s[0].num

s[1].nr
s[1].num

//new este un operator care aloca spatiu in HEAP si returneaza adresa de inceput lui s
w = new Node2[100];

s[0] = {1,2};
s[1] = {7,8};
s[2] = {9,10};

w[0] = {5,6};
w[1] = {1,2}

s = new Node[100]
in heap avem 100 de elemente alocate de tip Struct

int *p;
double *d;
new double[ SIZE ]
p = new int[5];//componente de tip int
//in zona HEAP alocam spatiu pentru 5 intregi; 4 bytes
p[0]
//cout<<p[1]<<p[0];

*/
