#include <iostream>
using namespace std;
int vec[10];
int main()
{int i=0;
    vec[i++]=100;
    cout<<vec[0]<<" " <<vec[1]<<endl;
    vec[0]=0, vec[1]=1;
    i=0;
    vec[++i]=100;
    cout<<vec[0]<< " " <<vec[1]<<endl;
    return 0;
    // scriere prefixata si postfixata
}
