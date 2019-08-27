#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED

typedef struct{
    int dia;
    int mes;
    int ano;
}tadAniversario;

typedef struct{
    float port;
    float mat;
    float hist;
}tadNotas;

typedef struct {
    char[50] nome;
    int matricula;
    tadAniversario data;
    char[50] endereco;
    tadNotas notas;
    float coeficiente
}tadAluno;

Inicializa(tadAluno* aluno, char nome, int matricula, tadAniversario data, char endereco, tadNotas notas, float coeficiente);
InicializaNiver(tadAniversario* data, int dia, int mes, int ano);
InicializaNotas(tadNotas* notas, float port, float mat, float hist);
Imprime(tadAluno* aluno);
mudaNota(tadNotas* notas);
defCoeficiente(tadNotas* notas);

#endif // ALUNO_H_INCLUDED
