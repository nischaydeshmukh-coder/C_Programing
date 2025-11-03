#include<stdio.h> 
//////////////////////////////////////////////////////////////////
//
//  Function Name : Number  
//  Description :   If number Less than 50 print small,
//                   If number Greater than 50 and less than 100 print Medium,
//                      If 100 print Large
//  Input :         Integer
//  Output :        Character
//  Author :        Nischay Hemant Deshmukh
//  Date :          28/10/2025
//
//////////////////////////////////////////////////////////////////
void Number(int iNo) 
{ 
    if (iNo < 50)
    {
        printf("Small\n");
    }
    else if(iNo >= 50 && iNo < 100)
    {
        printf("Medium\n");
    }
    else 
    {
        printf("Large\n");
    }
    
} 
int main() 
{ 
    int iValue = 0; 

    printf("Enter number"); 
    scanf("%d",&iValue); 

    Number(iValue); 
    return 0; 
} 
// Time Complixity: O(1)