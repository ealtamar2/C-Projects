//iostream_cin.cpp
#include<iostream>
#include<numeric>
int n1,n2,r;
using namespace std;
void main()
{cout <<"digite primer numero:";cin >>n1;
cout <<"digite segundo numero:";cin >>n2;
if(n1==n2)
{
r=(n1+n2);
cout <<"el resultado de la suma es:"<<r<<endl;
}
else
{
if(n1>n2)
{
r=(n1-n2);
cout <<"el resultado de la resta es:"<<r<<endl;
}
else
{
if(n1<n2) 
{
r=(n1*n2);
cout <<"el resultado de la multiplicacion es:"<<r<<endl;
}
}
}
system("pause");
}
