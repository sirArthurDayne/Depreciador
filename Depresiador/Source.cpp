#include <iostream>

/*
	Programa que calcula depresiacion de articulos basandose en su periodo de vida util.
	Usando Metodo de suma de digitos
	Algoritmo creado por Johan y Xavier.
*/
int main()
{
	float vidaUtil;//periodo util de articulos en a�os
	float precioOriginal, factor,caidaAnual;

	//Entrada de datos
	std::cout << "Ingrese coste total del articulo: ";
	std::cin >> precioOriginal;

	std::cout << "Ingrese util de articulos en a�os: ";
	std::cin >> vidaUtil;

	

	//calculo de suma de vidaUtil
	float sumaVidaUtil = ( vidaUtil * (vidaUtil + 1) ) / 2;


	//iterador
	int n = vidaUtil;

	//Calculo
	for (int i = 0; i < n; i++)
	{

		factor = vidaUtil / sumaVidaUtil; //calcular el factor de depresion
		caidaAnual = factor * precioOriginal; //perdida del valor en ese a�o
		precioOriginal -= caidaAnual;//total tras restar la caida
		vidaUtil--;//le restamos 1 a�o antes de iterar

	}
	//evita q se cierre
	system("PAUSE");
}
