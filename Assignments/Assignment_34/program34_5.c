#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Display the ASCII value in decimal, octal and hexadecimal format of the given chracter.
//  Input :         Stirng 
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          1/12/2025
//
/////////////////////////////////////////////////////////////////////

void Display (char ch) 
{ 
    printf("Decimal: %d\n",ch);
    printf("Octal: %#o\n",ch);
    printf("Hexadecimal: %X\n",ch);
} 
int main()
{
    char cValue = '\0';

    printf("Enter the character"); 
    scanf("%c",&cValue); 
    
    Display(cValue); 
    
    return 0;
} 