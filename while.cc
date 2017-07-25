#include<iostream>
#include<numeric>
int i,n,m,s=0;
using namespace std;
void main ()
{ 
	cout <<"digite valor de n:";cin >>n;
    cout <<"digite valor de m:"; cin >>m;
	for(i=n;i<=m;i=i+1)
	{
		if(i%2==0)
		{s=s+i;
		}
	}
	cout <<"la sumatoria es" <<s<<endl;
	system("pause");
}
