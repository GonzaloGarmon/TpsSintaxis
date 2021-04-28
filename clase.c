#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int edad;
	char nombre[20]; 
	
	printf("%s","Ingrese su nombre:\n ");
	scanf("%s",nombre);
	
	printf("%s","Ingrese su edad:\n ");
	scanf("%d",&edad);
	
	printf("Hola %s, \ntu edad es %d  ",nombre,edad);
	

	system("pause");
	
	return 0;
}