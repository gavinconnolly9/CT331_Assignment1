#include <stdio.h>
#include "tests.h"
#include "linkedList.h"

void runTests()
{
  printf("Tests running...\n\n");
  printf("Adding three elements to the list.\n\n");
  listElement* l = createEl("Test String (1).", 30);
  listElement* l2 = insertAfter(l, "another string (2)", 30);
  insertAfter(l2, "a final string (3)", 30);
  traverse(l);
  printf("\n\n");

  printf("Testing the length function\n");
  int listLength = length(l);
  printf("Number of elements in list: %d\n\n", listLength);
  printf("\n");


  printf("Testing the push function\n");
  printf("Pushing new element to head of list:\n\n");
  push(&l,"push test string(4)", 30);
  traverse(l);
  printf("\n\n");
  
  printf("Testing the pop function\n");
  printf("Popping element from head of list:\n\n");
  listElement* poppedL = pop(&l);
  traverse(l);
  printf("\n\n");
	
  printf("Testing the enqueue function\n");
  printf("Enqueuing element to head of list:\n\n");
  enqueue(&l,"enqueue test string(5)", 30);
  traverse(l);
  printf("\n\n");
	
  printf("Testing the dequeue function\n");
  printf("Dequeuing element from tail of list:\n\n");
  listElement* dequeuedEl = dequeue(l);
  traverse(l);
  printf("\n");


  printf("\nTests complete.\n");
}
