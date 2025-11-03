#include<stdio.h>
///////////////////////////////////////////////////////////////////
//
//  Function Name : DollarToINR  
//  Description :   Dollar to Indian Ruppies
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          29/10/2025
//
//////////////////////////////////////////////////////////////////
int DollarToINR(int iNo) 
{ 
    int iResult = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    iResult =iNo * 70 ;
    return iResult;
} 
    int main() 
    { 
    int iValue = 0, iRet = 0; 

    printf("Enter number of USD"); 
    scanf("%d",&iValue); 

    iRet  = DollarToINR(iValue); 

    printf("Value in INR is %d",iRet); 
    return 0; 
} 
// Time Complixity: O(n)