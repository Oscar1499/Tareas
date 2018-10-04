//Creado por: Oscar Alexis Palacios Flores
//Fecha: 10 de septiembre 2018

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	system ("color 4D ");Beep(500,300);//Color y sonido
	float ventas; //Almacenar venta de la empresa
	float sueldo; //Calcular el salario
	do{		     //Peticion de total de ventas
		cout<<"Bienvenido"<<endl;
		cout<<"Introduzca total de ventas: ";
		cin>>ventas;  //Introduccion del valor para la variable ventas
		
		
	}da> while (ventas<0); //Declara que esta variable no sea menor a 0
	
	if (ventas>=0 && ventas<=500000){ //Condiciones a cumplir
		sueldo= 80000;Beep(500,300);
		cout<<"El sueldo del trabajador es: $" <<fixed<<setprecision(2)<<sueldo<<endl;
	} else if(ventas>=500001 && ventas<=1000000){//Condiciones a cumplir
		sueldo= 160000;Beep(500,300);
		cout<<"El sueldo del trabajador es: $"<<fixed<<setprecision(2)<<sueldo<<endl;
	} else if(ventas>=1000001 && ventas<=1500000){//Condiciones a cumplir
		sueldo= 320000;Beep(500,300);
		cout<<"El sueldo del trabajador es: $"<<fixed<<setprecision(2)<<sueldo<<endl;
	} else if (ventas>=1500001 && ventas<=2500000){//Condiciones a cumplir
		sueldo= 450000;Beep(500,300);
		cout<<"El sueldo del trabajador es: $"<<fixed<<setprecision(2)<<sueldo<<endl;
	} else if (ventas>=2500001 && ventas<=4000000){//Condiciones a cumplir
		sueldo= 550000;Beep(500,300);
		cout<<"El sueldo del trabajador es: $" <<fixed<<setprecision(2)<<sueldo<<endl;
	} else { //Cuando es mayor que 4000000
		sueldo= ventas * 0.20;Beep(500,300); //Calcular el 20% del total de ventas
		cout<<"El sueldo del trabajador es: $"<<fixed<<setprecision(2)<<sueldo<<endl;
	}
	
	return 0;
}
