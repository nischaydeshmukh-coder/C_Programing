#include<stdio.h>  
//////////////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Description :   Accept Marks and display Percentage
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////////
float Percentage(int iObtain, int iTotal) 
{
    float fResult= 0.0;
    if (iTotal == 0)
    {
        return 0.0;
    }
    fResult=( (float)iObtain / (float)iTotal) * 100;

    return fResult;
     
} 

int main() 
{ 
    int iValue1 = 0,iValue2 = 0; 
    float fRet = 0.0; 

    printf("Please enter total marks"); 
    scanf("%d",&iValue1); 
    
    printf("Please enter obtained marks"); 
    scanf("%d",&iValue2); 
    
    fRet = Percentage(iValue1, iValue2); 
    
    printf("Percentage :%f",fRet);
    return 0;
}