#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : CountChar
//  Description :   Give the frequency of the character.
//  Input :         Stirng , Character
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

int CountChar(char str[],char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue;
    
    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character:"); 
    scanf(" %c",&cValue); 

    iRet = CountChar(Arr, cValue); 

    printf("Character frequency is %d",iRet); 

    return 0;
}