#include<stdio.h>
//////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description :   Accept Number and display Pattern
//  Input :         Integer
//  Output :        Symbol
//  Author :        Nischay Hemant Deshmukh
//  Date :          28/10/2025
//
//////////////////////////////////////////////////////////////////
void Pattern(int iNo) 
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo= -iNo;
    }
    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("$ * ");
    }
} 

int main() 
{ 
    int iValue = 0; 

    printf("Enter number"); 
    scanf("%d",&iValue); 

    Pattern(iValue); 

    return 0; 
}