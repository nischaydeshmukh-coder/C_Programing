#include<stdio.h> 
///////////////////////////////////////////////////////////////////
//
//  Function Name : EvenFactorial  
//  Description :   Even Factorial of a Number
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          29/10/2025
//
//////////////////////////////////////////////////////////////////
int EvenFactorial(int iNo) 
{                                                     
    int iCnt = 0, iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt <=iNo; iCnt+=2)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
} 

int main() 
{ 
    int iValue = 0,iRet = 0;

    printf("Enter number"); 

    scanf("%d",&iValue); 

    iRet = EvenFactorial(iValue); 

    printf("Even Factorial of number is %d",iRet); 

    return 0; 
}
// Time Complixity: O(n) 