#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("submultimi.in");
ofstream fout("submultimi.out");
int n, stack[101];
void print_solution(int level)
{
    for(int i=1; i<=level; i++)
        cout<<stack[i]<<" " ;
    cout<<endl;
}
void solve(int level)
{
    if(level<=n)
    {
        for(int i = stack[level-1]+1; i<=n; ++i)
        {
            stack[level]=i;
            print_solution(level);
            solve(level+1);
        }
    }
}
int main()
{
    n = 4;
    solve(1);
    return 0;
}
