#include<iostream>
#include<vector>
#define ROW 3
#define COLS 3
using namespace std;
int main()
{
	vector<vector<int>> mat;
	int num;
	for(int i=0; i<ROW; i++)
	{
		vector<int> v1;
	for(int i=0; i<COLS; i++)
		{
			cin>>num;
			v1.push_back(num);
		}
	mat.push_back(v1);
	}
	for(int i=0; i<mat.size(); i++){
		for(int j=0; j<mat[j].size(); j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
/*
PRB MATE:
Rad(-48)-rad(-27)=
rad(-1*48)-rad(-1*27)=
rad(i^2 * 16 * 3)-rad(i^2*3*3)=
4i*rad(3)-3i*rad(3)=
=> i*rad(3) */