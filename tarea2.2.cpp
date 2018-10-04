#include <iostream>
#include <stdlib.h>
//Programa creado por:Oscar Alexis Palacios Flores
//Numero de carnet:Pf18008
using namespace std;
void c(); //declaracion de funcion c de limpiar pantalla
void d(); //declaracion funcion documentacion del programa
void p(); //declaracion de funcion pausa de programa

int main() {
	int v;
	int sodas;
	int jugos;
	float azucar;
	float agua;
	int result;
	do{
	system ("color 4D ");
	cout<<"Que desea calcular?"<<endl;
	cout<<"1- Sodas"<<endl;
	cout<<"2- Jugos"<<endl;
	cin>>v;
	c(); //llamado de funcion limpiar pantalla
	} while (v<1 || v>2);
		if (v==1)
		{	
				system ("color 3D ");
			cout<<"Cuantas sodas se produciran?"<<endl;
			cin>>sodas;
			c();//llamado de funcion limpiar pantalla
			float azucar=800;
			float agua=500;
			float insumos1=sodas*azucar;
			float insumos2=sodas*agua;
			cout<<"su valor de insumos de azucar es: "<<insumos1<<"g"<<endl;
			cout<<"su valor de insumos de agua es: "<<insumos2<<"ml"<<endl;
			p(); //llamado funcion pausa
			c();//llamado de funcion limpiar pantalla
			d(); //llamado de funcion documentacion
			
			}else {
				system ("color 2D ");
				cout<<"Cuantos jugos se produciran?"<<endl;
				cin>>jugos;
				c();//llamado de funcion limpiar pantalla
				float azucar=700;
				float agua=600;
				float insumos1=jugos*azucar;
				float insumos2=jugos*agua;
				cout<<"su valor de insumos de azucar es: "<<insumos1<<"g"<<endl;
				cout<<"su valor de insumos de agua es: "<<insumos2<<"ml"<<endl;
				p(); //llamado funcion pausa
				c();//llamado de funcion limpiar pantalla
				d(); //llamado de funcion documentacion
			}
	

			
system ("pause");
return 0;
}

void c(){ //funcion para limpiar pantalla
	system("cls");
}

void p(){ //funcion para pausar pantalla
	system("pause");
}

void d(){ //funcion documentacion del programa
	cout<<"Programa realizado por Oscar Palacios"<<endl;
	cout<<"				UES FMO					"<<endl;
}
