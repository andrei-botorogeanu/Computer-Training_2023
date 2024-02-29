#include <iostream>
using namespace std;
int v[1001],s,n;
void backtracking(int k){
    if(s==n) {
        for(int i=1; i<k; i++)
        {
            cout<<v[i]<< " ";
        }
        cout<<endl;
    }else {
     v[k]=0;   
     while(v[k]+s < n){
        v[k]++;
        s=s+v[k];
        backtracking(k+1);
        s=s-v[k];
     }
    }
    
}
int main()
{
    cin>>n;
    backtracking(1);
    return 0;
}