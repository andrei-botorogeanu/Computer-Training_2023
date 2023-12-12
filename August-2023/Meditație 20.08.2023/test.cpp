#include <iostream>
#include <cstring>

using namespace std;

typedef struct student {
     char name[100];
     float computer_science,
           maths;
     int index;

} Student;

int compare(const void *a, const void *b) {

     Student *ob1 = (Student*)a;
     Student *ob2 = (Student*)b;
     return (ob2->maths - ob1->maths) > 0;
}

void readData(Student *ob, int *size) {

     char name2[100];

     float cs = 1,
           maths =  1;

     while( cs != 0 && maths != 0) {

       cin>>name2>>cs>>maths;
       strcpy(ob[(*size)].name, name2);
       ob[(*size)].computer_science = cs;
       ob[(*size)].maths = maths;
       ob[(*size)].index = (*size)+1;
       (*size)+=1;
     }

}

int main(int argc, char const *argv[]) {

   Student arr[ 100 ];

   int size = 0;

   readData(arr, &size);

   cout<<"SIZE="<<size-1<<endl;

   for(int i = 0; i < size - 1;i++) {

     cout<<arr[i].index<<":"<<arr[i].name<<" - "<<arr[i].computer_science<<" - "<<arr[i].maths<<endl;

   }

   qsort((void*)arr, size - 1, sizeof(Student), compare);

   cout<<"\n";

   for(int i = 0; i < size - 1;i++) {
     
     cout<<arr[i].index<<":"<<arr[i].name<<" - "<<arr[i].computer_science<<" - "<<arr[i].maths<<endl;
   }

   cout<<"\n";

  return 0;
}
