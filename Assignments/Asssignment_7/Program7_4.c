#include<stdio.h>
//////////////////////////////////////////////////////////////////
//
//  Function Name : OddDisplay  
//  Description :   Accept Number N and display Odd numbers up to N
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          28/10/2025
//
//////////////////////////////////////////////////////////////////
void OddDisplay(int iNo) 
{ 
    int iCnt = 0;
     
    if(iNo < 0)
    {
        iNo= -iNo;
    }
    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        if(iCnt %2 != 0)
        {
            printf("%d\t",iCnt);
        }
    }
} 
// Logic 
int main() 
{
    int iValue = 0; 
    printf("Enter number"); 
    scanf("%d",&iValue); 

    OddDisplay(iValue); 
    
    return 0; 
}