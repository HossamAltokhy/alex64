#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *pNext;
}*pTop,*pPointer;


struct node* createNode(int data);
struct node* push(int data);
void peek();
int stack_pop();

void added_feature();



int main()
{
    push(9);
    push(7);
    push(4);
    push(0);
    push(2);
    push(10);

    for( ;stack_pop()!=9;);


    return 0;
}


void added_feature(){
    // write code here
}

struct node* createNode(int data)
{

    struct node* pNode = (struct node*)malloc(sizeof(struct node));
    if(pNode != NULL)
    {
        pNode->data = data;
        pNode->pNext = NULL;
    }

    return pNode;
}

struct node* push(int data)
{

    struct node* pNode = createNode(data);
    if(pNode != NULL)
    {
        pNode->pNext = pTop;
        pTop = pNode;
    }

    return pNode;

}

int stack_pop()
{
    int data = -1;
    if(pTop!= NULL)
    {
        struct node * pCur = pTop;
        pTop = pTop->pNext;
        data = pCur->data;
        free(pCur);
    }

    return data;
}

void peek()
{
    pPointer=pTop;

    do
    {
        printf("%d\n", pPointer->data);

    }
    while(pPointer = pPointer->pNext);
}
