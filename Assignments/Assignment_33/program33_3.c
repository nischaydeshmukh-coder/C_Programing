#include<stdio.h>
#define TRUE 1 
#define FALSE 0 

typedef int BOOL; 

/////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkDigit
//  Description :   Check whether it is Digit or not (0-9).
//  Input :         Stirng 
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          1/12/2025
//
/////////////////////////////////////////////////////////////////////

BOOL ChkDigit(char ch) 
{ 
    if(ch >= '0' && ch <= '9' )
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
    
    bRet = ChkDigit(cValue); 
    
    if(bRet == TRUE) 
    { 
        printf("It is a Digit"); 
    } 
    else 
    { 
        printf("It is not a Digit"); 
    } 
    return 0; 
} 