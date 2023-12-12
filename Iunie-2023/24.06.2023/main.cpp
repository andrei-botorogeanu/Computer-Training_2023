#include <bits/stdc++.h>

using namespace std;
int mat[30][30],mat2[30][30];
const int dx[] = {0,0,-1,1};
const int dy[] = {-1,1,0,0};
int n,m,maxim=0;

bool inside(int i,int j)
{
    return i>=1 && i<=n && j>=1 && j<=m;
}
void backtracking(int i,int j)
{
    if(i==n && j==m)
        maxim=max( maxim,mat2[n][m] );
    else
        for(int dist=0; dist<4; dist++)
        {
            int new_i=i+dx[dist];
            int new_j=j+dy[dist];
            if( inside(new_i, new_j) && mat[new_i][new_j]>=mat[i][j] && mat2[new_i][new_j]==0 )
            {
                mat2[new_i][new_j]=mat2[i][j]+1;
                backtracking(new_i, new_j);
                mat2[new_i][new_j]=0;
            }
        }
}
int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>mat[i][j];
    mat2[1][1] = 1;
    backtracking(1,1);
    if(maxim==0)
        cout<< "imposibil";
    else cout << maxim;
    return 0;
}
