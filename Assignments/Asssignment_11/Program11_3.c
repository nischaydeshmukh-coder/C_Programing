#include<stdio.h> 
///////////////////////////////////////////////////////////////////
//
//  Function Name : RangeSum  
//  Description :   Addition of Numbers between Range
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          30/10/2025
//
//////////////////////////////////////////////////////////////////
int RangeSum(int iStart , int iEnd) 
{ 
    int i = 0, sum =0;
    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        printf("Invlid range\n");
        return;
    }
    for(int i= iStart;i <= iEnd; i++)
    
        sum =sum + i;
        return sum;
    
} 

int main() 
{ 
    int iValue1 = 0, iValue2 = 0, iRet =0;

    printf("Enter starting point"); 
    scanf("%d",&iValue1); 

    printf("Enter ending point"); 
    scanf("%d",&iValue2); 

    iRet = RangeSum(iValue1, iValue2); 
    
    printf("Addition is %d",iRet); 
    
    return 0; 
} 
// Time Complexity: O(N)