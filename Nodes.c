#include <stdio.h>
#include <stdlib.h>

typedef struct node  // Define a estrutura do nó
{
    int dado;    //dado armazenado no nó
    struct Node *prox;  // ponteiro parao prox nó
} Node;

int main(){
    Node *head = NULL;  //Ponteiro para o 1 nó(vazio)
    Node *tail = NULL;  // ponteiro para o ultimo nó(vazio)

    // criando o primeiro nó
    struct Noide *n1 = malloc(sizeof(Node)); // Aloca mem para o 1º nó
    if(n1 == NULL){   //verifica falha de alocação ou testa
        printf("Erro de alocação\n");  // Informa o erro
        return 1;  // encerra exec com erro
    }

    n1->dado = 20;  // Define o valor do primeiro nó
    n1->prox = NULL;  // Aponta para o próximo
    head = n1;  // head passa a apontar apara o primeiro
    tail = n1;  // tail tambem aponta para o primeiro que tb é ultimo

    // Inserir no inicio
    struct Node *novo = malloc(sizeof(Node)); // aloca mem para o novo nó
    if(novo == NULL){  //verifica falha de alocação
        printf("Erro de alocação\n"); //informa o erro
        free(head);  
        return 1; //encerra exec com erro
    }

    novo->dado = 10; //define o valor do novo nó
    novo->prox = head; // novo aponta para o antigo 1º
    head = novo; //head aponta para o novo nó 
    //tail não muda pois o ultimo nó não muda de endereço

    //inserindo no final com tail
    struct Node *n2 = malloc(sizeof(Node));  //aloca mem para novo nó
    if(n2 == NULL){   //testa aloc
        printf("Erro na alocação\n");  // informa erro

    }
    //libera todos os nós antes de sair
    struct Node *temp = head;  //começa pelo head
    while (temp != NULL){    //percorre ate o final
        struct Node *aux = temp; // guarda o nó atual
        temp = temp->prox; // avança para o prox
        free(aux);

    }
    return 1; //encerra com erro



n2->dado =30;  //define valor de novo nó
n2->prox = NULL; // ultimo nó sempre aponta para NULL
tail->prox = n2; //antigo tail aponta para o novo nó
tail = n2; // atualiza tail para o novo ultimo nó

//percorrendo e imprimindo a lista
struct Node *temp = head;
while (temp != NULL)




}


