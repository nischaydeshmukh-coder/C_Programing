#include<stdio.h> 
//////////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Description :   Multiplication of 3 Numbers
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////////
int Multiply(int iNo1, int iNo2, int iNo3) 
{ 
    int iAns =1;
    if(iNo1 != 0)
    {
        iAns = iAns * iNo1;
    } 
    if(iNo2 != 0)
    {
        iAns = iAns * iNo2;
    } 
    if(iNo2 != 0)
    {
        iAns = iAns * iNo3;
    } 
    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }
    return iAns;

} 
int main() 
{ 
    int iValue1 = 0,iValue2 = 0, iValue3 = 0, iRet = 0; 

    printf("Please enter three numbers"); 
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3); 

    iRet = Multiply(iValue1, iValue2, iValue3); 

    printf("Multiplication of 3 Numbers: %d",iRet); 

    return 0; 

}