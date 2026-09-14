#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

//////////////////////////////////////////////////////////////////////////////////

typedef struct _listnode
{
    int item;
    struct _listnode *next;
} ListNode;

typedef struct _linkedlist
{
    int size;
    ListNode *head;
} LinkedList;

int main()
{
    ListNode node = {0, NULL};
    LinkedList ll = {1, &node};

    LinkedList *ll_pointer = (LinkedList *)((char *)&ll.head - offsetof(LinkedList, head));
    
    printf("&ll        = %p\n", (void *)&ll);
    printf("&ll.head   = %p\n", (void *)&ll.head);
    printf("ll.head    = %p\n", (void *)ll.head);
    printf("&node      = %p\n", (void *)&node);
    printf("ll_pointer = %p\n", (void *)ll_pointer);

}