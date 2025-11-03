#include<stdio.h> 
///////////////////////////////////////////////////////////////////
//
//  Function Name : KMtoMeter  
//  Description :   KiloMeter to Meter
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          29/10/2025
//
//////////////////////////////////////////////////////////////////
int KMtoMeter(int iNo) 
{ 
    int Meter = 0;
    Meter = iNo *1000;
    return Meter;
} 
int main() 
{ 
    int iValue = 0, iRet = 0; 

    printf("Enter distance"); 
    scanf("%d",&iValue); 
    
    iRet = KMtoMeter(iValue); 
    
    printf("Kilometer to Meter %d",iRet);
    return 0;
}
// Time Complixity: O(n)