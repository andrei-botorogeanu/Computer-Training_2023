#include <iostream>
#define DIM 10

//Observatie: se poate executa un program si fara sa inseram namespace std!!!

//using namespace std;

typedef struct {

	 int x, 
	     y;

} Obiect;

Obiect ob1; //obiect de tip Student; acceseaza campurile x si y cu "."

Obiect *ob2, *ob3;//pointer catre Student; acceseaza campurile x si y cu "->"

//*ob2 = &ob1;
//ob2 = new Obiect[10]
//ob2->x = VAL;

int main(int argc, char const *argv[])
{
	//am declarat o variabila de tip intreg numita x si atribuim valoarea 10 
	int x = 10;

	//am declarat o variabila de tip real si atribuim valoarea 10.10
	float y = 10.10;

	int *a; //am declarat o variabila de tip pointer catre intreg

	float *b; //am declarat o variabila de tip pointer catre real

	//double variabile reale cu dubla precizie: 10.45 pe 8 octeti
 
	//float variabile reale cu simpla precieze: 10.4  pe 4 octeti

	double *c;//am declarat o variabila de tip pointer catre double

    //a = &y; // cannot convert ‘float*’ to ‘int*’ in assignment
    a = &x; // OK

    //citim un intreg 
    scanf("%d", &x);

    //afisam variabila x
    printf("NUMAR = %d", x);

    ob1.x = 111;
    ob1.y = 100;

  
    printf("\nob1.x = %d \nob1.y = %d\n", ob1.x, ob1.y);
    std::cout<<"ob1.x = "<<ob1.x<<"\n"<<"ob1.y = "<<ob1.y;

    //atribuire ob2 retine adresa obiectului ob1
    ob2 = &ob1;

    std::cout<<ob2->x<<" "<<ob2->y;

     //new - creaza in HEAP o zona de memorie alocata obiectului de tip struct

    ob3 = new Obiect;    

    int *pointer_int;

    
    pointer_int = new int[ 100 ];

    float *obiect_float = new float[ 10 ];

    std::cout<<"adresa de inceput: "<<ob3<<"\n";

    // struct Obiect

    ob3->x = 8888;

    ob3->y = 99999;

    std::cout<<ob3->x;

    delete ob3;

    //structuri de date liste simplu inlantuite, dublu, circulare, grafuri, arbori

    //octet:  00000000 00001000 00000000 00001000 00000000 00001000:  numarul 8 scrisa in baza 2 pe 1 octet 1 BYTE

    //pointer + 1
    //*(pointer+1)


    //2 octeti sau 2 bytes
    //1: 0000 0000 0000 0001
    //2: 0000 0000 0000 0010
    //.......................
    //8: 0000 0000 0000 1000

    int u = 1, w = 1; //nu se declara in HEAP

    //1Byte = 8 biti 
    //1k = 1024 Bytes
    //1Mega = 1024 KiloBytes
    //1Giga = 1024 MegaBytes
    //1Terra = 1024 Giga Bytes

    //	cout<<u + w;

    //0000 0000 0000 0001 + 0000 0000 0000 0001

    std::cout<<"\nchar sizeof = "<<sizeof(char)<< " octet\n";
    std::cout<<"\nint sizeof = "<<sizeof(int)<< " octeti\n";
    std::cout<<"\nFLOAT sizeof = "<<sizeof(float)<< " octeti\n";
    std::cout<<"\nDOUBLE sizeof = "<<sizeof(double)<<" octeti";


    //tip_de baza *nume_variabila;
    //nume_variabila = new tip_de_baza;

    int *ptr;
    //aloc spatiu in HEAP pentru 5 componente de tip integer
    ptr = new int[ 5 ];

//new - cuvant cheie pentru HEAP

    //              00000000 00000000 00010000 00000000 0100000 00000000 00000000 00000000  00000000 00000000 00000000 00000000  00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 
    //0x5568f2c856d0                       0x5568f2c856d4  
    // 23
    *ptr = 23;
    *(ptr+1) = 64;
    *(ptr+2) = 103;
    std::cout<<std::endl;
    std::cout<<ptr;
    std::cout<<std::endl;
    std::cout<<(ptr+1);
	return 0;
}