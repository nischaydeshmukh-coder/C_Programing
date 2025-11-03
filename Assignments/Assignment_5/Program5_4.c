#include<stdio.h>
//////////////////////////////////////////////////////////////////
//
//  Function Name : CheckNumberType
//  Description :   Number Type
//  Input :         Integer
//  Output :        Character
//  Author :        Nischay Hemant Deshmukh
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////////
void CheckNumberType(int num) 
{ 
    if(num < 0)
    {
        printf("Number is negative");
    }
    else
    {
        printf("Number is positve");
    }
} 
int main() 
{ 
    int number; 

    printf("Enter number: "); 
    scanf("%d", &number); 

    CheckNumberType(number); 

    return 0; 
} 