#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

class Nodo{
	private:
		float elemento;
		Nodo *siguiente;
	public:
		Nodo(){
			elemento = 0;
			siguiente = NULL;
		}
		
		void setElemento(float elemento){
			this->elemento = elemento;
		}
		
		float getElemento(){
			return (this->elemento);
		}
		
		Nodo* getSiguiente(){
			return (siguiente);
		}
		
		void setSiguiente(Nodo *nodo){
			this->siguiente = nodo;
		}
};

class Pila{
	//MIEMBROS
	private:
		Nodo *nodo;
		int elementos;
		
	public:
		Pila(){
			nodo = new Nodo();
			elementos = 0;
		}
		
		int getElementos(){
			return (elementos);
		}
		
		Nodo* getNodo(){
			return (nodo);
		}
		
		void setNodo(Nodo *nodo){
			this->nodo = nodo;
		}
		
		void push(float dato){
			Nodo *aux = new Nodo();
			
			aux->setElemento(dato);
			aux->setSiguiente(NULL);
			if (elementos == 0){
				nodo = aux;
			}
			else{
				aux->setSiguiente(nodo);
				nodo = aux;
			}
			elementos++;
		}
		
		float pop(){	
			float dato;
					
			if (elementos==1){
				dato = nodo->getElemento();
				delete nodo;
			}			
			else{
				Nodo *aux=NULL;
				aux = new Nodo();
				
				aux = nodo;
				dato = aux->getElemento();
				nodo = aux->getSiguiente();
				delete aux;
			}
			elementos--;
			return (dato);
		}
		
		void imprimirPila(){
			Nodo *aux = new Nodo();
			
			aux = nodo;
			printf ("\n\n");
			if (elementos != 0){
				printf ("La pila es:\n\n");
				while(aux!=NULL){
					printf ("--->%f",aux->getElemento());
					aux=aux->getSiguiente();
				}
			printf ("\n\n");	
			}
			else{
				printf ("LA PILA ESTA VACIA\n\n");
			}
		}
		
		bool esVacia(){
			if (this->elementos == 0){
				return (true);
			}
			else{
				return(false);
			}
		}
		
		~Pila(){
		}
};
