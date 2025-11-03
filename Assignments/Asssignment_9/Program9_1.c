#include<stdio.h> 
///////////////////////////////////////////////////////////////////
//
//  Function Name : Display  
//  Description :   Display Pattern
//  Input :         Integer
//  Output :        Symbol
//  Author :        Nischay Hemant Deshmukh
//  Date :          29/10/2025
//
//////////////////////////////////////////////////////////////////
void Display(int iNo) 
{ 
    int iCnt1 = 0;
    int iCnt2 = 0;

    for(iCnt1 = 1; iCnt1 <= iNo; iCnt1++)
    {
        printf(" * ",iCnt1);
    }
     for(iCnt2 = 1; iCnt2 <= iNo; iCnt2++)
    {
        printf(" # ",iCnt2);
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
// Time Complixity: O(n)