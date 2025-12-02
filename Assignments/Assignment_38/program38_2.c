#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : LastChar
//  Description :   Give the location of the character.
//  Input :         Stirng , Character
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          30/11/2025
//
/////////////////////////////////////////////////////////////////////

int StrCpyX(char *src,char *dest)
{
    int i = 0;

    while(*src != '\0')
    {
        if(*src != ' ')
        {
            *dest = *src;
            *dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main() 
{ 
    char arr[30] = "Marvel   lous Pyth   on"; 
    char brr[30];   

    StrCpyX(arr,brr); 

    printf("%s",brr);  

    return 0; 
}