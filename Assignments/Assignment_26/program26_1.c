// Input : 5
// Output :A    B   C   D   E

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description :   Print A to E .
//  Input :         int
//  Output :        symbol
//  Auther :        Nischay Hemant Deshmukh
//  Date :          21/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h> 
void Pattern(int iNo) 
{ 
    int iCnt = 0;
    char cha = 'A';

    for(iCnt = 1; iCnt<= iNo; iCnt++ )
    {
        printf(" %c",cha);
        cha++;
    }
} 

int main() 
{ 
    int iValue = 0; 

    printf("Enter number of elements"); 
    scanf("%d",&iValue); 
   
    Pattern(iValue); 
   
    return 0; 
} 