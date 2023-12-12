/*
Pointeri:
--------

Copierea unui sir constant Sir1 = "Hello World!"
copiezi continutul sirului Sir1 in Sir2.

fara functia strcpy
*/

#include <iostream>

void swap(char text1[], char text2[]) {

}

int main(int argc, char const *argv[])
{

	char text1[100], text2[100];


    //textul de copiat in text1 si text2
	char mess[] = "Hello, I am working in c++ programming language!";

	char *p1,*p2;

	//hello => hello\0
	//00000100 00000100 00000001 00000001 00000001 \0
	//  1        2         3        4          5    

    //'\n'
    //std::cout<<sizeof(char);

    int i = 0;

    while(mess[i] != '\0') {
    	text1[i] = mess[i];
    	i++;
    }

    text1[i] = '\0';


    //pointerul reprezinta o variabila de tip adresa, contine numai adrese
    //p1 contine adresa lui mess
	p1 = mess;

	p2 = text2;

	while(*p1 != '\0') {

		  *p2 = *p1;

		  p1++;

		  p2++;
	}
   
     *p2 = '\0';

	/*
	  message = "hello world!?"
	  //a,b,c...
	  text2 = "hello"
	  p1 = adresa stringului message
	  p2 = ""

       H         e       l         l          0
	  00000001 00010000 00010000 00010000 00010000 00000001 '\0'
      mess[0]  mess[1]
 
	  p1

	  p1 + 1
	  p1 + 1
	  p1 + 1

      00000001
      p2

	*/

    std::cout<<text1<<std::endl;
	std::cout<<text2;

    //declaram un pointer catre caracter, deci variabila pointer poate sa retina doar adresa catre char
	char *pointer;
	char a[] = "string?";
    pointer = a;
    std::cout<<*(pointer+2);	

    //un octet are 8 biti => 1 Byte este reprezentat 0000 00001 (numarul 1)
    //0000 00010 numarul 2
    //numarul 10: 10:2=5 rest 0,
    //            5 : 2 = 2 rest 1
    //            2 : 2 = 1 rest 0
    //           1: 2 =0 rest 1
    //numarul 10 in binar = 00001010 00001010 00000000 00001010 4Byte = 4 octet
     //char c = '3';
     //std::cout<<"ASCII VALUE = "<<int(c);


    

	return 0;
}