#include<iostream>
using namespace std;
int main()
{
	int n, v[100]; 
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>v[i];
	int i=1;
	while(i<=n)	{
		int s=0,
			copy_no = v[i];
		while(v[i]!=0)	{
			s += (v[i]%10)*(v[i]%10)*(v[i]%10);
			v[i]/=10;
		}
		if(copy_no==s) cout<< "Yes\n";
		else cout<< "No\n";
		i++;
	}
}