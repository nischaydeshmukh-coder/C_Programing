#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : strlwrX
//  Description :   Conver Uppercase to Lowercase.
//  Input :         Stirng
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

void strlwrX(char str[])
{

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str= *str + 32;
        }
        str++;
    }
}

int main()
{

    char Arr[20] = {'\0'};
    
    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);
    
    printf("Updated String is :%s\n",Arr);
    return 0;
}
