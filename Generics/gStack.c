#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct node {
    struct node *next;
    void *data;
} node;

typedef struct stack {
    int nelems;
    size_t elem_size_bytes;
    node *top;
} stack;

void stack_peek(stack *s, void *addr) {
  if (s->nelems == 0) {
    printf("Empty stack");
  }
  node *n = malloc(sizeof(node));
  memcpy(addr, n->data, s->elem_size_bytes);

  free(n->data);
  free(n);
  s->nelems--;
}

void stack_pop(stack *s, void *addr) {
  if (s->nelems == 0) {
    printf("Empty stack");
  }
  node *n = malloc(sizeof(node));
  n = s->top;
  memcpy(addr, n->data, s->elem_size_bytes);
  s->top = n->next;
//
//  free(n->data);
//  free(n);
  s->nelems--;
}

void stack_push(stack *s, const void *data) {
  node *newNode = malloc(sizeof(node));

  newNode->data = malloc(s->elem_size_bytes);
  memcpy(newNode->data, data, s->elem_size_bytes);

  newNode->next = s->top;
  s->top = newNode;
  s->nelems++;

//  free(newNode->data);
//  free(newNode);
}

stack *stack_create(size_t elem_size_bytes) {
  stack *s = malloc(sizeof(stack));
  s->nelems = 0;
  s->top = NULL;
  s->elem_size_bytes = elem_size_bytes;
  return s;
}

char * reverse(char *s, int st, int e) {

  return NULL;
}

char * reverseP(char *s) {
  int numP = 0;
  int stInd;
  stack *stIndStack = stack_create(sizeof(int));
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == '(') {
      stInd = i;
      stack_push(stIndStack, &stInd);
      numP++;
    } else if (s[i] == ')') {
      stack_pop(stIndStack, &stInd);
      strcat(s, reverse(s, stInd + 1, i - 1));
      numP++;
    }
  }

  char *res = malloc(sizeof(char) * (strlen(s) - numP));
  int k = 0;
  for (int j = 0; j < strlen(s); j++) {
    if (s[j] == '(' || s[j] == ')') {
      continue;
    } else {
      res[k] = s[j];
      k++;
    }
  }

  return res;
}



void stack_cal() {
  int val;
  char arr[] = {'1', '+', '2', '-', '4', '+', '9'};
  stack *numStack = stack_create(sizeof(int));

  int length = sizeof(arr) / sizeof(arr[0]);
  int num;
  int temp;

  for (int i = 0; i < length; i++) {
    if (isdigit(arr[i])) {
      num = (int) (arr[i] - '0');
      stack_push(numStack, &num);
    } else {
      num = (arr[i] == '-') ? (-1) * (int) (arr[i + 1] - '0') : (int) (arr[i + 1] - '0');
      stack_pop(numStack, &temp);
      num += temp;
      stack_push(numStack, &num);
      i++;
    }
  }

  stack_pop(numStack, &val);
  printf("%d", val);
}

int main() {


  printf("%d", 8 & 1);

//  int n = 1;
//  int i = 1;
//  int j = 13;
//  while (i != n + 2) {
//    i = i + 1;
//    j = (4*j) - (21*i) - 12;
//  }
//  printf("%d", j);
}