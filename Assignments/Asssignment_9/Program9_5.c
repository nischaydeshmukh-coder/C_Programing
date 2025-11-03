#include<stdio.h>
///////////////////////////////////////////////////////////////////
//
//  Function Name : FactorialDiff  
//  Description :   Factorial Difference of Even and Odd Factorial
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          29/10/2025
//
//////////////////////////////////////////////////////////////////
int FactorialDiff(int iNo) 
{ 
    int iCnt = 0, iEvenFact = 1, iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt <=iNo; iCnt+=2)
    {
        iEvenFact = iEvenFact * iCnt;
    }
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <=iNo; iCnt+=2)
    {
        iOddFact = iOddFact * iCnt;
    }
    return iEvenFact-iOddFact; 
} 
int main() 
{ 
    int iValue = 0,iRet = 0; 
    printf("Enter number"); 
    scanf("%d",&iValue); 

    iRet = FactorialDiff(iValue); 

    printf("Factorial difference is %d",iRet); 
    return 0;
}
// Time Complixity: O(n)