#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void Atribui(numeroImaginario* numero, int real, int imaginario){
    numero->real = real;
    numero->imaginario = imaginario;
}

void Imprime(numeroImaginario* numero){
    printf("%d + %di\n", numero->real, numero->imaginario);
    }

void Copia(numeroImaginario numero, numeroImaginario numero1){
    numero1.real=numero.real;
    numero1.imaginario=numero.imaginario;
    Imprime(&numero1);
}

void Soma(numeroImaginario* numero, numeroImaginario* numero1){
    printf("%d + %di\n", (numero->real)+(numero1->real), (numero->imaginario)+(numero1->imaginario));
    }

void EhReal(numeroImaginario* numero){
    if(numero->imaginario==0){
    printf("%d + %di eh real\n", numero->real, numero->imaginario);
    }else{
    printf("%d + %di eh imaginario\n", numero->real, numero->imaginario);
    }
}

