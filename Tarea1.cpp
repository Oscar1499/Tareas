//Hecho por: Oscar Alexis Palacios Flores	CARNET:PF18008



#include <iostream> //librerias

using namespace std; 

int main() {
	float  iva, morrales, des, total, neto, precion, descuento,precio; //declaracion de variables necesarias
	precio=100;
	

	cout<<"                Cafetalera FLores                "<<endl;

	cout<<"¿Cuantos morrales de cafe quiere comprar?"<<endl; 
	cin>>morrales; //introduccion de dato
	
	if (morrales<100){ 					//condicion
		iva= precio*0.13; 					//calculando iva
		neto= precio + iva; 					//precio neto
		total=neto*morrales; 					//total del precio neto por los morrales
		descuento= des*morrales; 					//descuento total
	
		cout<<"	El total a pagar es: $"<< total<< endl ; 					//imprimir el total a pagar
	
		cout<<"	Descuento total: $"<< descuento<< endl; 					//imprimir descuento total
	} else {
		if(morrales>=100 && morrales<200){	//Condicion
		des=precio*0.10; 					//descuento
		precion=precio - des; 				//precio nuevo con descuento
		iva= precion * 0.13;				//iva
		neto= precion+iva;					//el precio neto
		total= neto * morrales;				//total del precio neto por los morrales
		descuento= des*morrales;			//descuento total
	
		cout<<"	Su total es: $"<< total<< endl ; 					//imprimir el total a pagar
	
		cout<<"	Descuento total: $"<< descuento<< endl;				//imprimir descuento total
		} else {
				if(morrales>=200 && morrales<250){	//condicion 
				des=precio*0.15;					// descuento
				precion=precio - des;				// precio nuevo con descuento
				iva= precion * 0.13;				//iva
				neto= precion+iva;					//precio neto
				total= neto * morrales;				//total del precio neto por los morrales
				descuento= des*morrales;			//descuento total
			
				cout<<"	Su total es: $"<< total<< endl ;		//imprimir el total a pagar 
				
				cout<<"	Descuento total: $"<< descuento<< endl;	//imprimir descuento total
				} else {
					if(morrales>=250 && morrales<300){					//condicion a cumplir
						des=precio*0.20;			//descuento
						precion=precio - des;		//precio nuevo con descuento
						iva= precion * 0.13;		//iva
						neto= precion+iva;			//precio neto
						total= neto * morrales;		//total del precio neto por los morrales
						descuento= des*morrales;	//descuento total
					
						cout<<"	Su total es: $"<< total<< endl ; 	//imprimir el total a pagar
				
						cout<<"	Descuento total: $"<< descuento<< endl;		//imprimir descuento total
					} else {
							des=precio*0.25;				//descuento
							precion=precio - des;			//precio nuevo 
							iva= precion * 0.13;			//iva
							neto= precion+iva;				//precio neto
							total= neto * morrales;			//total del precio neto por los morrales
							descuento= des*morrales;		//descuento total
						
							cout<<"	Su total es: $"<< total<< endl ;				//imprimir el total a pagar
						
							cout<<"	Descuento total: $"<< descuento<< endl;			//imprimir descuento total
					}
				}	
			}
		}
	

	return 0;
}
