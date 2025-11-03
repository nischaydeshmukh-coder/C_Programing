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
    int iCnt = 0;   
    if(iCnt < 0)
    {
        iCnt = -iCnt;
    } 
    while( iCnt <= iNo )  
    { 
        printf(" * ");  
        iCnt++;   
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