#include<stdio.h> 
#include<stdbool.h>
///////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description :   Number is divisible by 5 or not
//  Input :         Integer
//  Output :        Character
//  Author :        Nischay Hemant Deshmukh
//  Date :          25/10/2025
//
///////////////////////////////////////////////////////////////////
bool Check( int iNo)  
{ 
    if(( iNo % 5) == 0)  
    {  
        return true;  
    } 
    else  
    { 
         false ;  
    } 
} 
int main() 
{ 
    int iValue = 0; 
    bool bRet = false;

    printf("Enter number:"); 
    scanf("%d" ,&iValue); 
    
    bRet = Check(iValue); 
    
    if(bRet == true)  
    {  
        printf("Divisible by 5");  
    } 
    else  
    { 
        printf("Not Divisible by 5"); 
    } 
    return 0; 
} 
