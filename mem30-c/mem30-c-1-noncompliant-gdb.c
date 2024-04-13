#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

void free_list(struct node *head) {
  for (struct node *p = head; p != NULL; p = p->next) {
    free(p);
  }
}

int main() {
  // Create a list with two nodes for the example
  struct node *head = malloc(sizeof(struct node));
  head->value = 1;
  head->next = malloc(sizeof(struct node));
  head->next->value = 2;
  head->next->next = NULL;

  // Free the list
  free_list(head);

  return 0;
}
