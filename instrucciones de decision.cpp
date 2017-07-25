//iostream_cin.cpp
#include<iostream>
#include<numeric>
int n;
using namespace std;
void main()
{cout <<"digite numero:";cin >>n;
if(n%7==0)
{cout <<"el numero es multiplo de 7" <<endl;
}
else
{if(n%7!=0)
{cout <<"el numero no es multiplo de 7" <<endl;
}
}
system("pause");
}