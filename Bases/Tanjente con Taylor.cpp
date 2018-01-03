//TANGENTE CON TAYLOR

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
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
	int k ,n = 84;
	
	double res = 0.0;
	
	for (k = 0 ; k < n ; k++){
		res = res + (potencia(-1,k)*potencia(angulo,2*k+1))/factorial(2*k+1);
	}
	
	return (res);
}

double coseno(double angulo){
	int k ,n = 84;
	
	double res = 0.0;
	
	for (k = 0 ; k < n ; k++){
		res = res + (potencia(-1,k)*potencia(angulo,2*k))/factorial(2*k);
	}
	
	if (res<0&&res>-1){
		res = 0.0;
	}
	
	return (res);
}

double tangente(double angulo){
	
	double res = 0.0,senx = 0.0, cosx = 0.0;
	
	senx = seno(angulo);
	cosx = coseno(angulo);
	
	if (cosx == 0.0){
		res = -2;
	}
	
	else{
		res = senx/cosx;
	}
	
	return (res);
}

int main()
{
    double x,sinx=0.0,cosx=0.0,tanx=0.0;
    /*printf ("introduce el valor de k: ");
    scanf ("%d",&k);*/
    printf ("\nintroduce el valor del angulo en radianes: ");
    scanf ("%lf",&x);
    sinx = seno(x);
    cosx = coseno(x);
    tanx = tangente(x);
    printf ("\nEl valor del seno es: %lf\n\n",sinx);
	printf ("\nEl valor del coseno es: %lf\n\n",cosx);
	if (tanx!=-2){
		printf ("\nEl valor de la tangente es: %lf\n\n",tanx);
	}
	else{
		printf ("\nEl valor de la tangente no existe");
	}
	system ("pause");
}
