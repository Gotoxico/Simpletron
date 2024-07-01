//Rodrigo Isao Goto
#include <stdio.h>
#include "Simpletron.h"

void read10(MEMORIA memoria[], int operando){
    printf("?");
    scanf("%d", &memoria[operando].conteudo);
    return;
}

void write11(MEMORIA memoria[], int operando){
    printf("%d", memoria[operando].conteudo);
    return;
}

void load20(MEMORIA memoria[], int operando, int *acumulador){
    *acumulador = memoria[operando].conteudo;
    return;
}

void store21(MEMORIA memoria[], int operando, int acumulador){
    memoria[operando].conteudo = acumulador;
    return;
}

void add30(MEMORIA memoria[], int operando, int *acumulador){
    *acumulador = *acumulador + memoria[operando].conteudo;
    return;
}

void subtract31(MEMORIA memoria[], int operando, int *acumulador){
    *acumulador = *acumulador - memoria[operando].conteudo;
    return;
}

void divide32(MEMORIA memoria[], int operando, int *acumulador){
    int divisor = *acumulador;
    *acumulador = memoria[operando].conteudo / divisor;
    return;
    
}

void multiply33(MEMORIA memoria[], int operando, int *acumulador){
    *acumulador = memoria[operando].conteudo * *acumulador;
    return;
}

void branch40(int operando, int *contadorInstrucao){
    *contadorInstrucao = operando-1;
    return;
}

void branchneg41(int operando, int *contadorInstrucao, int acumulador){
    if(acumulador < 0){
        *contadorInstrucao = operando-1;
    }
    return;
}

void branchzero42(int operando, int *contadorInstrucao, int acumulador){
    if(acumulador == 0){
        *contadorInstrucao = operando-1;
    }
    return;
}

void halt43(int acumulador, int contadorInstrucao, int registroInstrucao, int codigoOperacao, int operando, MEMORIA memoria[]){
    printf("*** Execucao do Simpletron concluida ***");
    printf("REGISTROS:\nacumulador %d\ncontadorInstrucao %d\nregistroInstrucao %d\ncodigoOperacao %d\noperando %d\n", acumulador, contadorInstrucao, registroInstrucao, codigoOperacao, operando);
    printf("MEMORIA:\n");
    for(int i=0; i<10; i++){
        printf("%d  ", i);
    }
    
    for(int i=0; i<10; i++){
        if(i == 0){
            printf("\n%d %d", i, memoria[i].conteudo);
        }
        else{
            printf(" %d", memoria[i].conteudo);
        }
    }

    for(int i=10; i<20; i++){
        if(i == 10){
            printf("\n%d %d", i, memoria[i].conteudo);
        }
        else{
            printf(" %d", memoria[i].conteudo);
        }
    }

    for(int i=20; i<30; i++){
        if(i == 20){
            printf("\n%d %d", i, memoria[i].conteudo);
        }
        else{
            printf(" %d", memoria[i].conteudo);
        }
    }

    for(int i=30; i<40; i++){
        if(i == 30){
            printf("\n%d %d", i, memoria[i].conteudo);
        }
        else{
            printf(" %d", memoria[i].conteudo);
        }
    }

    for(int i=40; i<50; i++){
        if(i == 40){
            printf("\n%d %d", i, memoria[i].conteudo);
        }
        else{
            printf(" %d", memoria[i].conteudo);
        }
    }

    for(int i=50; i<60; i++){
        if(i == 50){
            printf("\n%d %d", i, memoria[i].conteudo);
        }
        else{
            printf(" %d", memoria[i].conteudo);
        }
    }

    for(int i=60; i<70; i++){
        if(i == 60){
            printf("\n%d %d", i, memoria[i].conteudo);
        }
        else{
            printf(" %d", memoria[i].conteudo);
        }
    }

    for(int i=70; i<80; i++){
        if(i == 70){
            printf("\n%d %d", i, memoria[i].conteudo);
        }
        else{
            printf(" %d", memoria[i].conteudo);
        }
    }

    for(int i=80; i<90; i++){
        if(i == 80){
            printf("\n%d %d", i, memoria[i].conteudo);
        }
        else{
            printf(" %d", memoria[i].conteudo);
        }
    }

    for(int i=90; i<100; i++){
        if(i == 90){
            printf("\n%d %d", i, memoria[i].conteudo);
        }
        else{
            printf(" %d", memoria[i].conteudo);
        }
    }
}


