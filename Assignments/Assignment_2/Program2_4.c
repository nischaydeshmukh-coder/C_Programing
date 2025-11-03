#include<stdio.h> 
///////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   first Numbeer in second Number of Times
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          25/10/2025
//
///////////////////////////////////////////////////////////////////
int Display( int iNo, int iFrequency)  
{ 
    int iCnt = 0; 

    if(iCnt < 0)
    {
        iCnt = -iCnt;
    }
    for(  iCnt=1; iCnt<= iFrequency; iCnt++) 
    { 
        printf("%d\n",iNo);  
    } 
} 
int main() 
{ 
    int iValue = 0; 
    int iCount = 0; 
    
    printf("Enter number"); 
    scanf("%d" ,&iValue); 
    
    printf("Enter frequency"); 
    scanf("%d" ,&iCount); 
    
    Display(iValue, iCount); 
    
    return 0; 
}