//iostream_cin.cpp
#include <iostream>
#include <numeric>
double x,y; 
using namespace std;
void main()
{
	cout <<"digite el numero:",cin >>x;
	cout <<"digite el numero:",cin >>y;
	if((x<0)&&(y<0))
	{
		cout <<"el punto esta en el tercer cuadrante:"<<(x,y)<<endl;
	}
	else
	{if((x<0) && (y>0))
	{cout <<"el punto esta en el segundo cuadrante:"<<(x,y)<<endl;
	}
	else
	{if((x>0) && (y<0))
	{cout <<"el punto esta en el cuarto cuadrante:"<<(x,y)<<endl;
	}
	else
	{if((x>0) && (y>0))
	{cout <<"el punto esta en el primer cuadrante:"<<(x,y)<<endl;
	}
	else
	{if((x==0) && (y==0))
	{cout <<"el punto esta en el centro:"<<(x,y)<<endl;
	}
	}
	}
	}
	}
system("pause");
}