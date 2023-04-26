#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

void insert(struct node **head_ref, int new_data) {
   struct node *new_node = (struct node *)malloc(sizeof(struct node));
   new_node->data = new_data;
   new_node->next = (*head_ref);
   (*head_ref) = new_node;
}

void reversePrint(struct node *head) {
   if (head == NULL) {
      return;
   }
   reversePrint(head->next);
   printf("%d ", head->data);
}

int main() {
   struct node *head = NULL;
   insert(&head, 1);
   insert(&head, 2);
   insert(&head, 3);
   insert(&head, 4);
   insert(&head, 5);
   printf("Original linked list: ");
   struct node *temp = head;
   while (temp != NULL) {
      printf("%d ", temp->data);
      temp = temp->next;
   }
   printf("\nReversed linked list: ");
   reversePrint(head);
   return 0;
}
