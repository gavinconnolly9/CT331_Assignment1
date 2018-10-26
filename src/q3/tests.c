#include <stdio.h>
#include "tests.h"
#include "genericLinkedList.h"

void printInt(void* data) { 
	printf("%d\n", *(int*)data);
}

void printDouble(void* data){
	printf("%f\n", *(double*)data);
}

void printChar(void* data) {
	printf("%c\n", *(char*)data);
}

void printString(void* data) {
	printf("%s\n", data);
}

void runTests(){

  // int testInt1 = 16; int testInt2 = 17; int testInt3 = 18;
  // int testInt4 = 19; int testInt5 = 20;
  // double testDouble1 = 1.01; double testDouble2 = 1.02;
  // double testDouble3 = 1.03; double testDouble4 = 1.04;
  // double testDouble5 = 1.05;
  // char testChar1 = 'a'; char testChar2 = 'b'; char testChar3 = 'c';
  // char testChar4 = 'd'; char testChar5 = 'e';
  char testString1[] = "String1"; char testString2[] = "String2";
  char testString3[] = "String3"; char testString4[] = "String4";
  char testString5[] = "String5"; 


  // printf("Tests running for INTEGERS...\n\n");
  // printf("Tests running for DOUBLES...\n\n");
  // printf("Tests running for CHARS...\n\n");
  printf("Tests running for STRINGS...\n\n");

  printf("Adding three elements to the list.\n\n");
  // listElement* l = createEl(&testInt1, 30, &printInt);
  // listElement* l = createEl(&testDouble1, 30, &printDouble);
  // listElement* l = createEl(&testChar1, 30, &printChar);
  listElement* l = createEl(&testString1, 30, &printString);

  // listElement* l2 = insertAfter(l, &testInt2, 30, &printInt);
  // listElement* l2 = insertAfter(l, &testDouble2, 30, &printDouble);
  // listElement* l2 = insertAfter(l, &testChar2, 30, &printChar);
  listElement* l2 = insertAfter(l, &testString2, 30, &printString);

  // insertAfter(l2, &testInt3, 30, &printInt);
  // insertAfter(l2, &testDouble3, 30, &printDouble);
  // insertAfter(l2, &testChar3, 30, &printChar);
  insertAfter(l2, &testString3, 30, &printString);
  traverse(l);
  printf("\n\n");

  printf("Testing the length function\n");
  int listLength = length(l);
  printf("Number of elements in list: %d\n\n", listLength);
  printf("\n");


  printf("Testing the push function\n");
  printf("Pushing new element to head of list:\n\n");
  // push(&l, &testInt4, 30, &printInt);
  // push(&l, &testDouble4, 30, &printDouble);
  // push(&l, &testChar4, 30, &printChar);
  push(&l, "String4", 30, &printString);
  traverse(l);
  printf("\n\n");
  
  printf("Testing the pop function\n");
  printf("Popping element from head of list:\n\n");
  listElement* poppedL = pop(&l);
  traverse(l);
  printf("\n\n");
	
  printf("Testing the enqueue function\n");
  printf("Enqueuing element to head of list:\n\n");
  // enqueue(&l, &testInt5, 30, &printInt);
  // enqueue(&l, &testDouble5, 30, &printDouble);
  // enqueue(&l, &testChar5, 30, &printChar);
  enqueue(&l, &testString5, 30, &printString);
  traverse(l);
  printf("\n\n");
	
  printf("Testing the dequeue function\n");
  printf("Dequeuing element from tail of list:\n\n");
  listElement* dequeuedEl = dequeue(l);
  traverse(l);
  printf("\n");


  printf("\nTests complete.\n");
}
