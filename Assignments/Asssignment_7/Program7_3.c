#include<stdio.h>
//////////////////////////////////////////////////////////////////
//
//  Function Name : Display  
//  Description :   Accept Number and display Numbers line
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          28/10/2025
//
//////////////////////////////////////////////////////////////////
void Display(int iNo) 
{ 
    int iCnt=0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt= -iNo; iCnt <=iNo ; iCnt++)
    {
        printf("%d\t", iCnt);
    }
} 
int main() 
{ 
    int iValue = 0; 

    printf("Enter number"); 
    scanf("%d",&iValue); 

    Display(iValue); 

    return 0; 
} 