#include <iostream>				
#include <numeric>				
#include <math.h>
int n, i, V [20], dec, c, r;				
using namespace std;				
void main (){
	cout<< "Digite Numero Decimal:  ";cin>>dec;
	i = 1;			
			
		if  ((dec>=1) &&  (dec<=15)){		
			switch  (dec) {	
			case 1: cout<<"La Conversión A Hexadecimal Es: 1 ";break;
			case 2:cout<< "La Conversión A Hexadecimal Es: 2";break;
			case 3:cout<<"La Conversión A Hexadecimal Es: 3 ";break;
			case 4:cout<< "La Conversión A Hexadecimal Es: 4 ";break;
			case 5:cout<<  "La Conversión A Hexadecimal Es: 5 ";break;
			case 6:cout<< "La Conversión A Hexadecimal Es: 6";break;
			case 7:cout<< "La Conversión A Hexadecimal Es: 7";break;
			case 8:cout<< "La Conversión A Hexadecimal Es: 8";break;
			case 9:cout<<"La Conversión A Hexadecimal Es: 9";break;
			case 10: cout<<"La Conversión A Hexadecimal Es: A";break;
			case 11:cout<< "La Conversión A Hexadecimal Es: B";break;
			case 12: cout<<"La Conversión A Hexadecimal Es: C";break;
			case 13: cout<< "La Conversión A Hexadecimal Es: D";break;
			case 14:cout<< "La Conversión A Hexadecimal Es: E";break;
			case 15: cout<< "La Conversión A Hexadecimal Es: F";break;
			}	
		}else{		
			while(dec>=16) {	
				c=dec/16;
				r=d%16;
				V[i] =r;
				dec=c;
				i++;
			}	
cout<<"el hexadecimal es: ";
		while(i>=1){
			d = V[i];
			switch  (dec) {
				case  1: cout<<"1";break;
				case 2:cout<< "2";break;
				case 3:cout<<"3";break;
				case 4:cout<< "4";break;
				case 5:cout<<  "5";break;
				case 6:cout<< "6";break;
				case 7:cout<< "7";break;
				case 8:cout<< "8";break;
				case 9:cout<<"9";break;
				case 10: cout<<"A";break;
				case 11:cout<< "B";break;
				case 12: cout<<"C";break;
				case 13: cout<< "D";break;
				case 14:cout<< "E";break;
				case 15: cout<< "F";break;
			}
			i--;
		}
		}
		
		system("pause");

}
