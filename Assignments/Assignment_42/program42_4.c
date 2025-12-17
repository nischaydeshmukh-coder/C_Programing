#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = (*Head);
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d |->", Head->Data);
        Head = Head -> Next;
    }
    printf("NULL\n");
}

int Maximum(PNODE Head)
{
    int max = Head->Data;

    while(Head != NULL)
    {
        if(Head-> Data > max)
        {
            max = Head->Data;
        }
        Head = Head->Next;
    } 
    return max;

}


int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

   
    Display(First);
    iRet = Maximum(First);
    printf("Maximum of all elements :%d\n",iRet);
    

}