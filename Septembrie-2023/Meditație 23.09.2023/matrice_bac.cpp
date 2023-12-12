/*
Problema:

In fisierul matrice.in se afla un tablou bidimensional cu componente intregi.
Pe prima linie se afla doua valori reprezentand numarul de linii, respectiv 
numarul de coloane, separate printr-un spatiu, iar pe urmatoarele linii 
componentele tabloului. Se cere sa se obtina un tablou format exact din 
aceleasi elemente ca si matrice data dar elementele fiecarei linii si 
coloane sa fie in ordine crescatoare.
Tabloul obtinu sa se scrie in fisierul matrice.out

    8 7 5
M : 2 3 1
    0 9 3

           0 1 2 
M:         3 5 7  
           7 8 9

Solutie:
Matricea o liniarizezi. o transformi intr=un vec

for(int i = 0; i < n; ++i) {
	for(int j = 0; j < m; ++j) {
	     array[ i * m + j ] = mat[i][j]
	}
}
i = 0

array[0 * 3 + 0] = mat[i][j]
array[0] = mat[0][0]

array[0 * 3 + 1] = mat[i][j]
array[1] = mat[0][1]


array[0 * 3 + 2] = mat[i][j]
array[2] = mat[0][2]

array[1 * 3 + 0] = mat[i][j]
array[3] = mat[1][0];


bubblesort(array)


for(int i = 0; i < n; ++i) {
	for(int j = 0; j < m; ++j) {
	     mat[i][j] = array[i*m+j] 
	}
}

afisare(matrice)

Algoritm: (algoritmul este o succesiune de pasi care se executa mecanic in vederea obtinerii unui rezultat, deci pornind de la 
date de intrare - input, ajungem la date de iesire OUTPUT)

Caracteristici:
- input
- output
- finitudine
- generalitate
- eficienta
- corectitudine

pasul 1:
citim matricea
pasul 2:
liniarizam matricea => array
pasul 3:
sortam vectorul (matricea este deja sortata pe linii si coloane)
pasul 4:
array => matrice
pasul 5:
afisam matricea sortata

End Program!



*/

