#include <fstream>
#include<iostream>
using namespace std;

const int di[4] = {-1, 0, 1,  0};
const int dj[4] = {0, 1, 0,-1};
int mat[101][101],n,m;

fstream fin("labirint.in");
int poz_init, poz_fin;
const int N_MAX = 2005;
const int M_MAX= 2005;
unsigned int matrice[N_MAX][M_MAX];
unsigned int poz_init_x, poz_init_y, poz_fin_x, poz_fin_y;

void display()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<mat[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int check(int i, int j)
{
    return i>=0 && i<n && j>=0 && j<m;
}
void solve(int i, int j, int level)
{
    for(int d=0; d<4; d++)/// am luat 4 directii pentru nord, sus, vest, est
    {
        int i_next=i+di[d];///aici cautam o noua directie
        int j_next=j+dj[d];
        if( check(i_next, j_next) && !mat[i_next][j_next] )
        {/// verifica dc i_next si j_next rep. o coord. valida
            /// sau dc e 0 sau 1 sau daca e perete sau nu
            mat[i_next][j_next]=level;
            ///se porneste de la level=2 si creste level ul la fiecvcare autoapel
            if(i_next==poz_fin_x && j_next==poz_fin_y ) display();
                            /// poz_fin sunt coord. finale
            else

                solve(i_next, j_next, level+1);
        /// dc nu ajuns in coord. finale at. se apeleaza cu un nivel in plus
        /// cauta o noua pozitie valida
                mat[i_next][j_next]=0;
        /// matricea se reconfigureaza cu 0/ se demarcheaza cu 0 ca sa gaseasca un traseu nou
        }
    }
}
int main()
{
    fin>>n>>m;
    fin>>poz_init_x>>poz_init_y;
    fin>>poz_fin_x>>poz_fin_y;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            fin>>mat[i][j];
    display();
    cout<< "\n";
    mat[poz_init_x][poz_init_y]=1;
    solve(poz_init_x, poz_init_y, 2);

    return 0;
}
