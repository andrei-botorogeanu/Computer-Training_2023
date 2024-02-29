#include <iostream>

using namespace std;

struct student {
    char nume[20];
    char prenume[20];
    int varsta;
};

int main()
{
    student *ptr;
    ptr = new student;
    cin>>ptr->nume>>ptr->prenume>>ptr->varsta;
    
    cout<<ptr->nume<< " "<<ptr->prenume<< " "<<ptr->varsta;
    
    // float *adr;
    // adr = new float;
    // *adr=100;
    // cout<<*adr;
    // delete adr;
    // return 0;
}