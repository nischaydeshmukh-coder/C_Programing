#include<stdio.h>
#include<stdbool.h>
//////////////////////////////////////////////////////////////////
//
//  Function Name : ChkGreater
//  Description :   Number is Greater than 100 or not
//  Input :         Integer
//  Output :        Character
//  Author :        Nischay Hemant Deshmukh
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////////
bool ChkGreater(int iNO) 
{ 
    if(iNO >= 100)
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
    int iValue = 0; 
    bool bRet = false; 

    printf("Please enter number"); 
    scanf("%d",&iValue); 

    bRet = ChkGreater(iValue); 

    if(bRet == true) 
        { 
            printf("Greater");
        } 
        else 
        { 
            printf("Smaller"); 
        } 
    return 0; 
}