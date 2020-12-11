/*

Que solicite las coordenadas de un punto en el plano y nos determine e imprima en que cuadrante
se encuentra. No considere que el punto se pueda encontrar en uno de los ejes o en el origen.
Ejemplo: Ingrese la coordenada X: -3.7 Ingrese la coordenada Y: 8.5 Se mostrará: El punto se encuentra en 
el cuadrante 2

*/

#include<iostream>
#include<conio.h>


using namespace std;

int obtenercuadrante (float x,float y)
{
	int cuadrante=0;

	cuadrante = (x>=0&&y>=0)? 1: cuadrante;
	cuadrante = (x < 0 && y >= 0) ? 2 : cuadrante;
	cuadrante = (x < 0 && x <0) ? 3 : cuadrante;
	cuadrante = (x >= 0 && y <0) ? 4 : cuadrante;


	return cuadrante;
}


int main()
{
	int x,y;
	int cuadrante;
	
	cout << "ingrese coordenadas x: "; cin >> x;
	cout << "ingrese coordenadas y: "; cin >> y;
	

	cout << "el punto se encuentra en el cuadrante :  " << obtenercuadrante (x,y);
	

	_getch();
	
}