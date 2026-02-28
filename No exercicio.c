#include <stdio.h>
#include <stdlib.h>

//Código para implementar uma lista duplamente encadeada com as operações básicas: inserir no início, inserir no fim, imprimir direto, imprimir reverso, buscar valor, remover do início, remover do fim e remover por valor.
typedef struct No {
    int valor;
    struct Node* ant;
    struct Node* prox;
                  }No;

    typedef struct{
        No *head;
        No *tail;
    } Lista;
    

void inicializar(Lista *l){
    l->head=NULL;
    l->tail=NULL;
}


// 2) Inserir no início

void inserir_inicio(Lista *l, int valor){
     No *novo = (No*)malloc(sizeof(No));
     if(novo==NULL){
        printf("Erro de alocacao!\n");
        exit(1);
     }
     novo->valor=valor;
     novo->ant = NULL;
     novo->prox = l->head;

     if(l->head !=NULL){
        l->head->ant =novo;
     } else{
        l->tail = novo;
     }

     l->head = novo;
}

// 3) Inserir no fim (O(1) com tail)

void inserir_fim(Lista *l, int valor){
    No *novo = (No)malloc(sizeof(No));
    if(novo==NULL){
        printf("Erro de alocacao!\n");
        exit(1);
    }

    novo->valor = valor;
    novo->ant = l->tail;
    novo->prox = NULL;

    if)(l->tail!=NULL){
        l->tail->prox=novo;

    } else {
        l->head = novo;
    } 
    l->tail = novo;
}

// 4) Imprimir direto

void imprimir_direto(Lista *l){
    No *atual = l->head;
    printf("Direto: ");

    While(atual != NULL){
        printf("%d", atual->valor);
        atual = atual->prox;
    }
printf("/n");

// 5) Imprimir reverso

void imprimir_reverso(Lista *l){
    No *atual = l->tail;
    printf("Reverso: ");

    While(atual != NULL){
        printf("%d", atual->valor);
        atual = atual->ant;
    }
printf("/n");

// 6) Buscar valor (retorna 1/0)

int buscar(Lista *l, int valor){
    No *atual = l->head;
    while (atual !=NULL){
        if(atual->valor == valor){
            return 1;
        }
        atual = atual->prox;
    } 
    return 0;
}


// 7) Remover do início

void remover_inicio(Lista *l){
    if(l->head == NULL){
        printf("Lista Vazia./n");
        return;
    }
    No *temp = l->head;
    l->head = temp->prox;
    if(l->head !=NULL){
        l->head->ant = NULL;
    } else{
        l->tail = NULL;
    }
    free(temp);
}

// 8) Remover do fim

void remover_inicio(Lista *l){
    if(l->head == NULL){
        printf("Lista Vazia./n");
        return;
    }
    No *temp = l->head;
    l->tail = temp->ant;
    if(l->head !=NULL){
        l->tail->prox = NULL;
    } else{
        l->head = NULL;
    }
    free(temp);
}



// 9) Remover por valor (primeira ocorrência)

int remover_valor(Lista *l, int valor){
    No *atual = ->head;

    while(atual !=NULL){
        if(atual->valor ==valor){
            if(atual->ant !=NULL){
                atual->ant->prox = atual->prox;
            } else{
                l->head = atual->prox;
            }
            if(atual->prox !=NULL){
                atual->prox->ant = atual->ant;
            } else{
                l->tail = atual->ant;
            }
            free(atual);
            return 1
        }
        atual = atual->prox;
    }
    return 0
}


int main(void) {
    //Código para declarar a variável do tipo Lista, inicializá-la e implementar um menu de opções para o usuário escolher as operações a serem realizadas na lista. O menu deve continuar sendo exibido até que o usuário escolha a opção de sair (0).

    int op, valor;

    do {
        printf("\n=== LISTA DUPLAMENTE ENCADEADA ===\n");
        printf("1) Inserir no inicio\n");
        printf("2) Inserir no fim\n");
        printf("3) Imprimir (direto)\n");
        printf("4) Imprimir (reverso)\n");
        printf("5) Buscar valor\n");
        printf("6) Remover do inicio\n");
        printf("7) Remover do fim\n");
        printf("8) Remover por valor\n");
        printf("0) Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("Valor: ");
                scanf("%d", &valor);
                
                break;

            case 2:
                printf("Valor: ");
                scanf("%d", &valor);
               
                break;

            case 3:
                
                break;

            case 4:
                
                break;

            case 5:
                printf("Valor: ");
                scanf("%d", &valor);
                
                break;

            case 6:
                
                break;

            case 7:
                
                break;

            case 8:
                printf("Valor: ");
                scanf("%d", &valor);
                
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (op != 0);

    return 0;
}