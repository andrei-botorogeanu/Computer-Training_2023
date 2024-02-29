#include <iostream>
using namespace std;
int stack[1001],level,s,n;

void backtracking(int level){
    if( s == n ) {
        for(int i = 1; i < level; i++)
            cout<<stack[i]<< " ";
        cout<<endl;
    }
    else {
        stack[level]=0;
        while(stack[level] + s < n) {
            stack[level]++;
            s = s + stack[level];
            backtracking(level+1);
            s = s - stack[level];
        }
    }
}
int main()
{
    n=7;
    backtracking(1);

    return 0;
}