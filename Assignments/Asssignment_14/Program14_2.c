#include<stdio.h> 
#include<stdbool.h>
///////////////////////////////////////////////////////////////////
//
//  Function Name : ChkZero  
//  Description :   Check Number contains 0 or not
//  Input :         Integer
//  Output :        Character
//  Author :        Nischay Hemant Deshmukh
//  Date :          31/10/2025
//
//////////////////////////////////////////////////////////////////
#define TRUE 1 
#define FALSE 0 
typedef int BOOL; 
BOOL ChkZero(int iNo) 
{ 
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo= -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return true;
        }
        iNo = iNo /10;
    }
    return false;
} 
int main() 
{ 
    int iValue = 0; 
    BOOL bRet = FALSE; 
                                                        
    printf("Enter number"); 
    scanf("%d",&iValue); 

    bRet = ChkZero(iValue); 
    
    if(bRet == TRUE) 
    { 
        printf("It Contains Zero"); 
    } 
    else 
    { 
        printf("There is no Zero"); 
    } 
    return 0; 
} 