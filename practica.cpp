// practica.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;
int main()
{
	int numeros[10];

	int i;

	for (i = 1; i <=10; i++)
	{
		cout << "introduce un numero del 1 al 100:" << i << endl;
		cin >> numeros[i];
	}
	for (i = 10; i >= 1; i--)
	{
		cout << ","<<numeros[i];
	}
	
	cout << endl;
//2do problema
	int numero[10];
	int sum=0,j,media;
	float m;
	

	for (j = 1; j <= 10; j++)
	{
		cout << "introduce un numero del 1 al 100:" << j << endl;
		cin >> numero[j];
	}
	sum = numero[1] + numero[2] + numero[3] + numero[4] + numero[5] + numero[6] + numero[7] + numero[8] + numero[9] + numero[10];
	cout << sum / 10;
	cin >> media;
		//3er problema
	int nume[10];
	int k;
	float mayor, menor;
	mayor = 100;
	menor = 1;
	for (k = 1; k <= 10; k++)
	{
		cout << "introduce un numero del 1 al 100:" << k << endl;
		cin >> nume[k];
		if (nume[k] > mayor)
		{
			mayor = nume[k];
		}
		if (nume[k] < menor)
		{
			menor = nume[k];
		}
	}
	
	cout << "el numero mas grande es:" << mayor << endl;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
