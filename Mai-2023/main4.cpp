#include <iostream>
using namespace std;

int v[1001],n,k,s;
void ini() {
    if(k==1) 
        v[k] = 0;
    else 
        v[k] = v[k-1]-1;
}
int val(){
    if( v[k]+s <= n ) { 
        s=s+v[k];
        return 1; 
    }
    return 0;
}
void tip(){
    
    for(int i=1; i<=k; i++)
    cout<<v[i]<< " ";
    cout<<endl;
    s=s-v[k];
}
int sol(){
    return s==n;
}
int suc(){
    if(v[k]+s < n) { v[k]++; return 1; }
    else { s=s-v[k-1]; return 0; }
}
void BC(){
    k=1;
    ini();
    while(k>0) {
        int h=1, v=0;
        while(h==1 && !v){
            h=suc();
            if(h==1) v=val();  
        }
        if(h==1) {
            if(sol()) tip();
            else { k++; ini(); }
                 }
        else k--;
    }
}
int main()
{
    cin>>n;
    BC();
    return 0;
}