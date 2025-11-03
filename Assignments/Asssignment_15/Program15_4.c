#include<stdio.h> 
///////////////////////////////////////////////////////////////////
//
//  Function Name : MultDigits  
//  Description :   Display Multiplication of all Digits
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          01/10/2025
//
//////////////////////////////////////////////////////////////////
int MultDigits(int iNo) 
{ 
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo= -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMult= iMult * iDigit;
        }
        iNo = iNo /10;
    }
    return iMult; 
} 
int main() 
{                                                       
    int iValue = 0; 
    int iRet = 0; 

    printf("Enter number"); 
    scanf("%d",&iValue); 
    
    iRet = MultDigits(iValue); 
    
    printf("%d",iRet); 
    
    return 0; 
} 