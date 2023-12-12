#include<bits/stdc++.h>
using namespace std;
// DISTANTA LEVENSHTEIN
int min3(int a, int b, int c)
{
	return min( a, min(b,c) );
}
int edit_distance( string word1, string word2 )
{
	int n=word1.size();
	int m=word2.size();
	int DP[n+1][m+1];
	DP[0][0]=0;
	for(int i=1; i<=n; i++)
		DP[i][0]=i;
	for(int j=1; j<=m; j++)
		DP[0][j]=j;
	for(int i=1 ;i<=n; i++)
		for(int j=1; j<=m; j++)
			if( word1[i-1] == word2[j-1] )
				DP[i][j] = DP[i-1][j-1];
			else DP[i][j] = 1+ min3(DP[i][j-1], DP[i-1][j], DP[i-1][j-1]);
	// DP[0][0]=0;
	// 	for(int i=0; i<=n; i++)
	// {
	// 	for(int j=0; j<=m; j++)
	// 	{
	// 		cout<<DP[i][j]<< " ";
	// 	}
	// 	cout<<endl;
	// }
	return DP[n][m];
}
int main()
{
	string word1, word2;
	cin >> word1>>word2;
	cout << edit_distance(word1, word2);
}