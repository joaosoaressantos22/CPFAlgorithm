#include "pessoa.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

tPessoa* criaPessoa(){
    tPessoa* p = (tPessoa*)malloc(sizeof(tPessoa)); 

    scanf("%[^\n]", p->nome);
    getchar();
    scanf("%[^\n]", p->dataNasc);
    getchar();
    scanf("%[^\n]", p->cpf);
    return p; 
}

int verificaTamCpf(char *cpf){
    int count = 0; 
    while (cpf[count] != '\0'){
        count++; 
    }
    return count; 
}

int verificaDigitosIguaisCPF(char *cpf){
    for (int i = 0; i < verificaTamCpf(cpf); i++){
        for (int j = 1; j < verificaTamCpf(cpf); j++){
            if (cpf[i] != cpf[j]) return 0;
        }
    }
    return 1;
}

int verificaDigito(char* cpf, int inicio){
    int soma = 0;
    for (int i = 0, multi = inicio; i < inicio, multi >= 2; i++, multi--){
        soma += (int)(cpf[i] - '0')*multi; 
    }
    soma = soma * 10; 
    soma = soma%11; 
    if (soma == 10) soma = 0; 
    return soma; 
}

int verificaCPFValidoPessoa(char *cpf){
    if (verificaTamCpf(cpf) != 11); 
    if (verificaDigitosIguaisCPF(cpf)) return 1;
    if (verificaDigito(cpf, 10) != (int)(cpf[MAX_TAM_CPF - 2] - '0') || verificaDigito(cpf, 11) != (int)(cpf[MAX_TAM_CPF - 1] - '0')) return 1;
    return 0;
}

int obtemNumEstado(char * cpf){
    return ((int)(cpf[MAX_TAM_CPF - 3] - '0') - 1);
}

void liberaPessoa(tPessoa* p){
    free(p); 
}