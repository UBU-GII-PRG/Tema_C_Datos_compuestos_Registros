/*
Programa:	def_struct.c
Sinopsis:	Introducción a la definición de tipos compuestos (structs)
@autor:		Paco González Moya
@date:		May 2018
@version:	1.0
*/
#include<stdio.h>
#include<string.h>
#define MAX 10

int funcion_A();	//función de pruebas

int main () {
	int ok=0;
	//definimos la struct: definición local para main
	struct mi_struct {
		char nombre[MAX];
		float salario;
		int edad;
		char sexo;
	};

	struct mi_struct primera;	//declaramos la variable
	
	//Inicializamos la estructura
	strcpy(primera.nombre, "\0");
	primera.salario=0.0;
	primera.edad=0;
	primera.sexo=32;	

	//Completamos ahora la struct
	strcpy(primera.nombre, "Paco");
	primera.salario=500;
	primera.edad=46;
	primera.sexo='v';
	
	//Mostramos valores
	printf("----------------------\n");
	printf("Contenido de la struct\n");
	printf("----------------------\n");
	printf("Nombre : %s\n", primera.nombre);
	printf("Salario: %5.2f\n", primera.salario);
	printf("Edad   : %2d\n", primera.edad);
	printf("Sexo   : %c\n", primera.sexo);

	//Tamaño de la struct
	printf("\nTamaño de la struct (bytes): %d\n", sizeof(struct mi_struct));

	ok+=funcion_A();
	
	return 0;
}

int funcion_A() {
	//Código comentado
	//struct mi_struct segunda;
	return 0;
}

