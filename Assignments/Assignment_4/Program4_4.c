#include<stdio.h> 
///////////////////////////////////////////////////////////////
//
//  Function Name : SumNonFact
//  Description :   Display Sum of Non Factors
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          26/10/2025
//
//////////////////////////////////////////////////////////////////
int SumNonFact(int iNo) 
{ 
    int i = 0;
    int iSum = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i= 1 ; i < iNo; i++)
    {
        if(iNo %i != 0)
        {
            iSum = iSum + i;
            
        }
    }
    return iSum;
} 

int main() 
{ 
    int iValue = 0; 
    int iRet = 0; 

    printf("Enter number"); 
    scanf("%d",&iValue); 

    iRet  = SumNonFact(iValue); 

    printf("%d",iRet); 

    return 0; 
}