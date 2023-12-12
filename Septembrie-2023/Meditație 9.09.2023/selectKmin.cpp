Tehnica Divide Et Impera
------------------------

Problema:
---------
Selectia celui de-al k-lea minim:

Se considera un sir de n (n<=100) numere naturale memorate cu ajutorul unui vector A.
Sa se realizeze functia SEL care returneaza cel de-al k-lea element minim din vector. 
Functia va schimba ordinea elementelor din A, astfel incat, la finalul executarii ei, pe pozitia k in vector se va afla cel de-al k-lea numar cel mai mic.

Input:

n = 6
k = 4
A = [14,23,2,1,4,21]

Output:
A = [4,1,2,14,23,21]
functia SEL va returna valoarea 14 , iar vectorul va contine: [4,1,2,14,23,21]

folosim tehnica Divide Et Impera:

1. Descompunem problema curenta.

Identificam vectorul , prin indicii [lo, hi]
lo = 0
hi = len(A) = 6
Ultimul element A[hi] este plasat pe pozitia corecta in vectorul ordonat. In plus, toate
elementele de valori mai mici decat V[hi] se vor afla in stanga acestuia, iar cele mai mari
in dreapta lui.


Daca pozitia x == k atunci problema este rezolvata, altfel problema curenta
este descompusa in doua subprobleme, dupa cum urmeaza:

- Daca x > k se continua cu subproblema care prelucreaza prima parte a vectorului intre indicii
[lo, x-1]
- daca x < k se continua subproblema care prelucreaza ultima parte a vectorului intre indicii 
[x+1, hi]

2. Combinarea solutiilor subproblemelor. 






