#include<stdio.h>
#include<stdlib.h>

// Node structure of a linked list node
struct Node
{
    int data;
    struct Node* next;
};

// Using this function we will find and print the middle of the linked list
void findMiddle(struct Node *head)
{
    struct Node *slow_ptr = head;
    struct Node *fast_ptr = head;

    if (head!=NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        printf("The middle element is %d\n\n", slow_ptr->data);
    }
}

// Using this function we will create a new node and will insert at the beginning of the list
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node =
        (struct Node*) malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

// Using this function we will print the linked list
void printList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

// Driver Function
int main()
{
    struct Node* head = NULL;
    int i;
    push(&head,8);
    push(&head,4);
    push(&head,15);
    push(&head,10);
    push(&head,5);
    printf("The Linked List is : ");
    printList(head);
    findMiddle(head);
    return 0;
}
