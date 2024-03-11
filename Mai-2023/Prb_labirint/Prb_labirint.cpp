// Problema labirintului
// Aici input-ul trebuie codat a.i. să existe ieșire din labirint

#include <iostream>
using namespace std;
int stack[100][3], level;
int mat[10][10],n,m;
int explored(int level, int r, int c)
{
    for(int i = 1; i <= level-1; i++)
    {
        if(stack[i][0] == r && stack[i][1] == c)
            return 1;
    }
    return 0;
}
void print(int level)
{
    for(int j=1; j<=level-1; j++)
        cout<<stack[j][0]<<" "<<stack[j][1]<< "\n";
    cout<<endl;
}
void backtracking(int line, int column, int level)
{
    if( mat[line][column] == 16 ) print(level);
    else stack[level][0] = line, stack[level][1] = column;
    for(int i=1; i<=4; i++)
    {
        switch (i)
        {
        case 1:
/*N*/       if( mat[line][column] & 8 && !explored(level, line-1, column) )
                { backtracking(line - 1, column, level+1 ); break; }
        case 2:
/*E*/       if( mat[line][column] & 4 && !explored(level, line, column+1) )
                { backtracking( line, column+1, level+1 ); break; }
        case 3:
/*S*/       if( mat[line][column] & 2 && !explored(level, line+1, column) )
                { backtracking( line+1, column, level+1 ); break; }
        case 4:
/*V*/       if( mat[line][column] & 1 && !explored(level, line, column-1) )
                { backtracking( line, column-1, level+1 ); break; }
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>mat[i][j];

    mat[0][0]=16;
    mat[0][m+1]=16;
    mat[n+1][m+1]=16;
    mat[n+1][0]=16;
    for(int i=1; i<=m; i++)
    {
        mat[0][i]=16;
        mat[n+1][i]=16;
    }
    for(int i=1; i<=n; i++)
    {
        mat[i][0]=16;
        mat[i][m+1]=16;
    }

    for(int i=0; i<=n+1; i++)
    {
        for(int j=0; j<=m+1; j++)
            cout<<mat[i][j]<< "  ";
        cout<<endl;
    }

    int line=1, column=1;
    backtracking(line, column, 1);
}