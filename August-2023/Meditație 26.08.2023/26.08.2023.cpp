#include<iostream>
using namespace std;

typedef struct OK{
    int an, luna, zi;
} name;

int main()
{
    OK v[100];
    v[1].an = 80;
    v[1].luna = 6;
    v[1].zi = 20;
    cout << v[1].an<< " "<<v[1].luna<< " "<<v[1].zi;
}
