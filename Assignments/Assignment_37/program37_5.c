#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : strrevX
//  Description :   Reverse the given string.
//  Input :         Stirng , Character
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

void strCpyX(char *str)
{
    char *start = str;
    char *end = str;
    char temp= '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end )
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("\n");
}

int main()
{
    char Arr[50] = {'\0'};
    
    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    str
    
    
    
    
    strCpyX(Arr);

    printf("Updated string:%s \n",Arr);
    return 0;
}
