//Programa creado por:Oscar Alexis Palacios Flores
//Numero de carnet:Pf18008

#include <iostream>
#include <stdlib.h>
#include <string.h> 
#include <time.h>
using namespace std;
//declaracion de variables
void loop(char c[3][3]);
void Intro_primero(char c[3][3]);
void tablero(char c[3][3]);
void Intro_Yo(char c[3][3]); //declaracion de las funciones
void Intro_IA(char c[3][3]);
int Ganador(char c[3][3]);
//inicio de la funcion main
int main (){
 char c [3][3];
 
 loop(c);//llama todas las funciones y hace un refresh
 cout<<"\n";
 system ("pause");
 return 0;
}
//funcion con ciclo y condiciones para el tablero
	
void loop(char c[3][3]){
 int i = 0, j = 0;
 
 Intro_primero(c);
 tablero (c);	
 
 do{
  system ("cls");
  tablero(c);
  if (i % 2 == 0){
   Intro_Yo(c);
  }
  else{
   Intro_IA(c);
  }
  j = Ganador(c);
  i++;
 }while ((i < 9) && (j == 2));
 system ("cls");
 tablero(c);
 if (j == 0){
  cout<<endl<<"Felicidades. Ganaste!!\n";
 }
 else if (j == 1){
  cout<<endl<<"Oh, no! Has perdidido :C.\n";
 }
 else{
  cout<<endl<<"Has empatado :/.\n";
 }
}

void Intro_primero(char c[3][3]){
 char aux;
 
 aux = '1';
 
 for (int i = 0; i < 3; i++){
  for (int j = 0; j< 3; j++){
   c[i][j] = aux++;
  }
 }
}

void Intro_Yo(char c[3][3]){
 char aux;
 int i, j, k;
 //
 do{
  k = 0; //inicializamos contador
  do{ // abrimos ciclo 
   cout<<endl<<"Coloca ficha: "; //impresion en pantalla
   fflush(stdin);
   cin>>aux; //asignacion a la variable aux
  }while((aux < '1') ||( aux > '9')); //si aux es menor a 1 y mayor a 9
  switch(aux){ //inicio de switch aux   
 
   case '1': //incializamos casos para las 9 fichas del tablero
    i = 0; //inicializamos variables
    j = 0;
    if (c[i][j] == 'X' || c[i][j] == 'O'){ //si la variable i j es igual a x y igual a O
     k = 1; // k va ser igual a 1
     cout<<endl<<"La casilla esta ocupada. Intentalo con otro numero."<<endl; //impresion del error 
    }
   break; //freno
   case '2': 
    i = 0;
    j = 1;
    if (c[i][j] == 'X' || c[i][j] == 'O'){
     k = 1;
     cout<<endl<<"La casilla esta ocupada. Intentalo con otro numero."<<endl; //se repite el mismo caso 1
    }
   break; //freno
   case '3':
    i = 0;
    j = 2;
    if (c[i][j] == 'X' || c[i][j] == 'O'){
     k = 1;
     cout<<endl<<"La casilla esta ocupada. Intentalo con otro numero."<<endl;
    }
   break;//freno
   case '4':
    i = 1;
    j = 0;
    if (c[i][j] == 'X' || c[i][j] == 'O'){
     k = 1;
     cout<<endl<<"La casilla esta ocupada. Intentalo con otro numero."<<endl;
    }
   break;//freno
   case '5':
    i = 1;
    j = 1;
    if (c[i][j] == 'X' || c[i][j] == 'O'){
     k = 1;
     cout<<endl<<"La casilla esta ocupada. Intentalo con otro numero."<<endl;
    }
   break;//freno
   case '6':
    i = 1;
    j = 2;
   break;
   case '7':
    i = 2;
    j = 0;
    if (c[i][j] == 'X' || c[i][j] == 'O'){
     k = 1;
     cout<<"La casilla esta ocupada. Intentalo con otro numero."<<endl;
    }
   break;//freno
   case '8':
    i = 2;
    j = 1;
    if (c[i][j] == 'X' || c[i][j] == 'O'){
     k = 1;
     cout<<"La casilla esta ocupada. Intentalo con otro numero."<<endl;
    }
   break;//freno
   case'9':
    i = 2;
    j =2;
    if (c[i][j] == 'X' || c[i][j] == 'O'){
     k = 1;
     cout<<"La casilla esta ocupada. Intentalo con otro numero."<<endl;
    }
   break;//freno
  }
 }while(k == 1);
 c[i][j] = 'X';
}

void Intro_IA(char c[3][3]){  
 int i,j,k; 
 
 srand(time(NULL));//Semilla
 do{
  
  i = rand() % 3; //i va ser igual a ramdon
  j = rand () %3;
  k = 0;
  
  if (c[i][j] == 'X' || c[i][j] == 'O'){ //si c es igual a x y c igual a 0
   k = 1; //k va ser igual a 1
  }
 }while(k == 1);
 c[i][j] = 'O';
}
//funcion para calcular el tablero
void tablero(char c[3][3]){ 
 
 for (int i = 0; i<3;i++){ 
  for (int j = 0; j<3; j++){ 
   if (j < 2){
    cout<<" "<<c[i][j]<<" |";
   }
   else{ 
   system ("color 4D ");
    cout<<" "<<c[i][j];}
  }
  if(i < 2){
   cout<<endl<<"---------"<<endl;
  }
 }
}
///funcion para calcular el ganador
int Ganador(char c[3][3]){
 
 if (c[0][0] == 'X' || c[0][0] == 'O'){
  if (c[0][0] == c[0][1] && c[0][0] == c[0][2]){
   if (c[0][0] == 'X'){
    return 0;
   }
   else if (c[0][0] == 'O'){
    return 1;
   }
  }
  if (c[0][0] == c[1][0] && c[0][0] == c[2][0]){
   if (c[0][0] == 'X'){
    return 0;
   }
   else if (c[0][0] == 'O'){
    return 1;
   }
  }
 }
 
 else if (c[1][1] == 'X' || c[1][1] == 'O'){
  
  if (c[1][1] == c[0][0] && c[1][1] == c[2][2]){
   if (c[1][1] == 'X'){
    return 0;
   }
   else if (c[0][0] == 'O'){
    return 1;
   }
  }
 
  if (c[1][1] == c[0][1] && c[1][1] == c[2][1]){
   if (c[1][1] == 'X'){
    return 0;
   }
   else if (c[0][0] == 'O'){
    return 1;
   }
  }

  if (c[1][1] == c[1][0] && c[1][1] == c[1][2]){
   if (c[1][1] == 'X'){
    return 0;
   }
   else if (c[0][0] == 'O'){
    return 1;
   }
  }

  if (c[1][1] == c[2][0] && c[1][1] == c[0][2]){
   if (c[1][1] == 'X'){
    return 0;
   }
   else if (c[0][0] == 'O'){
    return 1;
   }
  }
 }

 else if(c[2][2] == 'X' || c[2][2] == 'O'){
  if (c[2][2] == c[1][2] && c[2][2] == c[0][2]){
   if (c[2][2] == 'X'){
    return 0;
   }
   else if (c[0][0] == 'O'){
    return 1;
   }
  if (c[2][2] == c[2][1] && c[2][2] == c[2][0]){
   if (c[2][2] == 'X'){
    return 0;
   }
   else if (c[0][0] == 'O'){
    return 1;
   }
   }
  }
 }
 return 2;
}
