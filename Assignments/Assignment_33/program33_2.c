#include<stdio.h>
#define TRUE 1 
#define FALSE 0 

typedef int BOOL; 

/////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkCapital
//  Description :   Check whether it is alphabet or not (A-Z).
//  Input :         Stirng 
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          1/12/2025
//
/////////////////////////////////////////////////////////////////////

BOOL ChkCapital(char ch) 
{ 
    if(ch >= 'A' && ch <= 'Z' )
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
    
    bRet = ChkCapital(cValue); 
    
    if(bRet == TRUE) 
    { 
        printf("It is Capital Character"); 
    } 
    else 
    { 
        printf("It is not a Capital Character"); 
    } 
    return 0; 
} 