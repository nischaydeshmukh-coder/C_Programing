#include <stdio.h> 
///////////////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Description :   Leap year or not
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////////
void CheckLeapYear(int year) 
{ 
    if((year % 4 == 0 && year % 100 !=0) )
    {
        printf("%d is a Leap Year\n",year);
    }
    else
    {
        printf("%d is not a Leap Year\n",year);
    }
} 
int main() 
{ 
int yr; 

printf("Enter year: "); 
scanf("%d", &yr); 

CheckLeapYear(yr); 

return 0; 

} 