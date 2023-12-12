#include <iostream>
#include <iomanip>

using namespace std;

typedef struct {
        float weight;
        float value;
        int index;
} Object;

void readData(Object *ob, int *size, float *capacity) {

     float w, v = 1;
     cin>>*capacity;
     while(v != 0) {
          cin>>w>>v;
          ob[(*size)].weight = w;
          ob[(*size)].value = v;
          ob[(*size)].index = (*size);
          (*size)+=1;
     }
}

int compare(const void*a, const void*b) {
    Object *ob1 = (Object*)a;
    Object *ob2 = (Object*)b;
    return ob2->value/ob2->weight - ob1->value/ob1->weight;
}

int main(int argc, char const *argv[]) {

   int size = 0;
   float capacity;
   Object arr[ 100 ];
   readData(arr, &size, &capacity);
   cout<<size-1<<" - "<<capacity<<endl;
   qsort((void*)arr,size,sizeof(Object),compare);
   setprecision(4);
   int i = 0;
   while(capacity>0) {
      if(capacity>=arr[i].weight) {
        capacity -= arr[i].weight;
        i++;
      } else {
        capacity = -capacity;
      }
   }
   for(int j = 0; j < i; ++j) {
     cout<<"Object "<<arr[j].index+1<<": "<<arr[j].weight<<" "<<arr[j].value<<" - COMPLETE"<<endl;
   }
   if(capacity<0) {
      cout<<"Object "<<arr[i].index+1<<": "<<arr[i].weight<<" "<<arr[i].value<<" - ALTERED "<<-capacity<<"kg";
   }
  return 0;
}
