//SERIE DEL COSENO CON TAYLOR

#include <iostream>
#include <cstdlib>
#include <iomanip>
 
using namespace std;
 
void evaluapoli(int n, double *f, double x, double &p);
double factorial(int n);
 
int main(){
 
    system ("cls");
 
    int i, n, prod = -1;
 
    //Introduce el grado del polinomio
     
    cout << "Aproximacion polinomica para el coseno (grado) = ? ";
 
    cin >> n; 
 
    double *f;  
 
    f = new double [n+1];      // Define el arreglo para los valores de los coeficientes del polinomio
 
    // Se generan los coeficientes del polinomio
 
    for (i = 0; i <= n; i+=2) {      
 
        prod *= -1;     
 
        f[i] = prod * (1/factorial(i));
 
    }
 
    for (i = 1; i < n; i+=2) {       
 
        f[i] = 0;
 
    }
 
    cout << "\n";
 
    cout << "El coseno será evaluado en el punto (radianes)\n\nX = ? ";
 
    double x, p=0;
 
    // Se introduce el valor de x
 
    cin >> x;
 
    cout << endl;
 
    /* Esta es la función que evalua el polinomio en el punto x. Evita el uso de una fórmula
 
    con la función pow de la libreria math.h */
 
    evaluapoli (n, f, x, p);
 
    cout << "Cos(" << x << ") = ";
 
    cout.setf(ios::fixed);
    cout.precision(9);
 
    cout << p << endl;
 
    cout << endl;
 
    return 0;
 
}
 
void evaluapoli(int n, double *f, double x, double &p){
 
    int i;  
 
    double *a;
 
    a = new double [n];
 
    for (i = 0; i <= n; i++) {  // Crea una copia de los elementos de f[i]
 
                                        // porque el ciclo for inferior los destruye
 
        a[i] = f[i];                   
 
    }   
 
    for (i = n; i > 0; i--) {
 
        p = a[i] * x + a[i - 1];
 
        a[i - 1] = p;
 
    }
 
// P es el valor del polinomio en el punto x
 
}
 
double factorial(int n){
 
    int i;
     
    double factor = 1;
 
    for (i = n; i >= 1; i--)
 
        factor *= i;
 
    return factor;  
 
}
