#include <iostream>					
#include <numeric>					
#include <math.h>	
int n,I,H[20],k,dec,c,r;					
char V [20];					
using namespace std;					
void main (){					
	cout<<"Ingrese Longitud Del Hexadecimal: ";cin>>n;				
		for (I=1;I<=n;I++){			
			cout<<"Hexadecimal["<<I<<"]= ";cin>>V[I];		
		}			
		for (I=1;I<=n;I++){			
			switch (V[I]) {		
				case '0': H[I]=0; break;	
				case '1': H[I] =1; break;	
				case '2': H[I] =2; break;	
				case '3': H[I] =3; break;	
				case '4': H[I] =4; break;	
				case '5': H[I] =5; break;	
				case '6': H[I] =6; break;	
				case '7': H[I] =7; break;	
				case '8': H[I] =8; break;	
				case '9': H[I] =9; break;	
				case 'A': H[I] =10; break;	
				case 'B': H[I] =11; break;	
				case 'C': H[I] =12; break;	
				case 'D': H[I] =13; break;	
				case 'E': H[I] =14; break;	
				case 'F': H[I] =15; break;	
			}		
		}			
	decimal = 0;				
	k=1;	
	if (n != 1){
			while (k<= n) {			
			dec = dec + H[k] * pow((double)16,(n - k));		
			k=k+1;		
		}			
		I=1;			
		while (dec>=2) {			
			c=dec/2;		
			r=dec % 2;		
			V[I] =r;		
			I=I+1;		
			dec=c;		
		}			
	   	V[I]=c;				
		k=I;			
		cout<< "el numero binario es:  ";			
		while  (k>=1) {			
			cout<<"  "<< V[k];		
			k=k-1;		
		}	
	
	}else{
		Dec = H[1];
			I=1;			
		while (dec>=2) {			
			c=dec/2;		
			r=dec % 2;		
			V[I] =r;		
			I=I+1;		
			dec=c;		
		}			
	   	V[I]=c;				
		k=I;			
		cout<< "el numero binario es:  ";			
		while  (k>=1) {			
			cout<<"  "<< V[k];		
			k=k-1;		
		}	
	
	}
			

	system ("pause");
}
