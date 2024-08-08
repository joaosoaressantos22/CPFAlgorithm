#include "pessoa.h"
#include <stdio.h>

char estados[10][100] = {"Distrito Federal, Goiás, Mato Grosso do Sul e Tocantins", 
"Pará, Amazonas, Acre, Amapá, Rondônia e Roraima", 
"Ceará, Maranhão e Piauí",
"Pernambuco, Rio Grande do Norte, Paraíba e Alagoas",
"Bahia; e Sergipe",
"Minas Gerais;",
"Rio de Janeiro e Espírito Santo",
"São Paulo",
"Paraná e Santa Catarina",
"Rio Grande do Sul."};

int main(){
    tPessoa* p = criaPessoa();
    int cp; 
    if (verificaCPFValidoPessoa(p->cpf) == 0) printf("\nCPF É válido\n");
    else printf("\nCPF É INVÁLIDO\n"); 
    printf("\nEsse CPF é desse(s) estado(s): %s\n", estados[obtemNumEstado(p->cpf)]);
    liberaPessoa(p);
    return 0;
}