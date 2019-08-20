#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    numeroImaginario num;
    numeroImaginario num1;
    Atribui(&num, 3, 2);
    Atribui(&num1, 4, 6);
    Imprime(&num);
    Copia(&num, &num2);

    return 0;
}
