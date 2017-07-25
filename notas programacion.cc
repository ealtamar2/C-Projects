//iostream_cin.cpp
#include<iostream>
#include<numeric>
double x1,x2,x3,x4;
using namespace std;
void main()
{
cout <<"digite primera nota:";cin >>x1;
cout <<"digite segunda nota:";cin >>x2;
cout <<"digite tercera nota:";cin >>x3;
x4=((x1*0.3)+(x2*0.3)+(x3*0.4));
cout<<"el resultado de la nota definitiva es:"<<x4<<endl;
system("pause");
}
