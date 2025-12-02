#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Toggel the charcaters if not a character display the same .
//  Input :         Stirng 
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          1/12/2025
//
/////////////////////////////////////////////////////////////////////

void Display(char ch) 
{ 
    if(ch >= 'a' && ch <= 'z' )
    {
        ch = ch - 32;
        printf("%c",ch);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("%c",ch);
    } 
    else
    {
        printf("%c",ch);
    }
} 
int main() 
{ 
    char cValue = '\0'; 
                                                     
    printf("Enter the character:"); 
    scanf("%c",&cValue); 

    Display(cValue); 

    return 0; 
} 