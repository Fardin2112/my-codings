#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d  -> ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *Head;
    struct Node *second;
    struct Node *third;

    // Allocated memeoryfor nodes in linklist in heap
    Head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // link first and second
    Head->data = 7;
    Head->next = second;

    // link first and second
    second->data = 8;
    second->next = third;

    // link first and second
    third->data = 9;
    third->next = NULL;

    display(Head);

    return 0;
}