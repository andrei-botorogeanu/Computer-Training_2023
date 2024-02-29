/*

#Problema:

Secventa de cautat:

Se citeste de la tastatura un numar natural cu cel mult 100 de cifre.
Determinati cea mai lunga secventa de cifre consecutive, pozitia de inceput a
acesteia si continutul. In cazul in care exista mai multe secvente de aceeasi
dimensiune maxima, afisati-o pe prima din sir.

Input: 432156012345698123001
Lungimea maxima = 7
Prima pozitie = 6
Subsirul = 0123456 

*/

#include <stdio.h>

char str[ 100 ];

//abcd\0

//i=0,1,2,3,4
//i == 4 atunci str[4] == '\0'

int my_strlen(char str[]) {

    int i = 0;

	while( str[ i ] != '\0' ) {

		i++;
	}

	return i;
}

int search(char str[], int *lungime_maxima) {

	int i = 1,
    
        iMax, //denota pozitia de inceput a subsirului de lungime maxima

        iCurr = 0, //denota o pozitie curenta

        //aici folosim strlen2

        n = my_strlen( str );//extragem lungimea sirului

    *lungime_maxima = 1; //lungimea maxima a subsirului de cifre consecutive

    //     1 < n

    while( i < n ) {


        //calculam lungimea maxima a subsirului de cifre consecutive
        if( i - iCurr > *lungime_maxima ) {

        	iMax = iCurr;

        	*lungime_maxima = i - iCurr;
        } 

        
        iCurr = i;


        while(str[i]+1 == str[i+1] && i < n) i++;
        

        i++;        

    }

    //toate instructiunile de la linia 58 pana la 75 se executa atata timp cat i < n

    //se trece la urmatoarea instructiune din program

    //sir input = 844444444444443
    //                      i  

    //8891234567812234

    //i
    // 3,4
    //str[3+1] == str[4]
    //3+1 == 4


    return iMax;
}

int main(int argc, char const *argv[])
{

    int iMax, lMax;	  

	gets( str );
	
    printf("%s", str);	

    iMax = search(str, &lMax);    

    printf("\nPozitia de inceput = %d \n Lungimea maxima = %d\n", iMax, lMax);


    //aici tiparim sirul de cifre consecutive

    for(int i = iMax; i < iMax + lMax; ++i) printf("%c ", str[i]);
	
	return 0;

    //1234567 1113441230             
               
/*
    i = 0
    n = 17
    while(i<n) {
	   0 - 0 > 1 NU
    }
    iCurr = i
    while()
*/

}
