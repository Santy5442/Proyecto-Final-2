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

int main()
{
    int k,n=0;
    double x,sinx=0.0,seno;
    double pro,den,pot;
    
    k = 84;
    /*printf ("introduce el valor de k: ");
    scanf ("%d",&k);*/
    printf ("\nintroduce el valor del angulo en radianes: ");
    scanf ("%lf",&x);
    while (n<=k)
    {
           // esta es una prueba con la formula toda junta, sin casting
          //seno =((pow (-1,n))/factorial(2*n+1))*(pow(x,2*n+1));
          pot=potencia(-1,n);
          den=factorial(2*n+1);
          pro=potencia(x,2*n+1);
          seno= (pot/den)*pro;
          sinx= sinx + seno;
          //printf("\nEl elemento n=%d es %lf y la suma va siendo %lf",n,seno,sinx);
          n++;
          
    }
    printf ("\nEl valor del seno es: %lf\n\n",sinx);
	system ("pause");
}

