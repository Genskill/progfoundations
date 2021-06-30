#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node0 {
  char name[100];
  struct node0 *next;
};

typedef struct node0 node;


node *create_node(char *s) {
  /* Create a new node and return it */
  node *ret = malloc(sizeof(node));
  strcpy((*ret).name, s); /* Initialises name */
  (*ret).next = NULL;
  return ret;
}

void print_node(node *p) {
  printf("address: %p name: %s next: %p\n", p, (*p).name, (*p).next);
}


node * read_names() {
  node *root =  NULL; /* First node in the list */
  node *current = NULL; /* Current node in the list.*/
  node *p; /* Temporary */
  char s[100];
  do {
    /* Read a new name */
    printf("Enter name. Enter # to stop.");
    scanf("%s", s); 
    if (strcmp(s,"#") == 0) {
      break; /* Stop reading if we type # */
    }
    /* Create a node for it */
    p = create_node(s);
    
    if (root == NULL) { /* If no nodes created till now, the p is the root*/
      root = p;  /* Root is p */
      current = p; /* Head is now root since we have only one node */
    } else {
      current->next = p; /* Attach the new node p to the existing list */
      current = p; /* Update the head to point to the new node */
    }
  } while (strcmp(s, "#") != 0);
  return root;
}

int main(void) {
  /* node *p0 = create_node("Noufal"); */
  /* node *p1 = create_node("Ibrahim"); */
  /* node *p2 = create_node("Kozhikode"); */
  /* /\* (*p0).next = p1; *\/ */
  /* /\* (*p1).next = p2; *\/ */
  /* p0->next = p1; */
  /* p1->next = p2; */

  /* /\* * of structure + . to structure = -> *\/ */
  /* print_node(p0); */
  /* print_node(p1); */
  /* print_node(p2); */

  node *current = read_names();
  while (current != NULL) {
    printf("%s\n", current->name);
    current = current->next;/* (*current).next; */
  }
}


