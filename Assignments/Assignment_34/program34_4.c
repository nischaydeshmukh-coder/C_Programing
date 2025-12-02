#include<stdio.h>
#define TRUE 1 
#define FALSE 0 

typedef int BOOL; 

/////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSpecial
//  Description :   Check weather the input is a sepcial symbol or not.
//  Input :         Stirng 
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          1/12/2025
//
/////////////////////////////////////////////////////////////////////

BOOL ChkSpecial(char ch) 
{ 

    if(ch >= 33 && ch <= 42)
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
    
    printf("Enter the character"); 
    scanf("%c",&cValue); 
    
    bRet = ChkSpecial(cValue); 
    
    if(bRet == TRUE) 
    { 
        printf("It is special Character"); 
    } 
    else 
    { 
        printf("It is not a special Character"); 
    } 
    return 0; 
} 