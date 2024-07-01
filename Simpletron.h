//Rodrigo Isao Goto
#ifndef SIMPLETRON_H
#define SIMPLETRON_H

typedef struct memoria{
    int instrucoes;
    int conteudo;
}MEMORIA;

void read10(MEMORIA memoria[], int operando);
void write11(MEMORIA memoria[], int operando);
void load20(MEMORIA memoria[], int operando, int *acumulador);
void store21(MEMORIA memoria[], int operando, int acumulador);
void add30(MEMORIA memoria[], int operando, int *acumulador);
void subtract31(MEMORIA memoria[], int operando, int *acumulador);
void divide32(MEMORIA memoria[], int operando, int *acumulador);
void multiply33(MEMORIA memoria[], int operando, int *acumulador);
void branch40(int operando, int *contadorInstrucao);
void branchneg41(int operando, int *contadorInstrucao, int acumulador);
void branchzero42(int operando, int *contadorInstrucao, int acumulador);
void halt43(int acumulador, int contadorInstrucao, int registroInstrucao, int codigoOperacao, int operando, MEMORIA memoria[]);

#include "Simpletron.c"
#endif