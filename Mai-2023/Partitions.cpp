#include <iostream>
using namespace std;
int stack[1001];
int level,n;
int succesor(){
    if(stack[level] < stack[level-1]+1) {
        stack[level]++;
        return 1;
        }
    return 0;
}
void init(){
    stack[level]=0;
}
int valid(){
    return 1;
}
int solution(){
    return level==n; 
}
void print(){
    int max = stack[1];
    for(int i=2; i<=n; i++)
    {   
        if(stack[i]>max) max = stack[i];
    }
    for(int i=1; i<=max; i++)
    {
        cout << "{";
        for(int j=1; j<=n; j++)
            if(stack[j] == i) cout<< " " << j << " ";
        cout << "}";
    }
    
    cout<<endl;
    
}
void backtracking(){
    level = 1;
    init();
    int s, v;
    while(level > 0) {
        int  h = 1, v = 0;
        while(h!=0 && !v) {
            h = succesor();
            if(h != 0)
                v = valid();
        }
        if(h == 1) {
            if(solution()) 
                print();
            else {
                level++;
                init();
            }
        }
        else { level--; }    
    }
}
int main()
{
    n=5;
    backtracking();

    return 0;
}