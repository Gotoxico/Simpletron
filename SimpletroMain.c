//Rodrigo Isao Goto
#include <stdio.h>
#include "Simpletron.h"

int main(){
    printf("*** Bem vindo ao Simpletron! ***\n ***Por favor digite uma instrucao (ou palavra ***\n*** de dados) de seu programa por vez. Digitarei o ***\n*** numero da posicao e um ponto de interrogacao ***\n*** (?). Digite entao a palavra para aquela posicao ***\n*** Digite o valor sentinela -99999 para encerrar a ***\n*** digitacao de seu programa. ***\n");
    int i=0;
    MEMORIA memoria[100]={{0, 0}};
    while(i<100){
        if(i<10){
            printf("0%d ?",i);
        }
        else{
            printf("%d ?", i);
        }

        scanf("%d", &memoria[i].instrucoes);

        if(memoria[i].instrucoes == -99999){
            break;
        }

        i++;
    }
    printf("*** Carregamento do programa concluido *** *** Inicio da execucao do programa ***\n");

    int acumulador = +0000, contadorInstrucao = 00, registroInstrucao = +0000, codigoOperacao = 00, operando = 00;
    while(contadorInstrucao<=i){
        registroInstrucao = memoria[contadorInstrucao].instrucoes;
        codigoOperacao = registroInstrucao / 100;
        operando = registroInstrucao % 100;
        switch(codigoOperacao){
            case 10:
                read10(memoria, operando);
                break;

            case 11:
                write11(memoria, operando);
                break;

            case 20:
                load20(memoria, operando, &acumulador);
                break;
            
            case 21:
                store21(memoria, operando, acumulador);
                break;

            case 30:
                add30(memoria, operando, &acumulador);
                break;
            
            case 31:
                subtract31(memoria, operando, &acumulador);
                break;

            case 32:
                if(acumulador == 0){
                    printf("*** Tentativa de dividir por zero ***\n");
                    halt43(acumulador, contadorInstrucao, registroInstrucao, codigoOperacao, operando, memoria);
                    break;
                }

                divide32(memoria, operando, &acumulador);
                break;
                
            case 33:
                multiply33(memoria, operando, &acumulador);
                break;

            case 40:
                branch40(operando, &contadorInstrucao);
                break;

            case 41:
                branchneg41(operando, &contadorInstrucao, acumulador);
                break;

            case 42:
                branchzero42(operando, &contadorInstrucao, acumulador);
                break;

            case 43:
                halt43(acumulador, contadorInstrucao, registroInstrucao, codigoOperacao, operando, memoria);
                break;

            case -999:
                halt43(acumulador, contadorInstrucao, registroInstrucao, codigoOperacao, operando, memoria);
                break;

            default:
                printf("*** Codigo invalido ***\n");
                halt43(acumulador, contadorInstrucao, registroInstrucao, codigoOperacao, operando, memoria);
                break;
        }
        
        if(acumulador >9999 || acumulador <-9999){
            printf("*** Overflow acumulador ***\n");
            halt43(acumulador, contadorInstrucao, registroInstrucao, codigoOperacao, operando, memoria);
            break;
        }
        contadorInstrucao++;
    }

return 0;
}
