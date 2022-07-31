/*Escribir un programa que permita definir un arbol binario. Debe contener:

 -Definición de la estructura de un árbol binario
 -Funció para crear un Nodo.
 -Función para agregar un valor.
 -Funcion para recorrer el arbol.
 */
#include <iostream>
#include<conio.h> 
#include <stdio.h>
 
struct nodo{
	struct nodo*P;
	struct nodo*I;
	struct nodo*D;
	int V;
}; 
void menu();
nodo *crearnodo(int);
void insertarnodo(nodo*&,int);
void recorrer_nodo(nodo *);
nodo *arbol = NULL;

int main(){
	menu();
	
	return 0;
}
void menu(){
 
int a,o;
 do{
	printf ("\t **Menu**");
	printf("\n\n1-Crear un nodo");
	printf("\n2-Recorrer el arbol");
	printf("\n3-Finalizar");
	printf ("\nOpcion: ");
	scanf ("%d",&o);
	switch (o){
		case 1: printf ("Ingrese un numero: ");
		scanf ("%d",&a);
		insertarnodo(arbol,a);
		break;
		case 2:
			printf ("Recorrido del arbol");
			recorrer_nodo(arbol);
			break;
			
	}
	
}while(o!=3);
}
//Funcion para crear el nodo
nodo *crearnodo(int n){
	nodo*nuevo_nodo = new nodo();
	
	nuevo_nodo ->V =n;
	nuevo_nodo ->I = NULL;
	nuevo_nodo ->D = NULL;
	
	return nuevo_nodo;
}

//Función para insertar
void insertarnodo(nodo*&arbol, int n){
	if (arbol= NULL){
		nodo*nuevo_nodo = crearnodo(n);
		arbol = nuevo_nodo;
	}
	else {
		int d= arbol->V;
		if (n<d){
			insertarnodo (arbol->I,n);
		}
		else{
			insertarnodo (arbol->D,n);
		}
	}
}
//Funcion para el recorrido del arbol
void recorrer_nodo(nodo *arbol){
	if (arbol ==NULL){
		return;
	}
	else{
		printf ("%d",arbol->V,"-");
		recorrer_nodo(arbol ->I);
		recorrer_nodo(arbol ->D);
	}
}
