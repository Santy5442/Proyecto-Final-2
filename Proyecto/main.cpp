#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
#include <conio.h>
#include <string.h>
#include "Cabecera de Clases.h"
#include "Matematicas.h"

using namespace std;

/*void caratula()
{
	system("cls"); 
	printf("\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  *******************************************************************   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  **                                                               **   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  **          *******      ******       *******       *******      **   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  **         **           **           **     **     **            **   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  **         **           **           **     **     **            **   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  **         *******       *****       ********      ********      **   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  **         **                **      **            **            **   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  **         **                **      **            **            **   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  **          *******     ******       **             *******      **   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  **                                                               **   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  *******************************************************************   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^                                                                        ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^              DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION                ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^              ------------------------------------------                ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^                                                                        ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^              INGENIERIA  EN  SISTEMAS  E  INFORMATICA                  ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^              ----------------------------------------                  ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^                                                                        ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^                        ESTRUCTURAS DE DATOS                            ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^                       ---------------------                            ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^                                                                        ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^                     	PROYECTO PRIMER PARCIAL                           ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^                      -------------------------                         ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^     Integrantes:                                                       ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^     ------------                                                       ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^     => DEL SALTO SANTIAGO                                              ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^     => TADAY KEVIN                                                     ^^\n");Sleep(100);
    printf("\t\t\t\t\t\t^^                                                                        ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");Sleep(100);
	printf("\n\nPresione cualquier tecla para continuar.....");
	//funcion Sleep(); me permite imprimir en pantalla con un tiempo especificado a manera de pausa
	getch();
}*/

void caratula()
{
	system("cls");
	system("color 0E"); 
	printf("\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  *******************************************************************   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  **                                                               **   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  **          *******      ******       *******       *******      **   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  **         **           **           **     **     **            **   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  **         **           **           **     **     **            **   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  **         *******       *****       ********      ********      **   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  **         **                **      **            **            **   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  **         **                **      **            **            **   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  **          *******     ******       **             *******      **   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  **                                                               **   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^  *******************************************************************   ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^                                                                        ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^              DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION                ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^              ------------------------------------------                ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^                                                                        ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^              INGENIERIA  EN  SISTEMAS  E  INFORMATICA                  ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^              ----------------------------------------                  ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^                                                                        ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^                        ESTRUCTURAS DE DATOS                            ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^                       ---------------------                            ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^                                                                        ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^                     PROYECTO SEGUNDO PARCIAL                           ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^                      -------------------------                         ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^     Integrantes:                                                       ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^     ------------                                                       ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^     => DEL SALTO SANTIAGO                                              ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^     => TADAY KEVIN                                                     ^^\n");Sleep(100);
    printf("\t\t\t\t\t\t^^                                                                        ^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");Sleep(100);
	printf("\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");Sleep(100);
	printf("\n\nPresione cualquier tecla para continuar.....");
	//funcion Sleep(); me permite imprimir en pantalla con un tiempo especificado a manera de pausa
	getch();
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 

void AltEnter()
{
    keybd_event(VK_MENU,
                0x38,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                KEYEVENTF_KEYUP,
                0);
    keybd_event(VK_MENU,
                0x38,
                KEYEVENTF_KEYUP,
                0);
    return;
}

void cabecera(){
	gotoxy(0,0);
	printf ("\t\tUNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE\n");
	printf ("\t\t\tESTRUCTURAS DE DATOS");
	printf ("\n\tNombre: Santiago Del Salto\n");
}

inline int SetColor(const int foreground, const int background) { 

int Color = foreground + (background * 16); 
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); 
SetConsoleTextAttribute(hConsole, Color); 

return 0; 
} 

int menu()
{
	int cont=1;
	const char *opciones[]={"INGRESO EXPRESION","MOSTRAR EXPRESION INGRESADA","EXPRESION DE FORMA POSTFIJA","EXPRESION DE FORMA PREFIJA","CALCULO DE EXPRESION","SALIR"}; //OPCIONES
	int n=6; //NUMERO OPCIONES
	int selec=1;
	int tecla;
	bool repite=true;
	
	//cabecera();
	for (int i=1;i<=67;i++){
			gotoxy(i,4);
			printf ("-");
			gotoxy(i,15);
			printf ("-");
		}
		for (int i=5;i<=14;i++)
		{
			gotoxy(1,i);
			printf ("|");
			gotoxy(67,i);
			printf ("|");
		}
		//imprime titulo
		gotoxy(25,4); printf("BIENVENIDO\n\n");
	do{
		//system("cls");		
		gotoxy(5,6); printf("    ");
		gotoxy(5,7); printf("    ");
		gotoxy(5,8); printf("    ");
		gotoxy(5,9); printf("    ");
		gotoxy(5,10); printf("    ");
		gotoxy(5,11); printf("    ");
		//imprime flecha de seleccion
		//gotoxy(5,5+selec); SetColor(3, 7);printf("==>");
		//imprime opciones
		for(int i=0;i<n;i++){
			gotoxy(10,6+i); 
			printf("                                       ");
		}
		for(int i=0;i<n;i++){
			gotoxy(9,6+i); 
			printf("%d. %s",i+1,*(opciones+i));
		}
		printf ("\n");
		gotoxy(5,5+selec);printf("===>%d . %s",selec,*(opciones+selec-1));
		SetColor(7,0);
		do{
			tecla=getch();
		}while(tecla!=72 && tecla!=80 && tecla!=13);
		switch(tecla){
			case 72:
				selec--;
				if(selec<1){
					selec=n;
				}
				break;
			case 80:
				selec++;
				if(selec>n){
					selec=1;
				}
				break;
			case 13:
				repite=false;
				break;
		}
	}while(repite==true);
	
	return selec;
	//referencias
	//https://www.youtube.com/watch?v=-jpN6LHy2Bk
	//https://www.youtube.com/watch?v=nPpG36OHZP4
}

int validacion(char cadena[100]){
	int opc = 1;
	int cont1 = 0;
	int cont2 = 0;
	for (int i = 0; i < strlen(cadena); i++){
		if (cadena[i]<'0'||cadena[i]>'9'){
			if (cadena[i]!='+'&&cadena[i]!='-'&&cadena[i]!='*'&&cadena[i]!='/'&&cadena[i]!='.'&&cadena[i]!='('&&cadena[i]!=')'){
				if(cadena[i]!='c'&&cadena[i]!='o'&&cadena[i]!='s'&&cadena[i]!='e'&&cadena[i]!='n'&&cadena[i]!='t'&&cadena[i]!='a'){
					opc=0;
					break;
				}
			}			
		}
	}
	for (int i = 0; i < strlen(cadena); i++){
		if (cadena[i]=='('){
				cont1++;
		}
		if(cadena[i]==')'){
			cont2++;
		}
	}
	if (cont1 != cont2){
		opc = 0;
	}
	return (opc);
}

char* infijaCalculo(char *inf){
	char infijacalculo[100];
	char aux[10];
	int k = 0;
	int ayuda=0;
	double num;
	float final;
	string x;

	
	for (int i = 0, j = 0; i < strlen(inf); i++){
		x = "";
		if (inf[i]!='s'&&inf[i]!='c'&&inf[i]!='t'&&inf[i]!='e'&&inf[i]!='n'&&inf[i]!='o'&&inf[i]!='a'){
			infijacalculo[j]=inf[i];
			j++;
		}
		else if (inf[i]=='s'){			
			x = x+inf[i];
			x = x+inf[i+1];
			x = x+inf[i+2];
			
			if (x=="sen"){
				i+=3;
				while(inf[i]=='('){
					i++;
				}
				do{
					aux[ayuda]=inf[i];
					ayuda++;
					i++;
				}while(inf[i]!='+'&&inf[i]!='-'&&inf[i]!='*'&&inf[i]!='/'&&inf[i]!='\0'&&inf[i]!=')');
				aux[ayuda]=0;
				num = atof(aux);
				final = (float) seno(num);
				sprintf(aux,"%lf",final);
				for (int i = 0; i < strlen(aux);i++){
					infijacalculo[j]=aux[i];
					j++;
				}
			}
		}
		else if (inf[i]=='c'){			
			x = x+inf[i];
			x = x+inf[i+1];
			x = x+inf[i+2];
			
			if (x=="cos"){
				i+=3;
				if(inf[i]=='('){
					i++;
				}
				do{
					aux[ayuda]=inf[i];
					ayuda++;
					i++;
				}while(inf[i]!='+'&&inf[i]!='-'&&inf[i]!='*'&&inf[i]!='/'&&inf[i]!='\0'&&inf[i]!=')');
				aux[ayuda]=0;
				num = atof(aux);
				final = (float) coseno(num);
				sprintf(aux,"%lf",final);
				for (int i = 0; i < strlen(aux);i++){
					infijacalculo[j]=aux[i];
					j++;
				}
			}
		}
		else if (inf[i]=='t'){			
			x = x+inf[i];
			x = x+inf[i+1];
			x = x+inf[i+2];
			
			if (x=="tan"){
				i+=3;
				if(inf[i]=='('){
					i++;
				}
				do{
					aux[ayuda]=inf[i];
					ayuda++;
					i++;
				}while(inf[i]!='+'&&inf[i]!='-'&&inf[i]!='*'&&inf[i]!='/'&&inf[i]!='\0'&&inf[i]!=')');
				aux[ayuda]=0;
				num = atof(aux);
				final = (float) tangente(num);
				sprintf(aux,"%lf",final);
				for (int i = 0; i < strlen(aux);i++){
					infijacalculo[j]=aux[i];
					j++;
				}
			}
		}
		k = j;
	}
	infijacalculo[k]=0;
	return(infijacalculo);
}

bool esValida(char cadena[100]){
	int cont = 0;
	bool res = true;
	string x;
	
	for (int i = 0; i < strlen(cadena); i++){
		x="";
		if (cadena[i]=='s'){
			x+=cadena[i];
			x+=cadena[i+1];
			x+=cadena[i+2];
			if (x!="sen"){
				return (false);
			}
		}
		if (cadena[i]=='c'){
			x.clear();
			x+=cadena[i];
			x+=cadena[i+1];
			x+=cadena[i+2];
			i+=2;
			if (x!="cos"){
				return (false);
			}
			
		}
		if (cadena[i]=='t'){
			x+=cadena[i];
			x+=cadena[i+1];
			x+=cadena[i+2];
			if (x!="tan"){
				return (false);
			}
		}
	}
	
	for (int i = 0; i < strlen(cadena); i++){
		if (cadena[i]>='0'&&cadena[i]<='9'){
			cont++;
		}
	}	
	
	
	if (cont == 0){
		printf ("%d",cont);
		system ("pause");
		res = false;
	}
	
	return (res);
}

char* ingreso(){
	char opc;
	char cadena[100];
	
	do{
		system ("cls");
		printf ("\t\t\t\t\tINGRESO EXPRESION\n");
		
		for (int i=10;i<90;i++)
		{
			gotoxy(i,1);
			printf ("=");
			gotoxy(i,10);
			printf ("=");
		}
		printf ("\n");
		for (int i=2;i<10;i++){
			gotoxy(10,i);
			printf ("|");
			gotoxy(89,i);
			printf ("|");
		}
		//EXPRESION
		for (int i=14;i<80;i++){
			gotoxy(i,2);
			printf ("-");
			gotoxy(i,4);
			printf ("-");
		}
		for (int i=3;i<4;i++)
		{
			gotoxy(14,i);
			printf ("|");
			gotoxy(79,i);
			printf ("|");
		}
		gotoxy(15,3);
		printf ("Expresion: ");
		
		for (int i=26;i<79;i++)
		{
			gotoxy(i,3);
			printf (" ");
		}
		do{
			gotoxy(26,3);
			gets(cadena);
		}while(cadena[0]==0);
		fflush(stdin);
		bool valor = esValida(cadena);
		if (valor==false||(validacion(cadena)==0)){
			gotoxy(1,13);
			printf ("EXPRESION INVALIDA PUEDE QUE NO EXISTEN NUMEROS EN LA EXPRESION, INGRESE NUMEROS o FUNCIONES SENO(sen), COSENO(cos) y TANGENTE(tan)");
			printf ("\n\nDESEA INGRESAR NUEVAMENTE LA EXPRESION? S-SI N-NO: ");
			fflush(stdin);
			strcpy(cadena,"A");
			do{
				opc = getch();
			}while(opc!='n'&&opc!='N'&&opc!='S'&&opc!='s');
			if (opc=='n'||opc=='N'){
				gotoxy (1,17);
				printf ("La expresion infija no ha sido ingresada correctamente\n\n",cadena);
			}
		}
		else{
			opc = 'n';
		}
	}while(opc=='s'||opc=='S');
	if (validacion(cadena)!=0&&esValida(cadena)!=0){
		gotoxy (1,17);
		printf ("LA EXPRESION INFIJA ES: %s\n\n",cadena);
	}
	return (cadena);
}

bool isOperator(char c) 
{ 
if (c=='+' || c=='-' || c=='*' || c=='/' || c=='^' || c=='(' || c==')') 
	return true; 

return false; 
} 

int precedencia (char x, char y) 
{ 
	int prec1, prec2; 
	
	switch(x) 
	{ 
		case '+': 
			prec1=1; 
			break; 
		
		case '-': 
			prec1=2; 
			break; 
		
		case '*': 
			prec1=3; 
			break; 
		
		case '/': 
			prec1=4; 
			break; 
		
		case '^': 
			prec1=5;
			break; 
	}
	switch(y) 
	{ 
		case '+': 
		prec2=1; 
		break; 
		
		case '-': 
		prec2=2; 
		break; 
		
		case '*': 
		prec2=3; 
		break; 
		
		case '/': 
		prec2=4; 
		break; 
		
		case '^': 
		prec2=5; 
	} 
	
	return prec1-prec2; 
} 

void transformacion_postfija(char cadena[100],char post[100]){
	
	char *pila = new char[100];
	int j = 0;
	int ptr=0;
	
	for(int i=0; cadena[i]!='\0'; i++) 
	{ 
		if (!isOperator(cadena[i])) 
		{ 
			post[j]=cadena[i]; 
			j++; 
		} 
		else if (cadena[i]=='(') 
		{ 
			pila[++ptr]='('; 
		} 
		else if (cadena[i]==')') 
		{ 
			while(pila[ptr]!='(' && ptr>0) 
			{ 
				post[j]=pila[ptr--]; 
				j++; 
			} 
			if (pila[ptr]=='(') 
				ptr--; 
		} 
		else 
		{ 
			while(precedencia(cadena[i], pila[ptr]) < 0 && pila[ptr]!='(' && ptr>0) 
			{ 
				post[j]=pila[ptr--]; 
				j++; 
			}
			post[j]=' ';
			j++; 
			pila[++ptr]=cadena[i]; 
		}
	}
	post[j]=' ';
	j++; 
	while(ptr>0) 
	{ 
		post[j]=pila[ptr--]; 
		j++; 
	} 
	post[j]='\0';
	
	delete pila;
}

void calculo(char postfija[100],Pila *pila){
	char aux[20];
	int j = 0;
	int i = 0;
	int k=0;
	float res = 0;
	char caso;
	int error = 0;
	string x="";
	
	for (int i = 0; i < strlen(postfija);i++){
		if (postfija[i]=='+'||postfija[i]=='-'||postfija[i]=='*'||postfija[i]=='/'){
			x = x + ' ';
			x=x+postfija[i];
		}
		else{
			x = x + postfija[i];
		}
	}
	for (int i = 0,j = 0 ; i < x.size();i++,j++){
		postfija[j]=x[i];
		k=j;
	}
	postfija[x.size()]='\0';
	printf ("\n\n%s\n\n",postfija);
	
	int cont1, cont2;
	cont1 = cont2 = 0;
	
	do{
		if (postfija[i]>='0'&&postfija[i]<='9'||postfija[i]=='.')
		{
			aux[j]=postfija[i];
			j++;
		}
		else if (postfija[i]==' '){
			aux[j]=0;
			j=0;
			
			if (aux[0]!=0){
				cont1++;
				pila->push((float) atof(aux));
				pila->imprimirPila();
			}
		}
		else{
			cont2++;
			char caso;
			caso = postfija[i];
			
			if (caso=='+'){
				float b = pila->pop();
			//	printf ("b=%f",b);
				res = pila->pop() + b;
				pila->push(res);
			}
			else if (caso=='-'){
				float b = pila->pop();
			//	printf ("b=%f",b);
				res = pila->pop() - b;
				pila->push(res);
			}
			else if (caso=='*'){
				float b = pila->pop();
			//	printf ("b=%f",b);
				res = pila->pop() * b;
				pila->push(res);
			}
			else if (caso=='/'){
				float b = pila->pop();
				if (b!=0){
			//		printf ("b=%f",b);
					res = pila->pop() / b;
					pila->push(res);
				}
				else{
					error = 1;
				}
				
			}
		}
		i++;
	}while(i<strlen(postfija));
	
	if (pila->getElementos()==1){
		//printf ("AQUI ESTAMOS");
		res = pila->pop();
	}
	
	printf ("%d %d",cont1,cont2);
	
	if (cont2>=cont1){
		error=1;
		printf ("\n\nEL NUMERO DE SIGNOS ES MAYOR O IGUAL A LOS NUMEROS Y ESO NO ES POSIBLE\n\n");
	}
	
	if (error!=1){
		printf ("\n\nEL RESULTADO ES: %.2f\n\n",res);
	}
	else{
		printf ("ERROR EN LA EXPRESION");
	}
	while(pila->esVacia()==false){
		pila->pop();
	}
}

int main(int argc, char** argv) {
	
	char cadena[100];
	char postfija[100];
	char infija[100];
	
	char infijacalculo[100];
	char postfija2[100];
	
	strcpy(cadena,"A");
	char *numero;
	Pila pila;
	int j = 0;
	int k = 0;
	int opc;
	
	AltEnter();	
	caratula();
	do{
		system ("color 0E");
		system ("cls");
		//system ("BIENVENIDA.exe");
		cabecera();
		opc=menu();
		system ("COLOR 0E");
		switch(opc){
			case 1:{
				strcpy(postfija,"A");
				strcpy(infija,"A");
				strcpy(cadena,ingreso());
				if (strcmp(cadena,"A")!=0){
					strcpy(infijacalculo,infijaCalculo(cadena));
					transformacion_postfija(cadena,postfija);					
				}
				system ("pause");
				break;
			}
			case 2:{
				system ("cls");
				if (strcmp(cadena,"A")!=0){
					printf ("La expresion infija es: %s\n\n",cadena);
				}
				else{
					printf ("La expresion infija no es valida o no se ha ingresado todavia!\n\n");
				}
				system ("pause");
				break;
			}
			
			case 3:{
				system ("cls");
				if (strcmp(cadena,"A")==0){
					for (int i = 10;i < 70; i++){
						gotoxy(i,3);
						printf ("-");
						gotoxy(i,7);
						printf ("-");
					}
					gotoxy(15,5);
					printf ("LA EXPRESION AUN NO HA SIDO INGRESADA");
				}
				else{
					for (int i = 10;i < 70; i++){
						gotoxy(i,3);
						printf ("-");
						gotoxy(i,7);
						printf ("-");
					}
					gotoxy(11,5);
					printf ("La expresion en postfija es: %s",postfija);
				}
				gotoxy(3,9);
				system ("pause");
				break;
			}
			case 4:{
				system ("cls");
				if (strcmp(cadena,"A")==0){
					for (int i = 10;i < 70; i++){
						gotoxy(i,3);
						printf ("-");
						gotoxy(i,7);
						printf ("-");
					}
					gotoxy(15,5);
					printf ("LA EXPRESION AUN NO HA SIDO INGRESADA");
				}
				else{
					for (int i = 10;i < 70; i++){
						gotoxy(i,3);
						printf ("-");
						gotoxy(i,7);
						printf ("-");
					}
					gotoxy(11,5);
					printf ("La expresion en prefijo es: ");
					for (int i = strlen(postfija);i>=0;i--){
						printf ("%c",postfija[i]);
					}
				}
				gotoxy(3,9);
				system ("pause");
				break;
			}
			case 5:{
				system("cls");
				if (strcmp(cadena,"A")==0){
					for (int i = 10;i < 70; i++){
						gotoxy(i,3);
						printf ("-");
						gotoxy(i,7);
						printf ("-");
					}
					gotoxy(15,5);
					printf ("LA EXPRESION AUN NO HA SIDO INGRESADA");
				}
				else{
					transformacion_postfija(infijacalculo,postfija2);
					calculo(postfija2,&pila);
				}
				system ("pause");
				break;
			}
		}
	}while(opc!=6);
	gotoxy(1,15);
	
	
	return 0;
}
