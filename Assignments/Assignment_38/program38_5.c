#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : StrCpyToggel
//  Description :   Toggel the given input string.
//  Input :         Stirng 
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          30/11/2025
//
/////////////////////////////////////////////////////////////////////


void StrCpyToggel(char *src, char *dest) 
{ 

    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + 32 ;
        }
        else if(*src >= 'a' && *src <= 'z')
        {
            *dest = *src - 32 ;
        }
        *dest++;
        *src++;
    }
    *dest = '\0';  
} 
                                                      
int main() 
{ 
    char arr[30] = "Marvellous Python 2"; 
    char brr[30];   
    
    StrCpyToggel(arr,brr); 
    printf("%s",brr);  
    return 0; 
} 