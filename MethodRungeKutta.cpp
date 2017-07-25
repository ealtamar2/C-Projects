#include <iostream.h>
#include<math.h>
int i,j,resulyt ;
int nrk, termrk;
double yark,xark,tk1x,tk1y,tk2x,tk2y,tk3x,tk3y,tk4,tk4y;
double york,xork,xfrk,hrk;
double coefrk[50], termxrk[50], termyrk[50];
int k1,k2,k3,k4;
void main (){
System ("Color 0A");
resulyt = 0;
cout<<"digite numero de iteraciones ";cin>>nrk;
cout<<"digite numero de terminos ";cin>>termrk;
cout<<"digite digite elvalor de y inicial ";cin>>york;
cout<<"digite el valor de x inicial ";cin>>xork;





for(i = 1 ; i<= termrk;i++){


cout<<"digite coeficiente del termino["<<i<<"]  ";cin>>coefrk[i];

cout<<"digite exponente  de la variable x del termino["<<i<<"]  ";
cout<<"digite exponente  de la variable y del termino["<<i<<"]   ";
cin>>termyrk[i];


}
cout<<"iteracion: 0 \n" ;
cout<<"xi: 0\n";
cout<<"k1: 0\n";
cout<<"k2: 0\n";
cout<<"k3: 0\n";
cout<<"k4: 0\n";

cout<<"yi:"<<york<<"\n\n";

hrk= (xfrk-xork)/nrk;

yark=york;

xark=xork;

for(i = 1 ; i<= nrk;i++){

k1=0,k2=0,k3=0,k4=0;

tk1x = xark;
tk1y= yark;
for(int j = 1 ; j<= termrk;j++){
k1++;
(coefrk[j]*pow(tk1x, termxrk[j])*pow(tk1y,termyrk[j]));// coalculo de k1

}

tk2x=xark+(hrk/2);
tk2y=yark+((hrk/2)+k1);

}
}