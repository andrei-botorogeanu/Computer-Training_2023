/*
Se considera N , N <= 1000 tipuri de bancnote, valori diferite, din fiecare existand un numar nelimitat de bucati
Sa se determine o modalite de plata a valorii S, folosind un numar minim de bancnote.

input: N,S
N = 5
S = 100

3,15,1,5,2

output:
6 * 15
2 * 5

 */
#include <bits/stdc++.h>

using namespace std;

int N, S, B[ 1001 ];

void sortare_desc() {

     int aux,j; 

     //aplicam metoda insertiei
     for(int i = 1; i < N; ++i) {
     	 j = i - 1;
     	 aux = B[i];
     	 while(j>=0 && aux > B[j]) {
     	 	B[j+1] = B[j];
     	 	j--;
     	 }
     	 B[j+1] = aux;
     }
}

int main() {
	
	//citim N
	//citim suma S
	//de exemplu suma S = 100 si numarul de bancnote N = 5
    cin>>N>>S;

    //citim vectorul bancnote
    for(int i = 0; i < N; ++i) cin>>B[i];

    //3,15,1,5,2
    //pasul 1: sortam vectorul B in ordine descrescatoare
    //15, 5, 3, 2, 1	

    //for(int i = 0; i < N; ++i) cout<<B[i]<<" ";	

    sortare_desc();

    cout<<endl;

    //vectorul sortat 
    for(int i = 0; i < N; ++i) cout<<B[i]<<" ";

     
    //15, 5, 3, 2, 1	
    //nu sortam crescator
    
    cout<<endl;
 

    //aplicat metoda Greeey
    for(int i = 0; i < N; ++i) {

    	if(S >= 0) cout<< S / B[i] << " * "<< B[i]<<endl;

    	S = S - (S / B[i])* B[i];
        
    	if(!S) break;
    }	
 
    if(S>0) cout<<"No Solution";
    
}