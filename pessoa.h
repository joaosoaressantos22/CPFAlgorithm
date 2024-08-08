#ifndef _UTILS_H_
#define _UTILS_H_

#define MAX_TAM_CPF 11
#define MAX_TAM_NOME 40
#define MAX_TAM_DATA 11
#define MAX_TAM_ESTADO

typedef struct {

    char nome[MAX_TAM_NOME];
    char dataNasc[MAX_TAM_DATA];
    char cpf[MAX_TAM_CPF];

}tPessoa;

tPessoa* criaPessoa();

/**
 * @brief Calcula a média dos valores de um vetor de inteiros de tamanho especificado.
 *
 * @param cpf
 * @return 1 caso falso.
*/

int obtemNumEstado(char * cpf);

int verificaCPFValidoPessoa(char *cpf);

void liberaPessoa(tPessoa* p);

#endif