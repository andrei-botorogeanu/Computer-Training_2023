#include <iostream>

using namespace std;
double sqrt2(double n)
{
    float a,b, epsilon=0.0000001;
    /// epsilon este aproximatia radicalului
    b=1; a=n;
    while(a-b>epsilon)
    {
        a=(a+b)/2;
        b=n/a;
    }
    return a;
}

int main()
{
    double n;
    cin>>n;
    cout<<sqrt2(n);
    return 0;
}
