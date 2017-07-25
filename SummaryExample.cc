#include<iostream>
#include<numeric>
int i,prom,sum=0,n,num;
using namespace std;
void main()
{cout <<"digite cantidad de numeros:";cin >>n;

	for(i=1;i<=n;i=i+1)
	{cout <<"digite numero:";cin >>num;
	sum=(sum+num);
	}

{
	prom=(sum/n);
		cout <<"la sumatoria es:"<<sum <<endl;
	cout <<"el prom es:"<<prom <<endl;
}
system("pause");
}
