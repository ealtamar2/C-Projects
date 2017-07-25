//iostrem_cin.cpp
#include<iostream>
#include<numeric>
double n1,n2,r,k,s;
using namespace std;
void main()
{
cout <<"digite el valor de la camisa:";cin >>n1;
cout <<"digite la cantidad de camisas:";cin >>n2;
r=(n1*n2);
s=(r*0.25);
k=(r-s);
cout <<"el valor total a pagar es:"<<k<<endl;
system("pause");
}