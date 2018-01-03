#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int validar(char c)
{
    if(c>=48 && c<=57)
    return 1;
    else
    {
        if(c>=65 && c<=90)
        return 2;
        else
        {
            if(c>=97 && c<=122)
            return 3;
            else
            return 4;
        }
    }
}

typedef struct nodo
{float dato;
 struct nodo*sgt;
 struct nodo*ant;
}tnodo;

typedef struct pila
{struct nodo*p1;
 struct nodo*p2;
 int n;
}tpila;

tpila*crearpila()
{tpila*p=(tpila*)malloc(sizeof(struct pila));
 p->p1=NULL;
 p->p2=NULL;
 p->n=0;
 return p;
}

void push(float dato,tpila*pila)
{tnodo*nodo=NULL;
 nodo=(tnodo*)malloc(sizeof(struct nodo));
 nodo->dato=dato;
 nodo->ant=NULL;
 nodo->sgt=NULL;
 if(pila->p1==NULL)
 {pila->p1=nodo;
  pila->p2=nodo;
 }
 else
 {pila->p2->sgt=nodo;
  nodo->ant=pila->p2;
  pila->p2=nodo;
 }
 pila->n++;
}

void pop(tpila*pila)
{tnodo*ultimo=NULL;
 ultimo=pila->p2;
 if(pila->p1!=NULL)
 {pila->p2=pila->p2->ant;
  if(pila->p2==NULL)
   pila->p1=NULL;
  else
   pila->p2->sgt=NULL;
  free(ultimo);
  pila->n--;
 }
}

float cima(tpila*pila)
{float dato=0;
 dato=pila->p2->dato;
 return dato;
}

bool esvacia(tpila*pila)
{bool respuesta=false;
 if(pila->p1==NULL)
 respuesta=true;
 return respuesta;
}

int main()
{
    //pila
    tpila*pila=NULL;
    pila=crearpila();
    //push(8,pila);

    char *c=(char*)malloc(sizeof(char));
    cin>>c;
    int nc=strlen(c);
    float result=0,b;
    int stado=0,caso;
    int sfinal=3;
    bool error=false;
    int i=0;
    while(!error && stado!=3)
    {

        if(validar(c[i])==1 && stado==0)
        {
            push(c[i]-48,pila);
            i++;
        }
        else
        {
            if(validar(c[i])==4 && stado==0 && !esvacia(pila) && !error)
            {


                if(c[i]=='+')
                    caso=1;
                else
                {
                    if(c[i]=='-')
                        caso=2;
                    else
                    {
                        if(c[i]=='*')
                            caso=3;
                        else
                        {
                            if(c[i]=='/')
                                caso=4;
                            else
                                error=true;
                        }
                    }
                }

                if(!error)
                {
                    b=cima(pila);
                    pop(pila);
                    stado=1;

                    switch(caso)
                    {
                        case 1:
                                if(!esvacia(pila))
                                {
                                    result=cima(pila)+b;
                                    pop(pila);
                                    push(result,pila);
                                    stado=2;
                                }
                                else
                                error=true;
                                break;

                        case 2:
                                if(!esvacia(pila))
                                {
                                    result=cima(pila)-b;
                                    pop(pila);
                                    push(result,pila);
                                    stado=2;
                                }
                                else
                                error=true;
                                break;

                        case 3:
                                if(!esvacia(pila))
                                {
                                    result=cima(pila)*b;
                                    pop(pila);
                                    push(result,pila);
                                    stado=2;
                                }
                                else
                                error=true;
                                break;

                        case 4:
                                if(!esvacia(pila))
                                {
                                    result=cima(pila)/b;
                                    pop(pila);
                                    push(result,pila);
                                    stado=2;
                                }
                                else
                                error=true;
                                break;

                        default: cout<<"error de sistema :p";
                    }
                }
                i++;
            }
            else
            {
                if(i<nc && stado==2 && !esvacia(pila) && !error)
                stado=0;
                else
                {
                    if(stado==2 && !esvacia(pila)&& !error)
                    {
                        result=cima(pila);
                        pop(pila);
                        stado=3;
                        if(!esvacia(pila))
                        error=true;
                    }
                    else
                        error=true;
                }
            }
        }
    }
    if(!error)
    cout<<result;
    else
    cout<<"ecuacion invalida";
    system("PAUSE");
    return EXIT_SUCCESS;

}
