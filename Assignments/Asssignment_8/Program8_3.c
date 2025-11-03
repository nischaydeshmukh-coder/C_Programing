#include<stdio.h> 
///////////////////////////////////////////////////////////////////
//
//  Function Name : Factorial  
//  Description :   Factorial of given Number
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          28/10/2025
//
//////////////////////////////////////////////////////////////////
int Factorial(int iNo) 
{
    int iCnt =0, iFact =1;
    if(iNo <0 )
    {
        iNo= -iNo;
    }
    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt ;
    }
    return iFact;
} 
int main() 
{ 
    int iValue = 0,iRet = 0; 

    printf("Enter number"); 
    scanf("%d",&iValue); 

    iRet = Factorial(iValue); 

    printf("Factorial of number is %d",iRet); 
    return 0; 
} 
// Time Complixity: O(n)