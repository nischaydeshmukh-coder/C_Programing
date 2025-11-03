#include<stdio.h> 
///////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description :   Number of * on screen
//  Input :         Integer
//  Output :        Symbol
//  Author :        Nischay Hemant Deshmukh
//  Date :          25/10/2025
//
///////////////////////////////////////////////////////////////////
void Accept(int iNo)  
{ 
    int iCnt = 0;  
    for( iCnt=1 ; iCnt <= iNo ; iCnt++ )  
    {  
        printf("*");
    }  
}  
int main() 
{ 
    int iValue = 0; 
    iValue = 5; 
    
    Accept(iValue); 

    return 0; 
}
