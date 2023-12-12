#include<bits/stdc++.h>
using namespace std;
ifstream fin("descp2.in");
ofstream fout("descp2.out");
int v[1000], level,s, n,nr,p;
void display(int k)
{
    for(int i=1; i<=k; i++)
        cout<<v[i]<< " ";
    cout<<endl;
}
int valid(int k)
{
    if(s==n)    return 1;
    return 0;

}

void backtracking(int k)
{
    // int p=0;
    for(int i=0; i<=n; i+=2)
    {
        v[k]=i; s+=i;
        if(valid(k))
        {
            if(s==n) display(k);
            else backtracking(k+1);
        }
    }
}
int main()
{
     nr=1, p=0;
    cin>>n;
    while( nr<n )
    {
        nr+=2;
        p++;
    }
    if(nr>n) p--;
    backtracking(1);

    return 0;
}
