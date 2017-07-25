#include<iostream>
#include<math.h>
#include<conio.h>
int op;
//***** variables runge kutta*********

int j,n; 
double m,k,t0,x,x0,tf,v,z,h,t,k1,k2,k3,k4,c1,c2,c3,c4;
//**** variables tailor***************
int j_T,n_T;
double m_T,k_T,b_T,t0_T,x0_T,tf_T,v_T,z_T,h_T,t_T,fx,fz,fdz,fdx,x_T;
using namespace std;
void main ()
	{

  do
   {
	do
       {
        system("color F0");
		system("cls");
		cout<<"\n\n\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
		cout<<"\n\t\t<<<<          PROYECTO DE METODOS NUMERICOS      <<<<\n";
		cout<<"\n\t\t<<<                                              <<<<\n";
		cout<<"\n\t\t<<<                                              <<<<\n";
		cout<<"\n\t\t<<<     1.METODO RUNGE KUTTA                     <<<<\n";
		cout<<"\n\t\t<<<     2.METODO SERIE DE TAYLOR                 <<<<\n";
		cout<<"\n\t\t<<<     3.CREDITOS                               <<<<\n";
            cout<<"\n\t\t<<<     4.SALIR DEL PROGRAMA                     <<<<\n";
		cout<<"\n\t\t<<<        Escoja una opcion:                    <<<<\n";
		cout<<"\n\n\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
     		cin>>op;
	}while((op<1)&&(op>3));
	switch(op) 
	 {
	case 1:
		system ("cls");
		system("color F1");
	cout<<"     >>>>>>>>>>>> Runge Kutta <<<<<<<<<<<<<<<<\n\n";

     cout<<"digite el valor de la masa = ";
     cin>> m;
     cout<<"digite el valor de la constante del resorte K = ";
     cin>> k;
     cout<<"digite el valor de t inicial = ";
     cin>> t0;
     cout<<"digite el valor de x inicial: ";
     cin>> x0;
     cout<<"digite el valor de t final: ";
     cin>> tf;
	 cout<<"digite el valor de la velocidad  inicial v(0)= ";
     cin>> v;
     cout<<"digite numero de pasos: ";
     cin>> n;

	 h =(tf-t0)/n;
     t=t0;
	 z= v;

	 cout<<"La ecuacion diferncial es: \n\n\n";

	 cout<<"d2x/dt2 = "<<-(k/m)<<" x";

	 cout<<"\n\n\n";
	 		
	x = x0;
	 for (j=1;j<=n;j++){
	 
	       

			k1 = z;
			c1 = -((k/m))*x;
			k2 = z+(h/2)*k1;
			c2 = -((k/m))*(x+(h/2)*c1);
			k3 = z+(h/2)*k2;
			c3 = -((k/m))*(x+(h/2)*c2);
			k4 = z+h*k2;
			c4 = -((k/m))*(x+h*c3);
			
			x = x+(h/6)* (k1+2*k2+2*k3+k4);
			z = z+(h/6)* (c1+2*c2+2*c3+c4);
            t=t+h;



     }
     cout<<"x ("<<tf<<")=  "<<x<<"\n";
	 system ("pause");
   break;

//*** fin metodo runge kutta****

case 2 :
	system ("cls");
system("color F2");
cout<<"    >>>>>>>>>>>>>> Taylor <<<<<<<<<<<<<<<\n\n";
     cout<<"digite el valor de la masa = ";
     cin>> m_T;
     cout<<"digite el valor de la constante del resorte K = ";
     cin>> k_T;
     cout<<"digite el valor de t inicial = ";
     cin>> t0_T;
     cout<<"digite el valor de x inicial: ";
     cin>> x0_T;
     cout<<"digite el valor de t final: ";
     cin>> tf_T;
	 cout<<"digite el valor de la velocidad  inicial v(0)= ";
     cin>> v_T;
     cout<<"digite numero de pasos: ";
     cin>> n_T;

	 h_T =(tf_T-t0_T)/n_T;
     t_T=t0_T;
	 z_T= v_T;

	 cout<<"La ecuacion diferncial es: \n\n\n";

	 cout<<"d2x/dt2 = "<<-(k_T/m_T)<<" x";

	 cout<<"\n\n\n";
	 
x_T = x0_T;
	 for (j_T=1;j_T<=n_T;j_T++){
	         
         
                    fx=z_T;
					fdx = v_T;
                    fz= -(k_T/m_T)*x_T;
                    fdz= (k_T/m_T);
	
			//Taylor 2:
            x_T = x_T + fx * h_T + pow((double)h_T , 2)*(fdx)/2;
			z_T=z_T + fz*h_T+ pow((double)h_T,2)* (fdz)/2;
			t_T = t_T + h_T;

     }
     cout<<"x ("<<tf_T<<")=  "<<x_T<<"\n";
	 system ("pause");
   break;

//*** fin metodo serie de taylor****
case 3:	
	system ("cls");
	system("color F4");
	 cout<<"\t   PROYECTO FINAL DE METODOS NUERICOS\n\n";
	 cout<<"\t\t  ADRIANA DIAZ GRANADOS\n\n";
	 cout<<"\t\t  EDUARDO ALTAMAR FLOREZ\n";
     cout<<"\t\t  DIEGO HERNANDEZ VILLALBA\n ";
     cout<<"\t\t  CARLOS IRIARTE GUERRA\n\n\n\n\n";
	 cout<<"\tCORPORACION UNIVERSITARIA DE LA COSTA. CUC\n";
	 cout<<"\t\t  FACULTAD DE INGENIERIA\n";
	 cout<<"\t\t\tBARRANQUILLA\n";
	 cout<<"\t\t          2009\n";
		 system ("pause");
	 break;

	}
					
  }while(op!=4);


	
	
	
	
	
	
	
	}// main
