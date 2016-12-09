#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 536870912

int main(int argc, char *argv[]) {

clock_t inicio, fin;
inicio = clock();
int *array = (int*)malloc(sizeof(int)*SIZE);

for (int i = 0; i < SIZE; i++)
{
	int random = rand();
	array[i] = random;
	//printf("%d\n",arreglo[i] );
}
fin = clock();
	printf("Tiempo transcurrido: %f", (fin-inicio)/(double)CLOCKS_PER_SEC);

	return 0;
} 
