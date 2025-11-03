#include<stdio.h> 
///////////////////////////////////////////////////////////////////
//
//  Function Name : SquareMeter  
//  Description :   Convert Square into Meter
//  Input :         Double
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          29/10/2025
//
//////////////////////////////////////////////////////////////////
double SquareMeter(int iValue)                                                     
{ 
    double SqMeter = 0.0;
    SqMeter = iValue * 0.0929;
    return SqMeter;
} 
 
int main() 
{ 
    int iValue = 0; 
    double dRet = 0.0; 

    printf("Enter area in square feet"); 
    scanf("%d",&iValue); 

    dRet = SquareMeter(iValue); 

    printf("Sqaure Feet to Square Meter:%f",dRet); 

    return 0; 
} 
// Time Complixity: O(n)