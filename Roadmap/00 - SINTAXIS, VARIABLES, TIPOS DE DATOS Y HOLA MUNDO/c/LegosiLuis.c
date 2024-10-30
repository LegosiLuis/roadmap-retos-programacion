#include<stdio.h>

/*
 * EJERCICIO:
 * - 1. Crea un comentario en el código y coloca la URL del sitio web oficial del
 *   lenguaje de programación que has seleccionado.
 * - 2. Representa las diferentes sintaxis que existen de crear comentarios
 *   en el lenguaje (en una línea, varias...).
 * - 3. Crea una variable (y una constante si el lenguaje lo soporta).
 * - Crea variables representando todos los tipos de datos primitivos
 *   del lenguaje (cadenas de texto, enteros, booleanos...).
 * - Imprime por terminal el texto: "¡Hola, [y el nombre de tu lenguaje]!"
*/

#define PI_GLOBAL 3.1416 //Creacion de constante usando #define (Unicamente alcance global)

int main(){
	
	// Comentario de una linea 
	
	/* 
	Comentario de varias lineas
	*/	
	
	
	//Tipos de datos primitivos
	int Entero = 3;
	float Decimal = 3.3;
	double DecimalLargo = 3.333;
	char letra = 'A';
	
	//Costante local (Tambien se puede global)
	const float PI_LOCAL = 3.1416; 
	
	printf("PI CONSTANTE GLOBAL: %f \n", PI_GLOBAL);
	printf("PI CONSTANTE LOCAL: %f \n", PI_LOCAL);
	
	printf("¡Hola, C!");
	
	return 0;
}
