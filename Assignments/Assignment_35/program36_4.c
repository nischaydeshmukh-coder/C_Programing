#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Description :   Give the integers form the string.
//  Input :         Stirng
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

void DisplayDigit(char str[])
{

    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }
        str++;
    }
    
}

int main()
{

    char Arr[20] = {'\0'};
    
    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);
    
   
    return 0;
}
