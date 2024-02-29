#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("submultimi.in");
ofstream fout("submultimi.out");
int pow(int a, int b)
{
    int p=1;
    for(int i=1; i<=b; i++)
    {
        p*=a;
    }
    return p;
}

int main(int argc, char const *argv[])
{
    int n, keep;
    fin>>n;
    keep=pow(2,n);

    for(int i=1; i<=keep-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            if( (1<<j) & i) fout<<j+1<< " ";
        }
        fout<<endl;
    }
}
