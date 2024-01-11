#include <stdio.h>
#include <iostream>

int main(int argc, char const *argv[])
{

    //vrem sa copy continutul string-ului message in text2
    //copy de la mess la text2
    char text1[100], text2[100];

    //text2 = 00000000 00000000 00000000 .... 00000000
    //adresa este reprezentata in hexazecimal 0x1234abcf
    //        p_pointer       

    //avem 100 de octeti
    

    char message[] = "Acesta este un string\0";
    //               *p = 'A'
    //                p = adresa lui 'A'
    //                (p+1) = adresa de la 'c'
    //                *(p+1) = 'c'
    //                *(p+2) = 'e'
    //                *(p+3) = 's'
    //                *(p+4) = 't'
    //                *(p+5) = 'a'
    //                *(p+6) = ' '
    //                *(p+7) = 'e'
    //                *(p+8) = 's'
    //...........................
    //                *(p+n) = 'g'
    //                *(p+size) = '\0'

    int i = 0;
    while(message[i]!='\0') {
    	text1[i] = message[i];
    	i++;
    }
    text1[i] = '\0';
    
	
	std::cout<<"String-ul initial este ="<< message<<std::endl;


	char *p, *p_pointer;

    //atribuirea are urmatoarea semnificatie: 
    // adresa string-ului "message" se atribuie pointerului p1.
	p = message;

    //adresa string-ului text2 i se atribuie pointerului p2.
	p_pointer = text2;

    std::cout<<*p;


    //aici incepe copierea litera cu litera

    while( *p != '\0') {

         //copy litera de la adresa p la p_pointer
    	*p_pointer = *p;

    	std::cout<<"Copiaza in stringul text2 litera: "<<*p<<"\n";

    	p++; //p = p + 1

    	p_pointer++;   //p_pointer = p_pointer + 1;
    }

    //executa instructiunile de la liniile 54 pana la 59 pana cand intalneste marcajul de sfarsit de string '\0'

    *p_pointer = '\0';
 
    std::cout<<"Stringul copiat in text2 = "<<text2;

	return 0;
}
