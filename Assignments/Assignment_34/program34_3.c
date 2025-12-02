#include<stdio.h>
 

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   If capital display till Z else small then display till a.
//  Input :         Stirng 
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          1/12/2025
//
/////////////////////////////////////////////////////////////////////

void Display(char ch) 
{ 
    
    if(ch >= 'a' && ch <= 'z')
    {
        for(; ch >= 'a' ; ch--)
        {
        printf("%c",ch);
        }
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        for(; ch <= 'Z' ; ch++)
        {
        printf("%c",ch);
        }
    }
    else
    {
        return;
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