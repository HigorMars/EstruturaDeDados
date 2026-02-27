#include <stdio.h>
#include <stdlib.h>

//definição da estrutura do nó
typedef struct Node{
    int data;
    struct Node *next;
} Node;

//fução para inserção no inicio da lista
//recebe &head para alterar o head do chamador
// void pois não recebe nada
void inserirInicio(struct Node **head, int valor){
    struct Node *novo = (struct Node*) malloc(sizeof(Node)); //alocar memoria para chamador
    if (novo == NULL){
        printf("Erro de alocação\n");
        exit (1);
    }
novo->data = valor;
novo->next = *head;
*head = novo;
}

void exibirlista(struct Node *head){
    struct Node *temp = head;
    while (temp!=NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;

    }
    printf("NULL\n");
}

int main(){
    struct Node *head = NULL;  //inicia em nulo para evitar "sujeiras"
    int valor;
    
    for(int i = 0; i<5; i++){
        printf("Digite um valor:");
        scanf("%d", &valor);
        inserirInicio(&head, valor);
    }
printf("\nLista Final: \n");
exibirlista(head);

struct Node *temp;
while(head != NULL){
    temp = head;
    head = head->next;
    free(temp);
 }
 return 0;
}