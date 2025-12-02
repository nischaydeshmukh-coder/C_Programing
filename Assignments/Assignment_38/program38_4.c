#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : StrCpySmall
//  Description :   Convert thr given string into Small.
//  Input :         Stirng
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          30/11/2025
//
/////////////////////////////////////////////////////////////////////


void StrCpySmall(char *src, char *dest) 
{ 

    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + 32 ;
        }
        else
        {
            *dest = *src;
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
    
    StrCpySmall(arr,brr); 
    printf("%s",brr);  
    return 0; 
} 