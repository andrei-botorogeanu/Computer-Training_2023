#include <iostream>
using namespace std;

int stack[1001], n, level, s;

int succesor() {
    if(stack[level] + s < n) { 
        stack[level]++;
        return 1;
    }
    else { 
        s = s-stack[level-1];
        return 0; 
    }
}
void init() {
    if(level == 1) 
        stack[level] = 0;
    else 
        stack[level] = stack[level-1]-1;
}
int valid() {
    if(stack[level] + s <= n) { 
        s+=stack[level];
        return 1; 
    }
    else 
        return 0;
}
int solution() {
    if(s==n) return 1;
    else return 0;
}
void print() {
    for(int i=1; i<=level; i++)
        cout << stack[i] << " " ;

    s-=stack[level];
    cout<<endl;
}
void backtracking(){
    level=1;
    init();
    while(level>0){
        int v=0, h=1;
        while(h==1 && !v) {
            h = succesor();
            if(h == 1)
            v = valid(); 
        }
        if(h == 1){ 
            if(solution()) print();
            else { level++; init(); }
        }
        else {
            level--;
        }
    }
}

int main()
{
    cin>>n;
    backtracking();
    return 0;
}