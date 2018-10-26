#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "genericLinkedList.h"

typedef struct listElementStruct
{
  void* data;
  size_t size;
  struct listElementStruct* next;
  printDataType type;
} listElement;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(void* data, size_t size, printDataType type)
{
  listElement* e = malloc(sizeof(listElement));
  if(e == NULL)
  {
    return NULL;
  }
  char* dataPointer = malloc(sizeof(char)*size);
  if(dataPointer == NULL)
  {
    free(e);
    return NULL;
  }
  memcpy(dataPointer, data, size);
  e->data = dataPointer;
  e->size = size;
  e->type = type;
  e->next = NULL;
  return e;
}

//Prints out each element in the list
void traverse(listElement* start)
{
  listElement* current = start;
  while(current != NULL)
  {
    current->type(current->data);
    current = current->next;
  }
}

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* el, void* data, size_t size, printDataType type)
{
  listElement* newElement = createEl(data, size, type);
  listElement* next = el->next;
  newElement->next = next;
  el->next = newElement;
  return newElement;
}


//Delete the element after the given el
void deleteAfter(listElement* after)
{
  listElement* delete = after->next;
  listElement* newNext = delete->next;
  after->next = newNext;
  //need to free the memory because we used malloc
  free(delete->data);
  free(delete);
}

// Returns number of elements in the linked list
int length (listElement* list)
{
  int count = 1; // Initialize count 
  listElement* current = list; // Initialize current 
    while (current->next != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

// Push new element onto the head of the list
// Update the list references using side effects
void push(listElement** list, void* data, size_t size, printDataType type)
{
  listElement* newElement = createEl(data, size, type);
  if (newElement == NULL)
  {
    exit(0);
  }
  newElement->next = *list;
  *list = newElement;
}

// Pop an element from the head of the list
// Update the list references using side effects
listElement* pop(listElement** list)
{
  listElement* oldElement = *list;
  *list = oldElement->next;
  oldElement->next = NULL;

  return oldElement;
}

// Enqueue a new element onto the head of the list
// Update the list references using side effects
void enqueue(listElement** list, void* data, size_t size, printDataType type)
{
  listElement* newElement = createEl(data, size, type);
  newElement->next = *list;
  *list = newElement;
}

// Dequeue an element from the tail of the list.
listElement* dequeue(listElement* list)
{
  listElement* current = list;
	while ((current->next)->next != NULL)
  {
		current = current->next;
	}
	listElement* temp = current->next;
  current->next = NULL;
	return temp;
}