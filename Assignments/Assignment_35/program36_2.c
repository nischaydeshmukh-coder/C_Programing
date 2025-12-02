#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : struprX
//  Description :   Conver Lowarcase to Uppercase.
//  Input :         Stirng
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

void struprX(char str[])
{

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str= *str - 32;
        }
        str++;
    }
}

int main()
{

    char Arr[20] = {'\0'};
    
    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);
    
    printf("Updated String is :%s\n",Arr);
    return 0;
}
