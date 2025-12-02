#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : FirstChar
//  Description :   Give the location of the character.
//  Input :         Stirng , Character
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

int FirstChar(char str[],char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            return i;
        }
        i++;
    }
    return -1;
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

    iRet = FirstChar(Arr, cValue); 

    printf("Character location is %d",iRet); 

    return 0;
}