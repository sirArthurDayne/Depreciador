#include <iostream>

/*
	Programa que calcula depresiacion de articulos basandose en su periodo de vida util.
	Usando Metodo de suma de digitos
	Algoritmo creado por Johan y Xavier.
*/
int main()
{
	float vidaUtil;//periodo util de articulos en años
	float precioOriginal, factor,caidaAnual;

	//Entrada de datos
	std::cout << "Ingrese coste total del articulo: ";
	std::cin >> precioOriginal;

	std::cout << "Ingrese util de articulos en años: ";
	std::cin >> vidaUtil;

	

	//calculo de suma de vidaUtil
	float sumaVidaUtil = ( vidaUtil * (vidaUtil + 1) ) / 2;


	//iterador
	int n = vidaUtil;

	//Calculo
	for (int i = 0; i < n; i++)
	{

		factor = vidaUtil / sumaVidaUtil; //calcular el factor de depresion
		caidaAnual = factor * precioOriginal; //perdida del valor en ese año
		precioOriginal -= caidaAnual;//total tras restar la caida
		vidaUtil--;//le restamos 1 año antes de iterar

		//salida por pantalla
		std::cout << "año: " i + 1 << " valor de caida: " <<< caidaAnual <<
			" total tras depresiacion: " << precioOriginal << std::end1;
	}
	//evita q se cierre
	system("PAUSE");
}
