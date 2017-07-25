//iostream_cin.cpp
#include<iostream>
#include<numeric>
double b,h,r;
using namespace std;
void main()
{
	cout <<"digite el valor de la base:";cin >>b;
	cout <<"digite el valor de la altura:";cin >>h;
	r=((b*h)/2);
	cout <<"el area del triangulo es:"<<r<<endl;
	system("pause");
}