#include<stdio.h> 
///////////////////////////////////////////////////////////////
//
//  Function Name : NonFact
//  Description :   Display Non Factors
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          26/10/2025
//
//////////////////////////////////////////////////////////////////
void NonFact(int iNo) 
{ 
 int i = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i= 1 ; i < iNo; i++)
    {
        if(iNo %i != 0)
        {
            printf("%d\t",i);
        }
    }
} 
int main() 
{                                         
    int iValue = 0; 
  
    printf("Enter number"); 
    scanf("%d",&iValue); 
  
    NonFact(iValue); 
  
    return 0; 
} 