#include <stdio.h>
#include "double_list.h"

int main() {

        struct Node* head = NULL;

        agregarNodoInicio(5, &head);
        agregarNodoInicio(7, &head);
        agregarNodoFinal(2, head);
        agregarNodoFinal(10, head);
        agregarNodoInicio(3, &head);
        printList(head);
        printListInv(head);


        InsertarElemento(14, 3, head, &head);
        printList(head);
        printListInv(head);

        eliminarNodo(7, head, &head);
        printList(head);
        printListInv(head);

        buscarNodo(10, head);
        buscarNodo(45, head);

        freeList(&head);

        return 0;
}

