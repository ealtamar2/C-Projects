#include <iostream>					
#include <numeric>					
int d,I,c,V [20],r,k;					
using namespace std;					
					
void main (){					
	cout<< "Digite Numero Decimal:  ";cin>>d;				
		I=1;			
		while  (d>=2) {			
			c=d/2;		
			r=d % 2;		
			V[I] =r;		
			I=I+1;		
			d=c;		
		}			
	    V[I]=c;				
		k=I;			
		cout<< "el numero binario es:  ";			
		while  (k>=1) {			
			cout<<"  "<< V[k];		
			k=k-1;		
		}	
		cout<<"\n";
		system ("pause");
}					
