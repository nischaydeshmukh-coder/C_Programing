#include <stdio.h> 
///////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   Even or Odd
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////////
void CheckEvenOdd(int num) 
{ 
    if(num <= 0)
    {
        num = -num;
    }
    if(num % 2== 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
} 
int main() 
{ 
    int number; 

    printf("Enter number: "); 
    scanf("%d", &number); 

    CheckEvenOdd(number); 

    return 0; 
}