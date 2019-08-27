#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    numeroImaginario num;
    numeroImaginario num1;
    Atribui(&num, 3, 0);
    Atribui(&num1, 4, 6);
    Imprime(&num);
    Imprime(&num1);
    Copia(num, num1);
    Soma(&num,&num1);
    EhReal(&num);
    EhReal(&num1);

    return 0;
}
