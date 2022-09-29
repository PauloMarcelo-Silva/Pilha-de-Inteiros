#include <stdio.h>
#include <stdlib.h>
#include "Pilha_Lista_Func.c"

int main(){
	Pilha *p;

	p = Criar_Pilha();
	//Inserindo Valores na Pilha
	Inserir_Pilha_Push(p,10);
	Tamanho_Pilha(p);

	Inserir_Pilha_Push(p,10.2);
	Tamanho_Pilha(p);

	Inserir_Pilha_Push(p,10.8);
	Tamanho_Pilha(p);

	Inserir_Pilha_Push(p,44.7);
	Tamanho_Pilha(p);

	//Removendo 2 valores na Pilha
	Remover_Pilha_Pop(p);
	Tamanho_Pilha(p);

	Remover_Pilha_Pop(p);
	Tamanho_Pilha(p);

	//Verificar se a Lista esta vazia
	Verificar_Pilha_Vazia(p);
	printf("---------------------\n");

	//Adicionar Valor na Lista com o Usuario escolhendo
	float Elemento_Inserir;
	printf("Qual valor vc deseja colocar na Pilha: ");
	scanf("%f",&Elemento_Inserir);
	Inserir_Pilha_Push(p,Elemento_Inserir);
	Tamanho_Pilha(p);

	printf("Qual valor vc deseja colocar na Pilha: ");
	scanf("%f",&Elemento_Inserir);
	Inserir_Pilha_Push(p,Elemento_Inserir);
	Tamanho_Pilha(p);

	return 0;
}
