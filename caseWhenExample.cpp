#include<iostream>
#include<numeric>
double n1,n2,s,r,m,d;
int op;
using namespace std;
void main()
{
	cout <<"*************************" <<endl;
	cout <<"*operaciones matematicas*" <<endl;
	cout <<"*1.suma                 *" <<endl;
	cout <<"*2.resta                *" <<endl;
	cout <<"*3.multiplicacion       *" <<endl;
	cout <<"*4.division             *" <<endl;
	cout <<"*************************" <<endl;
	cout <<"digite primer numero:";cin >>n1;
	cout <<"digite segundo numero:";cin >>n2;
	cout <<"digite opcion:";cin >>op;
	switch(op)
	{
	case 1:s=(n1+n2);
		cout <<"el resultado de la suma es" <<s<<endl;
		break;
	case 2:r=(n1-n2);
		cout <<"el resultado es" <<r<<endl;
		break;
	case 3:m=(n1*n2);
		cout <<"el resultado es" <<m<<endl;
		break;
	case 4:d=(n1/n2);
		cout <<"el resultado es" <<d<<endl;
		break;
	default:
		{
			cout <<"no es una opcion valida" <<endl;
		}
	}system("pause");
}