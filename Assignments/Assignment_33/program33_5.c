#include<stdio.h>
#define TRUE 1 
#define FALSE 0 
typedef int BOOL;

/////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayScehdule
//  Description :   Depending on the division display exam timing.
//  Input :         Stirng 
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          1/12/2025
//
/////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv) 
{ 

    if(chDiv >= 'a' && chDiv <= 'z')
    {
        chDiv = chDiv - 32;
    }

    if(chDiv == 'a')
    {
        printf("Your exam at 7:00 AM");
    }
    else if(chDiv == 'B')
    {
        printf("Your exam at 8:30 AM");
    }
    else if(chDiv == 'C')
    {
        printf("Your exam at 9:20 AM");
    }
    else if(chDiv == 'D')
    {
        printf("Your exam at 10:30 AM");
    }
    else
    {
        printf("Enter Division between A to D\n");
    }
}
int main() 
{ 
    char cValue = '\0'; 
    BOOL bRet = FALSE; 

    printf("Enter your division"); 
    scanf("%c",&cValue); 

    DisplaySchedule(cValue); 

    return 0; 
}