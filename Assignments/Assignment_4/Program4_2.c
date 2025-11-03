#include<stdio.h> 
///////////////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Description :   Print Fcators in Decreasing order
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          26/10/2025
//
//////////////////////////////////////////////////////////////////
void FactRev(int iNo) 
{ 
    int i = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i= iNo /2 ; i >= 1; i--)
    {
        if(iNo %i == 0)
        {
            printf("%d\t",i);
        }
    }
} 
int main() 
{ 
    int iValue = 0; 
    
    printf("Enter number"); 
    scanf("%d",&iValue); 

    FactRev(iValue); 

    return 0; 
}