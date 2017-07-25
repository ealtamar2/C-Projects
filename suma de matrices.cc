#include<iostream>
#include<numeric>
int v[10][10],a[10][10],b[10][10],i,j,n,m,x,y;
using namespace std;
void main()
{
	cout <<"digite numero de filas  "; cin>>n;
	cout <<"digite numero de columnas "; cin>>m;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cout <<"v["<<i<<","<<j<<"]="; cin >> v[i][j];
		}
	}
cout <<"***************la matriz creada es*************" <<endl;
for(i=1;i<=n;i++)
{
	for(j=1;j<=m;j++)
	{
		cout <<v[i][j]<<" ";
	}
	cout <<endl;
}
{
cout <<"digite numero de filas de la matriz 2  "; cin >>x;
cout <<"digite numero de columnas de la matriz 2 ";cin >>y;
for(i=1;i<=x;i++)
{
	for(j=1;j<=y;j++)
	{
		cout <<"a["<<i<<","<<j<<"]="; cin >> a[i][j];
	}
}

cout <<"***************la matriz creada es*************" <<endl;


		


