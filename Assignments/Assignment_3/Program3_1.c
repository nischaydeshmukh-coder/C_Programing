#include<stdio.h>
///////////////////////////////////////////////////////////////
//
//  Function Name : PrintEven
//  Description :   Print the Number of even Numbers
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          26/10/2025
//
//////////////////////////////////////////////////////////////////
void PrintEven(int iNo)  
{  
    int iCnt=0;
    if(iNo <= 0)  
    {  
        return;  
    }  
    for(iCnt=1;iCnt <=iNo; iCnt++)
    {
        printf("%d\t",2*iCnt);
    } 
} 
int main() 
{ 
    int iValue = 0; 
    
    printf("Enter number\n"); 
    scanf("%d",&iValue);

    PrintEven(iValue); 
    
    return 0; 
} 