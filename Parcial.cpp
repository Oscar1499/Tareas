//Programa 2
//Creado por:Oscar Alexis Palacios FLores
//Numero Carnet:Pf18008
#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;
	int opc;
    int numerogenerado = 0;
    int a;
    int b;
    int c;
    int numero[10];
    int contador;
    int llamadas;
    int temp;
    void lim();
    void menu();
    int salir();
    void p();
   	char soundfile[] = "1.wav";
	char soundfile2[] = "2.wav";
	char soundfile3[] = "3.wav";
	char soundfile4[] = "4.wav";
	char soundfile5[] = "5.wav";
	char soundfile6[] = "6.wav";
	char soundfile7[] = "7.wav";
	char soundfile8[] = "8.wav";
	char soundfile9[] = "9.wav";
	char soundfile10[] = "10.wav";
	char soundfile11[] = "11.wav";
	char soundfile12[] = "12.wav";
	char soundfile13[] = "13.wav";
	char soundfile14[] = "14.wav";
	char soundfile15[] = "15.wav";
	char soundfile16[] = "16.wav";
	char soundfile17[] = "17.wav";
	char soundfile18[] = "18.wav";
	char soundfile19[] = "19.wav";
	char soundfile20[] = "20.wav";
	char soundfile21[] = "21.wav";
    
  	void lim(){
    	system("cls");
	}   
	
     int salir(){
    	return 0;
	}
	
	void p(){
		system("pause");
	}
	
	void menu(){
    cout<<"1. Generar Numero: "<<endl;
	cout<<"2. Llamar Numero: "<<endl;
	cout<<"3. Atendiendo: "<<endl;
	cout<<"4. Eliminados: "<<endl;
	cout<<"5. Salir"<<endl;
	cout<<"Opcion: "<<endl;
	cin>>opc;
	
	//switch con sus respectivos casos del menu
	
	switch (opc){
		case 1:
		lim();//llamamos funcion limpiar pantalla
				cout<<" "<<"¿Quieres generar un numero?"<<endl;//preguntar si desea generar un numero 
						cout<<"1 SI"<<endl;
						cout<<"2 NO"<<endl;
						cin>>numerogenerado;//variable para almacenar 					
						if (numerogenerado == 1){//contador y arreglo para generar numero
						lim();//llamamos funcion limpiar pantalla
							contador++;
							numero[contador - 1]=contador;
						
							cout<<"Su numero es: "<<contador<<endl;//Impresion de numero
							//condiciones para reproducir los audios
					    if (contador == 1){
					    	cout<<PlaySound((LPCSTR)soundfile, NULL, 
							SND_FILENAME | SND_ASYNC );
					p(); //llamada de funcion para system pause
							
						}
					    else if (contador == 2){
					    	cout<<PlaySound((LPCSTR)soundfile2, NULL, 
							SND_FILENAME | SND_ASYNC );
						p(); //llamada de funcion para system pause
							
						}	
						 if (contador == 3){
					    	cout<<PlaySound((LPCSTR)soundfile3, NULL, 
							SND_FILENAME | SND_ASYNC );
							p(); //llamada de funcion para system pause
							
						}
					    else if (contador == 4){
					    	cout<<PlaySound((LPCSTR)soundfile4, NULL,
							 SND_FILENAME | SND_ASYNC );
					p(); //llamada de funcion para system pause
							
						}	
						if (contador == 5){
					    	cout<<PlaySound((LPCSTR)soundfile5, NULL, 
							SND_FILENAME | SND_ASYNC );
						p(); //llamada de funcion para system pause
							
						}
					    else if (contador == 6){
					    	cout<<PlaySound((LPCSTR)soundfile6, NULL,
							 SND_FILENAME | SND_ASYNC );
							p(); //llamada de funcion para system pause
							
						}	
						if (contador == 7){
					    	cout<<PlaySound((LPCSTR)soundfile7, NULL,
							 SND_FILENAME | SND_ASYNC );
					p(); //llamada de funcion para system pause	
						}
					    else if (contador == 8){
					    	cout<<PlaySound((LPCSTR)soundfile18, NULL, 
							SND_FILENAME | SND_ASYNC );
						p(); //llamada de funcion para system pause
							}	
						if (contador == 9){
					    	cout<<PlaySound((LPCSTR)soundfile9, NULL, 
							SND_FILENAME | SND_ASYNC );
							p(); //llamada de funcion para system pause
						}
					    else if (contador == 10){
					    	cout<<PlaySound((LPCSTR)soundfile10, NULL,
							 SND_FILENAME | SND_ASYNC );
					p(); //llamada de funcion para system pause
						}	
						 
						 
						 
						 
					
						
						
						return menu();
				
						    
						}
						else {
						lim();//llamamos funcion limpiar pantalla
							return menu();
							
						}
						
		p(); //llamada de funcion para system pause
		lim();//llamamos funcion limpiar pantalla

		break;
			//Mostramos los datos del arreglo es casi lo mismo que en el caso uno
			case 2:
			lim();//llamamos funcion limpiar pantalla
				cout<<"1. Llamar numero: "<<llamadas + 1 <<endl;
				for(int k = 0; k<llamadas; k++ )
				cout<<"llamada del numero: "<<numero[llamadas]
				<<endl;
				llamadas++;
				//condiciones para reproducir los audios 
				 		if (llamadas == 1){
					    	cout<<PlaySound((LPCSTR)soundfile11, 
							NULL, SND_FILENAME | SND_ASYNC );
					p(); //llamada de funcion para system pause
						return menu();
						}
					    else if (llamadas == 2){
					    	cout<<PlaySound((LPCSTR)soundfile12,
							 NULL, SND_FILENAME | SND_ASYNC );
						p(); //llamada de funcion para system pause
						return menu();
						}	
						 if (llamadas == 3){
					    	cout<<PlaySound((LPCSTR)soundfile13,
							 NULL, SND_FILENAME | SND_ASYNC );
							p(); //llamada de funcion para system pause
							return menu();
						}
					    else if (llamadas == 4){
					    	cout<<PlaySound((LPCSTR)soundfile14,
							 NULL, SND_FILENAME | SND_ASYNC );
					p(); //llamada de funcion para system pause
							return menu();
						}	
						if (llamadas == 5){
					    	cout<<PlaySound((LPCSTR)soundfile15,
							 NULL, SND_FILENAME | SND_ASYNC );
						p(); //llamada de funcion para system pause
							return menu();
						}
					    else if (llamadas == 6){
					    	cout<<PlaySound((LPCSTR)soundfile16,
							 NULL, SND_FILENAME | SND_ASYNC );
							p(); //llamada de funcion para system pause
							return menu();
						}	
						if (llamadas == 7){
					    	cout<<PlaySound((LPCSTR)soundfile17,
							 NULL, SND_FILENAME | SND_ASYNC );
					p(); //llamada de funcion para system pause
							
						}
					    else if (llamadas == 8){
					    	cout<<PlaySound((LPCSTR)soundfile18,
							 NULL, SND_FILENAME | SND_ASYNC );
						p(); //llamada de funcion para system pause
							return menu();
						}	
						if (llamadas == 9){
					    	cout<<PlaySound((LPCSTR)soundfile19,
							 NULL, SND_FILENAME | SND_ASYNC );
							p(); //llamada de funcion para system pause
							return menu();
						}
					    else if (llamadas == 10){
					    	cout<<PlaySound((LPCSTR)soundfile20,
							 NULL, SND_FILENAME | SND_ASYNC );
					p(); //llamada de funcion para system pause
							return menu();
						}	
				
				
				cout<<" "<<endl;
			p(); //llamada de funcion para system pause
			lim();//llamamos funcion limpiar pantalla
			
			break;
				//en el caso 3 mostramos los datos del arreglo
				case 3:
				lim();//llamamos funcion limpiar pantalla
					cout<<"1. Atendidos: "<<contador<<endl;
					for(int i=0; i<contador; i++){//Recorremos el arreglo
					    
						cout<<"Atendiendo numero "<<numero[i]<<endl;//imprimos el arreglo de los numeros atendidos 
						
					}
					p(); //llamada de funcion para system pause
				lim();//llamamos funcion limpiar pantalla
					return menu();
				break;
				//
					case 4:
					lim();//llamamos funcion limpiar pantalla
						cout<<"1. Eliminados: "<<endl;
						cout<<"Que numero quieres eliminar?"<<endl;
						cin>>temp;//variable temporal para almacenar 
						if (temp < 10){//condicion para eliminar un numero 
							lim();//llamamos funcion limpiar pantalla
							numero[temp] = 0;//le decimos que la variable temponal sea cero dentro del arreglo
							cout<<"Se a eliminado el numero de cliente: "
							<<temp<<endl;//Impresion de esta variable 
						p(); //llamada de funcion para system pause
							return menu();
						}
					//de lo contrario si es mayor a 10 clientes ese numero no existe 
						else {
						lim();//llamamos funcion limpiar pantalla
							
						cout<<"Ese numero no existe"<<temp<<endl;
						
						
					}
						
				
					p(); //llamada de funcion para system pause
					lim();//llamamos funcion limpiar pantalla
			
					break;
					//salir de la consola 
						case 5:
						cout<<"Encerio quieres salir"<<endl;
						cout<<"1 SI"<<endl;
						cout<<"2 NO"<<endl;
						cin>>a;//variable de almacenar respuesta
						//condicion para salir 
						if (a==1){
							salir();
						}
						//si el numero es dos sale
						else {
						lim();//llamamos funcion limpiar pantalla
							return menu();
						}
						break;
						//opcion de error si quieres poner un numero que no esta 
						//en las opciones de nuestro menu
						default:
							//condicion 
							if(opc <1 || opc >5){
								cout<<endl<<"ESTA OPCION NO ES VALIDA"<<endl;
									p(); //llamada de funcion para system pause
									lim();//llamamos funcion limpiar pantalla
							}
							break;
	} 
}
int main() {
	
	system ("color 10 ");//Color del programa
		//Variables para el sonido
		
	//Impresiones para la bienvenida y parte del menu 
	//Van contra la guia de estilos pero siento que se ve mejor 
	cout<<"                                              "<<"---------------------------"<<endl;
	cout<<"                                              "<<"Bienvenido Al Banco Titanic"<<endl;
	cout<<"                                              "<<"---------------------------"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<PlaySound((LPCSTR)soundfile21,
	NULL, SND_FILENAME | SND_ASYNC );
		p(); //llamada de funcion para system pause
	menu();//invocamos funcion para llamar el menu
	return 0;
}

