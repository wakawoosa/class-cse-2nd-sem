/* Q70. Demonstrate use of pointers in self-referential structures (theory)
 *
 * A self-referential structure is a structure that contains a pointer to
 * another structure of the same type. This is the basic building block
 * used to create linked lists, stacks, queues and trees.
 *
 * Below, "struct Node" contains an int "data" and a pointer "next" of
 * type "struct Node *", which lets one node link to the next, forming
 * a chain (a simple linked list).
 */
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;  /* pointer to a structure of the same type */
};

int main()
{
    struct Node *head, *second, *third, *temp;

    /* create three nodes */
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    /* link them: head -> second -> third -> NULL */
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    /* traverse and display the linked list */
    temp = head;
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    free(head);
    free(second);
    free(third);

    return 0;
}
