#ifndef CT331_ASSIGNMENT_LINKED_LIST
#define CT331_ASSIGNMENT_LINKED_LIST

typedef void(*printDataType)(void* data);
typedef struct listElementStruct listElement;

listElement* createEl(void* data, size_t size, printDataType);

void traverse(listElement* start);

listElement* insertAfter(listElement* after, void* data, size_t size, printDataType);

void deleteAfter(listElement* after);

int length (listElement* list);

void push(listElement** list, void* data, size_t size, printDataType);

listElement* pop(listElement** list);

void enqueue(listElement** list, void* data, size_t size, printDataType);

listElement* dequeue(listElement* list);

#endif
