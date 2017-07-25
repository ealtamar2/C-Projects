#include<iostream>
#include<numeric>
int v[10],i,n,a[10],n1,c[10];
using namespace std;
void main()
{
	cout <<"digite tamaño del vector1  "; cin>>n;
	for(i=1;i<=n;i=i+1)
	{
		cout <<"v["<<i<<"]="; cin >> v[i];
	}
	cout <<"**********el vector creado es*********"<<endl;
	for(i=1;i<=n;i=i+1)
	{
		cout <<v[i]<<" ";
	}
	cout <<endl;
	cout <<"************************************************" <<endl;
	cout <<"digite el tamaño del vector2  "; cin >>n1;
	for(i=1;i<=n1;i=i+1)
	{
		cout <<"a["<<i<<"]="; cin >> a[i];
	}
	cout <<"******************el vector creado es***************"<<endl;
	for(i=1;i<=n;i=i+1)
	{
		cout <<a[i]<<" ";
	}
	cout <<endl;
	cout <<"*****************************************" <<endl;
	if(n==n1)
	{
		for(i=1;i<=n;i=i+1)
		{
			c[i]=v[i]+a[i];
		}
	}
	else
	{
		cout <<"no se puede" <<endl;
	}
	cout <<endl;
	cout <<"****************el vector resultante de la sumatoria es********************" <<endl;
	for(i=1;i<=n;i=i+1)
	{
		cout << c[i] << " ";
	}
	cout <<endl;
	cout <<"*******************************************" <<endl;
	system ("pause");
}