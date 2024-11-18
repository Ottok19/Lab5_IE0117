#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "double_list.h"

void agregarNodoInicio(int data, struct Node **head) {

        struct Node* newNode = (struct Node *)malloc(sizeof(struct Node));

        if (!newNode)
                return;

        if(*head == NULL) {

                newNode->data = data;
                newNode->next = *head;
                newNode->prev = NULL;

        }

        if(*head != NULL) {
                newNode->data = data;
                (*head)->prev = newNode;
                newNode->next = *head;
                newNode->prev = NULL;
        }

        *head = newNode;

}

void agregarNodoFinal(int data, struct Node * node) {

        struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));

        if(!newNode)
                return;

        newNode->data = data;
        newNode->next = NULL;

        while(node->next != NULL) {
                node = node->next;
        }

        newNode->prev = node;
        node->next = newNode;

}

void InsertarElemento(int data, int posicion, struct Node * node, struct Node **head) {

        struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));

        struct Node * pre = *head;
        struct Node * post = *head;

        if(!newNode)
                return;

        int contador = 1;

        while(contador != posicion-1) {
                node = node->next;
        	contador += 1;
        }

        post = node->next;
        node = node->next;
        pre = node->prev;

        newNode->data = data;
        newNode->prev = pre;
        pre->next = newNode;
        newNode->next = post;
        post->prev = newNode;

        printf("Se agrego el elemento %d en la posición %d\n", data, posicion);
        printf("\n");
}

void eliminarNodo(int data, struct Node * node, struct Node **head) {

        struct Node * pre = *head;
        struct Node * post = *head;

        while(node->data != data) {
                node = node->next;
        }

        pre = node->prev;
        post = node->next;
        free(node);

        pre->next = post;
        post->prev = pre;

        printf("Se elimino el elemento %d de la lista\n", data);
        printf("\n");
}

void buscarNodo(int data, struct Node * node) {

        int posicion = 1;
        bool salida = false;

        while(node->data != data || salida == true) {

                if(node->next == NULL) {
                        salida = true;
                        break;
                }

                node = node->next;
                posicion += 1;
        }

        if( (node->next == NULL) & (node->data != data) ) {
                printf("No se encontro ningun elemento con el número %d en la lista\n", data);
        }

        else{
                printf("El elemento %d se encuentra en la posición %d\n", data, posicion);
        }
        printf("\n");
}

void printList(struct Node * node) {

        printf("La lista recorrida en orden normal es la siguiente:\n");

        while (node != NULL) {
                printf("%d ->", node->data);
                node = node->next;
        }
        printf("NULL \n");
        printf("\n");
}

void printListInv(struct Node * node) {

        printf("La lista recorrida en orden inverso es la siguiente:\n");

        while (node->next != NULL) {
                node = node->next;
        }

        while (node != NULL) {
                printf("%d ->", node->data);
                node = node->prev;
        }
        printf("NULL \n");
        printf("\n");
}

void freeList(struct Node **head) {

        struct Node * actual = *head;
        struct Node * temp = *head;

        while(actual != NULL) {

                temp = actual->next;
                free(actual);
                actual = temp;

        }

        *head = NULL;

}



