#include<iostream>
#include<numeric>
int i,n,c1=0,c2=0,v[100];
using namespace std;
void main()
{
	cout <<"digite longitud del vector:"; cin >>n;
	for(i=1;i<=n;i=i+1)
	{
		cout <<"v["<<i<<"]="; cin >>v[i];
	}
	cout <<endl;
	cout <<"el vector creado es:" <<endl;
	for(i=1;i<=n;i=i+1)
	{
		cout <<v[i]<<" ";
		cout <<endl;
		for(i=1;i<=n;i=i+1)
		{ 
			if(v[i]%2==0)
			{
				c1=c1+1;
			}
		else
		{
			c2=c2+1;
			}
	}
	cout <<"hay" <<c1<<"numeros pares" <<endl;
	cout <<"hay" <<c2<<"numeros impares" <<endl;
	system("pause");
	}
}
