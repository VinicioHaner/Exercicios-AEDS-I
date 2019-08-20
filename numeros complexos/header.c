#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void Atribui(numeroImaginario* numero, int real, int imaginario){
    numero->real = real;
    numero->imaginario = imaginario;
}

void Imprime(numeroImaginario* numero){
    printf("%d + %di\n", numero->real);
    }

void Copia(numeroImaginario* numero, numeroImaginario* numero){
}

void Soma(numeroImaginario* numero);
void EhReal(numeroImaginario* numero);

