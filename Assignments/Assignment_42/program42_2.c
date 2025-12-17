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

int SearchLastOcc(PNODE Head,int no)
{
    int iPos = 1, lastPos = -1;

    while(Head != NULL)
    {
        if(Head -> Data == no)
        {
            lastPos = iPos;
        }
        Head = Head -> Next;
        iPos++;
    }
    return lastPos;

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
    iRet = SearchLastOcc(First,21);
    printf("Last Occurance :%d\n",iRet);
    

}