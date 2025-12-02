#include<stdio.h>
#define TRUE 1 
#define FALSE 0 

typedef int BOOL; 

/////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSmall
//  Description :   Check whether the alphabet is small or not(a-z).
//  Input :         Stirng 
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          1/12/2025
//
/////////////////////////////////////////////////////////////////////

BOOL ChkSmall(char ch) 
{ 
    if(ch >= 'a' && ch <= 'z' )
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
    
    bRet = ChkSmall(cValue); 
    
    if(bRet == TRUE) 
    { 
        printf("It is Small Character"); 
    } 
    else 
    { 
        printf("It is not a Small Character"); 
    } 
    return 0; 
} 