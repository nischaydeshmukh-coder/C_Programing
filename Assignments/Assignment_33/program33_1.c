#include<stdio.h>

#define TRUE 1 
#define FALSE 0 

typedef int BOOL; 

/////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkAlpha
//  Description :   Check whether it is alphabet or not (A-Z a-z).
//  Input :         Stirng 
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          1/12/2025
//
/////////////////////////////////////////////////////////////////////

BOOL ChkAlpha(char ch) 
{ 

    if((ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
} 
int main() 
{ 
    char cValue = '\0'; 
    BOOL bRet = FALSE; 
    
    printf("Enter the character:"); 
    scanf("%c",&cValue); 

    bRet = ChkAlpha(cValue); 

    if(bRet == TRUE) 
    { 
        printf("It is Character"); 
    } 
    else 
    { 
        printf("It is not a Character"); 
    } 
    return 0; 
} 