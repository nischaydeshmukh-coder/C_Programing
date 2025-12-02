#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : CountWhite
//  Description :   Give the Number of spaces form the string.
//  Input :         Stirng
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

int CountWhite(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{

    char Arr[20] = {'\0'};
    int iRet = 0;
    
    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr);
    
    printf("%d",iRet);
    return 0;
}
