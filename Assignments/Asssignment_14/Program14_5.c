#include<stdio.h> 
///////////////////////////////////////////////////////////////////
//
//  Function Name : CountT 
//  Description :   Display the count of Digits less than 6
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          31/10/2025
//
//////////////////////////////////////////////////////////////////
int Count(int iNo) 
{ 
int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo= -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCnt++;
        }
        iNo = iNo /10;
    }
    return iCnt;
} 
int main() 
{ 
    int iValue = 0; 
    int iRet = 0; 
    
    printf("Enter number"); 
    scanf("%d",&iValue); 
    
    iRet = Count(iValue); 
    
    printf("%d",iRet); 
    
    return 0; 
}