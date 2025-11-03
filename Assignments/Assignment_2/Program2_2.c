#include<stdio.h>
///////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Number of * on screen
//  Input :         Integer
//  Output :        Symbol
//  Author :        Nischay Hemant Deshmukh
//  Date :          25/10/2025
//
///////////////////////////////////////////////////////////////////
void Display(int iNo)  
{ 
    if(iNo < 0)
    {
        iNo = -iNo;
    } 
    while( iNo > 0) 
    {  
        printf(" * ");  
        iNo -- ;  
    } 
} 
int main() 
{ 
    int iValue = 0; 

    printf("Enter number:"); 
    scanf("%d" ,&iValue); 
    
    Display(iValue); 
    
    return 0; 
} 