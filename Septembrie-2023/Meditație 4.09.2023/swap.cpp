//Function Swap
#include <iostream>

//p1 primeste adresa variabilei a
//p2 primeste adresa variabilei b

void swap(int *p1, int *p2) {

     int aux;

     aux = *p1;

     *p1 = *p2;

     *p2 = aux;  

}

void swap2(void *p1, void *p2, int dim) {

    std::cout<<"Avem 4 octeti = "<<dim;
  
   //am convertit p1 care initial este un pointer catre void la un pointer catre char
   char* a = (char*)p1;

   //am convertit p2 care initial este un pointer catre void la un pointer catre char
   char* b = (char*)p2;

    //aux este reprezentat pe un octet
   char aux;

    //a = in baza 2 pe 4 octeti:    00100000 00101100 00001000 00001000

                                      /\

     //                               ||   interschimbare de octeti
                                        
//                                    \/      

    //b = in baza 2 pe 4 octeti:    00111010 00101100 00001000 00001000

   //daca x = 2 si y = 1

   //1: 00001000 00000000 00000000 00000001
          
     //pointer + i unde i = 0,3

    //daca i = 0, ne pozitionam pe primul octet
    //daca i = 1, ne pozitionam pe al doilea octet
    //daca i = 2 , ne pozitionam pe al treilea octet
    //daca i = 3, ne pozitionam pe al patrulea octet

    //pointer = adresa variabilei x
    //pointe++ inseamna urmatorul octet din reprezentare
    //pointer + i                                       

   //2: 00000000 00000000 00000000 00000010
 
   //in exemplul tau R = 10
   //pe 4 octeti este reprezentat 00000000 00000000 00000000 00000101


   //copiem octet cu octet
   for(int i = 0; i < dim; ++i) {

       aux = *(a + i);

       *(a + i) = *(b + i);

       *(b + i) = aux; 
   }

   /*
   pentru i  = 0

   aux = *(a+0) = *a adica octetul urmator: 00100000

   *(a+0) = *(b+0) adica octetul 00100000

   */

}

int main(int argc, char const *argv[])
{

int a, 
    b;

a = 10;

b = 11;

int temp; temp = a; a = b; b = temp;

std::cout<<"a = "<<a<<" b = "<<b<<std::endl;

std::cout<<"Adresa variabilei a = "<<&a<<" Adresa variabilei b = "<<&b;

swap( &a, &b );

int c = 101;

std::cout<<std::endl<<"a = "<<a<<" b = "<<b<<std::endl;

std::cout<<"Adresa lui c = "<<&c;
	
	//baza 2: 010101010010101
	//baza 3: 01201010102
	//baza 4: 001010023
	//baza 8: 0101023456702
	//baza 16: 012345 => 10 = A, 11 = B, 12 = C, 13 = D 14 = E 15 = f
	//

int x = 808, 
    y = 109;

    //x este reprezentat in baza 2 astfel pe 4 octeti: 00000000 00000000 00001000 00001000
    //y este reprezentat in baza 2 astfel pe 4 octeti: 00000000 00000000 00001000 00001010

std::cout<<std::endl;
std::cout<<"Varianta 2 de swap"<<std::endl;
std::cout<<std::endl;
std::cout<<"x = "<<x << " y = "<<y<<std::endl;

swap2(&x, &y, sizeof(int));

std::cout<<std::endl;
std::cout<<"x = "<<x << " y = "<<y<<std::endl;


//000001000 = 0 * 2^0 + 0 * 2^1 + 0 * 2^2 + 2 * 1 *2^ 3= 8
return 0;
}
