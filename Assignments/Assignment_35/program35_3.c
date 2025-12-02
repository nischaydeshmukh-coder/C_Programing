#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Description :   Count differnce between small and capital characters.
//  Input :         Stirng 
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          1/12/2025
//
/////////////////////////////////////////////////////////////////////

int Difference(char *str) 
{ 
    int iCountSmall = 0, iCountCapital = 0; 

    while(*str != '\0') 
    { 
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }
        str++;
    } 
    return iCountSmall - iCountCapital; 
} 
int main() 
{ 
    char arr[20]; 
    int iRet = 0; 

    printf("Enter string:"); 
    scanf("%[^'\n']s",arr); 
                                                        
    iRet = Difference(arr); 

    printf("%d",iRet); 

    return 0; 
} 