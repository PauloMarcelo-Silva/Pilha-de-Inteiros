#include "Pilha.h"

Pilha* Criar_Pilha(void)
{
    //Inicia Lista Vazia
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->Prim = NULL;
    printf("A pilha foi Criada com Sucesso!\n");
    return p;
};

void Inserir_Pilha_Push(Pilha* p,float Ele){
    Lista* n = (Lista*) malloc(sizeof(Lista));
    n->Info = Ele;
    n->Prox = p->Prim;
    p->Prim = n;

};
float Remover_Pilha_Pop(Pilha* p){
    Lista* t;
    float Ele;
    if(p->Prim == NULL){
        printf("A pilha está Vazia!\n");
        return main();
    }
    t = p->Prim;
    Ele = t->Info;
    p->Prim = t->Prox;
    free(t);
    return Ele;
};
int Verificar_Pilha_Vazia(Pilha* p){
    if(p->Prim == NULL){
        printf("A pilha está Vazia!\n");
        return 1;
    }
    else{
        printf("A pilha não está Vazia!\n");
        return 0;
    }
};
void Tamanho_Pilha(Pilha* p){
    Lista* TP;
    for(TP = p->Prim;TP != NULL;TP = TP->Prox)
        printf("[%.2f]\n",TP ->Info);
        printf("---------------\n");
};


