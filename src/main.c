#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

#include "lista.h"

int main(int argc, char** args){
	Lista lista = nova_lista();
	int* numerin_ptr = malloc(sizeof(int));
	*numerin_ptr = 42;
	lista = add_lista(lista, numerin_ptr);
}
