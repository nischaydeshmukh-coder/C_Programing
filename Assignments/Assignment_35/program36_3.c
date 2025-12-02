#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : strtoggelX
//  Description :   Conver Lowarcase to Uppercase and Uppercase into Lowercase.
//  Input :         Stirng
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

void strtoggelX(char str[])
{

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str= *str - 32;
        }
        else if(*str >= 'A' && *str <= 'Z')
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

    strtoggelX(Arr);
    
    printf("Updated String is :%s\n",Arr);
    return 0;
}
