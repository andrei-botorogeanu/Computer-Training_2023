/*
Author's name: Andrei Botorogeanu
Cerință: 
Se dă un număr natural par n. Determinaţi, în ordine lexicografică,
toate modalităţile de a-l scrie pe n ca sumă de puteri ale lui 2 scrise în 
ordine crescătoare. Se vor folosi doar puterile mai mari sau egale cu 2.

Requirement: 
Give an even natural number n. Determine, in lexicographic order,
all the ways of writing n as the sum of powers of 2 written in 
in ascending order. Use only powers greater than or equal to 2.

input: 
12
output:
2 2 2 2 2 2 
2 2 2 2 4 
2 2 4 4 
2 2 8 
4 4 4 
4 8
*/
#include<bits/stdc++.h>
using namespace std;
ifstream fin("descp2.in");
ofstream fout("descp2.out");

int v[1000], level,s, n,nr,p;

void display(int k) {
    for(int i = 1; i <= k; i++)
        cout << v[i] << " ";
    cout << endl;
}

int valid(int k) {
    s=0;
    if( v[k-1]>v[k] && k>1 ) return 0;
    
    for(int i=1; i<=k; i++) {
        s+=v[i];
    }
    if(s>n) return 0;
    return 1;
}

void backtracking(int k) {
    for(int i = 1; i <= p; i++) {
        
        v[k] = pow(2,i);
        
        if(valid(k)) {
            if(s==n) display(k);
            else backtracking(k+1);
        }
    }
}
int main()
{
    nr=1, p=0;
    cin>>n;
    
    while( nr<n ) {
        nr*=2;
        p++;
    }

    if(nr>n)    
        p--;
    backtracking(1);

    return 0;
}