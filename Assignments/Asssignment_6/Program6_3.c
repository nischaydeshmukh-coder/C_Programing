#include<stdio.h>
#include<stdbool.h> 
//////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEqual
//  Description :   Numbers are Equal or not
//  Input :         Integer
//  Output :        Character
//  Author :        Nischay Hemant Deshmukh
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////////
bool ChkEqual(int iNo1,int iNo2) 
{ 
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
} 
 
int main() 
{ 
    int iValue1 = 0,iValue2 = 0; 
    bool bRet = false; 
    printf("Please enter two numbers"); 
    scanf("%d %d",&iValue1, &iValue2); 
    bRet = ChkEqual(iValue1, iValue2); 
    if(bRet == true) 
        { 
            printf("Number is equal");
        } 
        else 
        {
            printf("Number is not equal");
        } 
    return 0;
}