//SENO Y COSENO CON SERIE DE MACLAURIN 

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

#define PI 3.14159

using namespace std;

double factorial (int a)
{
    int i;
	double fac;
    
    fac=1;
    for (i=a;i>0;i--)
    {
        fac=fac*i;
    }
    return fac;
    //dentro de la funcion no llamar a nada igual que la funcion
}

double potencia (double base, double exponente)
{
	double resultado = 1;
	
	for (int i = 0; i < exponente ; i++){
		resultado *= base;
	}
	
	return (resultado);
}

double seno(int n, double angulo){
	double res = 0;
	
	int i = 0;
	
	while(i<n){
		res = res + (potencia(-1,i)*potencia(angulo,2*i+1)/factorial(2*i+1));	
		i++;
	}
	
	return (res);
}

double coseno(int n, double angulo){
	double res = 0;
	
	int i = 0;
	
	while(i<n){
		res = res + (potencia(-1,i)*potencia(angulo,2*i)/factorial(2*i));	
		i++;
	}	
	
	return (res);
	
}

double tangente(int n,double angulo){
	double cos,sen,res;
	cos = sen = res = 0;
	
	int i = 0;
	
	cos = coseno(n,angulo);
	sen = seno(n,angulo);
	
	if (cos == 0)
		res = -2;
	
	else{
		res = sen/cos;
	}
	
	return res;
}

main (){
	int a = 20;
	double angulo = PI/2;
	double res;
	
	res = seno(a,angulo);
	printf ("Seno: %lf",res);
	res = coseno(a,angulo);
	printf ("\nCoseno: %lf",res);
	res = tangente(a,angulo);
	if (res!=-2){
		printf ("\nTangente: %lf",res);
	}
	else{
		printf ("\nLA FUNCION TANGENTE NO EXISTE");
	}
}
