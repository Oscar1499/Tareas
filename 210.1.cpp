//Hecho por: Oscar Alexis Palacios Flores	CARNET:PF18008


#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	cout<<"array values: "<<"132,520, 210, 510, 140, 125, 52, 96, 55, 85"<<"\n";
	//input array values
	int array [SIZE] = {132,520, 210, 510, 140, 125, 52, 96, 55, 85};

	
	cout << "sorted values: ";
	for (int startIndex=0; startIndex<SIZE; ++startIndex)
	{
		int smallestIndex = startIndex;
		for ( int nowIndex= startIndex+1; nowIndex<SIZE; ++nowIndex)
		{
			if (array[nowIndex]<array[smallestIndex])
			{
				smallestIndex=nowIndex;
			}
		}
		swap(array[startIndex], array[smallestIndex]);
	}
	for(int index=0; index < SIZE; ++index)
	{
		cout<<array[index]<<' ';
	}
	
	
	return 0;
}
