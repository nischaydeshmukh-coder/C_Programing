#include<stdio.h> 
///////////////////////////////////////////////////////////////////
//
//  Function Name : RectArea  
//  Description :   Calculate Area of a Rectangle
//  Input :         Double
//  Output :        Double
//  Author :        Nischay Hemant Deshmukh
//  Date :          29/10/2025
//
//////////////////////////////////////////////////////////////////
double RectArea(float fWidth, float fHeight) 
{ 
    double Area =0.0;
    Area = fWidth * fHeight ;
    return Area;
                                                      
} 
int main() 
{ 
    float fValue1 = 0.0, fValue2 = 0.0; 
    double dRet = 0.0; 
    
    printf("Enter width"); 
    scanf("%f",&fValue1); 
    printf("Enter height"); 
    scanf("%f",&fValue2); 

    dRet = RectArea(fValue1, fValue2); 

    printf("Area of Rectangle %f\n",dRet); 
    return 0; 
} 
// Time Complixity: O(n)