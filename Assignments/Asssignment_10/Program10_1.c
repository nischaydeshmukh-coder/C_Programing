#include<stdio.h> 
///////////////////////////////////////////////////////////////////
//
//  Function Name : CircleArea  
//  Description :   Calculate Area of a Circle
//  Input :         Double
//  Output :        Double
//  Author :        Nischay Hemant Deshmukh
//  Date :          29/10/2025
//
//////////////////////////////////////////////////////////////////
double CircleArea(float fRadius) 
{ 
    double Area = 0.0;
    Area = 3.14 * fRadius * fRadius;
    return Area;
} 
int main() 
{ 
    float fValue = 0.0; 
    double dRet = 0.0; 

    printf("Enter radius"); 
    scanf("%f",&fValue); 

    dRet = CircleArea(fValue); 

    printf("Area of Circle: %f\n", dRet);

    return 0;
}
// Time Complixity: O(n)