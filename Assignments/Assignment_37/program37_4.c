#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : LastChar
//  Description :   Give the location of the character.
//  Input :         Stirng , Character
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

int LastChar(char str[],char ch)
{
    int i = 0;
    int pos = -1;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            pos = i;
        }
        i++;
    }
    return pos;
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

    iRet = LastChar(Arr, cValue); 

    printf("Last Character location is %d",iRet); 

    return 0;
}