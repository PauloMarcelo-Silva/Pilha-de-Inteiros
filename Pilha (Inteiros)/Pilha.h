#ifndef PILHA_H_DEFINE
#define PILHA_H_DEFINE

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    float Info;
    struct lista* Prox;
}Lista;

typedef struct pilha{
    Lista* Prim;
}Pilha;


Pilha* Criar_Pilha(void);
void Inserir_Pilha_Push(Pilha* p,float Ele);
float Remover_Pilha_Pop(Pilha* p);
int Verificar_Pilha_Vazia(Pilha* p);
void Tamanho_Pilha(Pilha* p);

#endif




