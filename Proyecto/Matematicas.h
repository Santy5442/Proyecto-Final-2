#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

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

double seno(double angulo){
	int n = 84;
	double res = 0;
	
	int i = 0;
	
	if (angulo<33){
		while(i<n){
			res = res + (potencia(-1,i)*potencia(angulo,2*i+1)/factorial(2*i+1));	
			i++;
		}
	}
	else{
		res = sin(angulo);
	}
	
	return (res);
}

double coseno(double angulo){
	int n = 84;
	double res = 0;
	
	int i = 0;
	
	if (angulo<33){
		while(i<n){
			res = res + (potencia(-1,i)*potencia(angulo,2*i)/factorial(2*i));	
			i++;
		}
	}	
	else{
		res = cos(angulo);
	}
	
	return (res);
	
}

double tangente(double angulo){
	double cos,sen,res;
	cos = sen = res = 0;
	
	int i = 0;
	
	cos = coseno(angulo);
	sen = seno(angulo);
	
	if (cos == 0)
		res = -2;
	
	else{
		res = sen/cos;
	}
	
	return res;
}
