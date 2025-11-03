#include<stdio.h> 
///////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit  
//  Description :   Display Reverse Digits
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          31/10/2025
//
//////////////////////////////////////////////////////////////////
void DisplayDigit(int iNo) 
{ 
    int iDigit = 0; 
    if(iNo < 0) 
    { 
        iNo = -iNo; 
    } 
    while(iNo !=0) 
    { 
        iDigit = iNo % 10; 
        printf("%d\n", iDigit);
        iNo = iNo / 10; 
    } 
} 
int main() 
{ 
    int iValue = 0; 

    printf("Enter number"); 
    scanf("%d",&iValue); 
    
    DisplayDigit(iValue); 
    
    return 0; 
}