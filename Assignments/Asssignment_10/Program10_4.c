#include<stdio.h>
///////////////////////////////////////////////////////////////////
//
//  Function Name : FhtoCs  
//  Description :   Convert Temperature from Fahrenheit into celcius
//  Input :         Double
//  Output :        FLoat
//  Author :        Nischay Hemant Deshmukh
//  Date :          29/10/2025
//
//////////////////////////////////////////////////////////////////
double FhtoCs(float fTemp) 
{ 
    double celsius = 0.0;
    celsius = (fTemp - 32) * (5.0 / 9.0);
    return celsius;
} 
int main() 
{ 
    float fValue = 0.0; 
    double dRet = 0.0; 

    printf("Enter temperature in Fahrenheit"); 
    scanf("%f",&fValue); 

    dRet = FhtoCs(fValue); 

    printf("Fehrenhite to Celsius:%f\n",dRet); 

    return 0; 
} 
// Time Complixity: O(n)