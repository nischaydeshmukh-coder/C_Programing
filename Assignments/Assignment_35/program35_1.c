#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : CountCapital
//  Description :   Count number of capital characters.
//  Input :         Stirng 
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          1/12/2025
//
/////////////////////////////////////////////////////////////////////

int CountCapital(char *str) 
{ 
    int iCnt = 0; 

    while(*str != '\0') 
    { 
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
    } 
    return iCnt; 
} 
int main() 
{ 
    char arr[20]; 
    int iRet = 0; 

    printf("Enter string:"); 
    scanf("%[^'\n']s",arr); 
                                                        
    iRet = CountCapital(arr); 
    printf("%d",iRet); 
    return 0; 
} 