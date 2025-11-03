#include<stdio.h>
///////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Numbeer less the 10 then print Hello else Demo
//  Input :         Integer
//  Output :        Character
//  Author :        Nischay Hemant Deshmukh
//  Date :          25/10/2025
//
///////////////////////////////////////////////////////////////////
int Display ( int iNo)  
{ 
    if(iNo < 10)  
    {  
        printf("Hello");  
    } 
    else 
    {  
        printf("Demo");  
    }  
} 
int main() 
{ 
    int iValue = 0; 
    
    printf("Enter number"); 
    scanf("%d" ,&iValue); 
    
    Display(iValue); 
    
    return 0; 
}