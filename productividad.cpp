#include <iostream>
#include <math.h>
using namespace std;
int d;
double num_horas;
double  cant_articulos;
double  valor_articulos;
int cont, cont2;
double productividad ;
double salario;
double v_horas[100],v_art[100], v_valor[100], prod[100];
void main(){

	cout<<"\n\n\t\t**********************************************************\n\n";
		cout<<"\t\t\t   PRODUCTIVIDAD DE UNA EMPRESA\n";
		cout<<"\n\n\t\t*******************************************************\n";
	    
		
		cont = 1;
	cout<<"\ndigite numero de dias\n ";cin>>d;

   for(int i =0;i<d;i++){

	cout<<"digite numero de horas "<<"en el dia: "<<cont<<":"<<"\n";cin>>num_horas;
	cout<<"digite numero articulos producidos "<<"en el dia: "<<cont<<":"<<"\n";cin>>cant_articulos;	
	cout<<"digite valor de articulo "<<cont<<":"<<"\n";cin>>valor_articulos;	
	  
	      v_horas[i]=num_horas;
	      v_art[i]= cant_articulos;
          v_valor[i]=valor_articulos;
	    
	     cont++;

		cout<<"horas trabajadas en el: "<<"dia: "<<v_horas[i]<<"\n";
		cout<<"articulos producidos en el: "<<"dia: "<<v_art[i]<<"\n";
		cout<<"precio del articulo: "<<"dia: "<<v_valor[i]<<"\n";
			
		if((v_art[i] >= 0.0)&&(v_art[i] <= 19.9)){
         cout<<"la productividad  es deficiente\n";
	   
		 }else{
		 if ((v_art[i] >= 20.0)&&(v_art[i] <= 29.9)){

	       cout<<"la productividad es regular\n";

		}else{
		if((v_art[i] >= 30.0)&&(v_art[i] <= 40.0)){

	      cout<<"la productividad del empleado es rentable\n";
          }
		}
	}

}
      cont2=1;
       for(int i =0;i<d;i++){
		  
		   salario = v_horas[i] * v_valor[i];
		   cont2++;
		   
		   cout<<"salario del "<<"empleado: "<<cont2<<salario<<"\n";
	   }
	   
	   for(int i =0;i<d;i++){
           productividad = v_art[i] / v_horas[i];
		   prod[i]= productividad;
		   	cout<<"productividad del "<<"empleado: "<<productividad<<"\n";
	
	
	   }
	   

	   system("pause");
}