#include<stdio.h> 
///////////////////////////////////////////////////////////////////
//
//  Function Name : MultiplicationDisplay  
//  Description :   Accept Number N and display first 5 Multipls of N
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          28/10/2025
//
//////////////////////////////////////////////////////////////////
void MultipleDisplay(int iNo) 
{ 
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo= -iNo;
    }
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
} 
 
int main() 
{ 
 
    int iValue = 0; 

    printf("Enter number"); 
    scanf("%d",&iValue); 
    
    MultipleDisplay(iValue); 
    
    return 0; 
}