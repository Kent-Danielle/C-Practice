#include <stdio.h>
#include <stdlib.h>
// We need stdlib because we need to malloc for structs!!

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void recursivePrintList(struct Node* n) {
  if (n == NULL) {
    return;
  } else {
    printf("%d ", n->data);
    recursivePrintList(n->next);
  }
}

void printList(struct Node* n) {
  while (n != NULL) {
    printf("%d ", n->data);
    n = n->next;
  }
}

void printReverseList(struct Node* n) {
  while (n != NULL) {
    printf("%d ", n->data);
    n = n->prev;
  }
}

// without using prev, and starting from head
void recursiveReversePrintList(struct Node* n) {
  if (n == NULL) {
    return;
  } else {
    recursiveReversePrintList(n->next);
    printf("%d ", n->data);
  }
}


int main() {
  struct Node* head = NULL;
  struct Node* second = NULL;
  struct Node* third = NULL;

  head = (struct Node*) malloc(sizeof(struct Node)); // Node = 4 bytes + 4 bytes = 8b
  second = (struct Node*) malloc(sizeof(struct Node)); // Node = 4 bytes + 4 bytes = 8b
  third = (struct Node*) malloc(sizeof(struct Node)); // Node = 4 bytes + 4 bytes = 8b

  head->data = 1;
  head->prev = NULL;
  head->next = second;

  second->data = 2;
  second->prev = head;
  second->next = third;

  third->data = 3;
  third->prev = second;
  third->next = NULL;

  printList(head);
  printf("\n");
  recursivePrintList(head);
  printf("\n");
  printReverseList(third);
  printf("\n");
 // recursiveReversePrintList(head); // for practice purpose only; irrelevant

  return 0;
}