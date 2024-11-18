#ifndef DOUBLE_LIST_H
#define DOUBLE_LIST_H

// Se crea el struct con las caracteristicas que debe tener el nodo, estas son su dato almacenado,
// y dos punteros, uno que apunte al nodo anterior y otro que apunte al nodo posterior.
struct Node {

        int data;
        struct Node *next;
        struct Node *prev;
};

//Esta función agrega un nuevo dato al inicio de la lista; recibe el dato a agregar y un puntero doble que apunta
//al nodo. Esta función no retorna nada debido a que modifica el valor y las caracteristicas del nodo con punteros.

void agregarNodoInicio(int data, struct Node **head);

//Esta función agrega un nuevo dato al final de la lista; recibe el dato a agregar y un puntero que apunta
//al nodo. Esta función no retorna nada debido a que modifica el valor y las caracteristicas del nodo con punteros.

void agregarNodoFinal(int data, struct Node * node);

//Esta función agrega un elemento en una posición especifica de la lista; recibe el dato a agregar, la posición en la
//que se desea agregar, un puntero al nodo y un puntero doble al nodo. Esta función no retorna nada debido a que 
//modifica el valor y las caracteristicas del nodo con punteros.

void InsertarElemento(int data, int posicion, struct Node * node, struct Node **head);

//Esta función elimina un elemento específico de la lista; si hay dos elementos iguales solo elimina el primero.
//La función recibe el dato a elimina, un puntero al nodo y un puntero doble al nodo. Esta función no retorna nada 
//debido a que modifica el valor y las caracteristicas del nodo con punteros.


void eliminarNodo(int data, struct Node * node, struct Node **head);

//Esta función busca un elemento específico en la lista e indica su posición en la misma o si no existe; 
//recibe el dato a agregar, un puntero al nodo y un puntero doble al nodo. Esta función no retorna nada debido a que 
//modifica el valor y las caracteristicas del nodo con punteros.

void buscarNodo(int data, struct Node * node);

//Esta función imprime la lista en orden normal. Recibe un puntero al nodo únicamente. Esta función no retorna nada
//debido a que se imprime desde la misma función a medida que se recorre la lista con punteros.

void printList(struct Node * node);

//Esta función imprime la lista en orden inverso. Recibe un puntero al nodo únicamente. Esta función no retorna nada
//debido a que se imprime desde la misma función a medida que se recorre la lista con punteros.

void printListInv(struct Node * node);

//Esta función libera la memoría solicitada para los elementos de la lista. Recibe un puntero doble al nodo únicamente.
// Esta función no retorna nada debido a que solo libera la memoria y no debe retornar nada al main.

void freeList(struct Node **head);

#endif

