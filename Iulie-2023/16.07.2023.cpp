#include<iostream>
using namespace std;
int main()
{
    int n, v[1001], cnt=0, d[1001];
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>v[i];
    for(int i=1; i<=n; i++){
        d[i]=0;
        for(int g=1; g*g<=v[i]; g++)
        {
            if( v[i]%g==0 ) d[i]+=2;
            if( g*g==v[i] ) d[i]--;
        }
    }
        for(int i=1; i<=n-1; i++)
            for(int j=i+1; j<=n; j++)
                if( d[i] == d[j] )  cnt++;

    cout<<cnt;
}
