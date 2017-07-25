//iostream_cin.cpp
#include<iostream>
#include<numeric>
double n1,n2,s,r,m,d;
using namespace std;
void main()
{
	cout <<"digite primer numero:";cin >>n1;
	cout <<"digite segundo numero:";cin >>n2;
	s=(n1+n2);
	r=(n1-n2);
	m=(n1*n2);
	d=(n1/n2);
	cout <<"el resultado de la suma es:"<<s<<endl;
	cout <<"el resultado de la resta es:"<<r<<endl;
	cout <<"el resultado de la multiplicacion es:"<<m<<endl;
	cout <<"el resultado de la division es:"<<d<<endl;
	system("pause");
}
