#include <iostream>
#include <stdlib.h>
#include <iomanip>
//Programa creado por:Oscar Alexis Palacios Flores
//Numero de carnet:Pf18008
using namespace std;
void yupi();//llamada de la funcion
int main() {
	float valor;//variable
	float total;//variable
	do {
		cout<<"BIENVENIDO"<<endl;
	cout<<"¿CUANTOS MINUTOS DESEA HABLAR?"<<endl;
	cin>>valor;//Introduccion de variable
}	while (valor<0);
    
	if (valor>=1 && valor<=10)//Condicion
	{	
		system ("color 4D ");//Color del programa
		total=0.05;
		yupi();
		cout<<"Su total a pagar es $: "<<fixed<<setprecision(2)<<total<<endl;
	}
	else if (valor>=10 && valor<=15){//Condicion
		system ("color 3D ");
		total=0.08;
		yupi();
		cout<<"Su valor a pagar es $: "<<fixed<<setprecision(2)<<total<<endl;
	}
	if (valor>=15)//Condicion
	{
		system ("color 2D ");
		total=0.10;
		yupi();
		cout<<"Su valor a pagar es $: "<<fixed<<setprecision(2)<<total<<endl;
	}
	else if (valor>=15 && valor<=100000)//Condicion
	{
		total=0.10;
		yupi();
		cout<<"Su valor a pagar es $: "<<fixed<<setprecision(2)<<total<<endl;
		
	}
	cout<<"---------------------------------------------"<<endl;
	cout<<"Gracias por preferir nuestra linea telefonica"<<endl;
	cout<<"---------------------------------------------"<<endl;
	
	
	system("pause");
	return 0;
}
 void yupi()
 {
 	system("cls");
 }//Implementacion de la funcion
