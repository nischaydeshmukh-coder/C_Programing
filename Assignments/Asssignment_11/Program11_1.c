
#include<stdio.h> 
///////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplay  
//  Description :   Numbers between Range
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          30/10/2025
//
//////////////////////////////////////////////////////////////////
int RangeDisplay(int iStart , int iEnd) 
{ 
    int i = 0;
    if(iStart > iEnd)
    {
        printf("Invlid range\n");
        return;
    }
    for(int i= iStart;i <= iEnd; i++)
    {
        printf("%d\t",i);
    }
} 

int main() 
{ 
    int iValue1 = 0, iValue2 = 0; 

    printf("Enter starting point"); 
    scanf("%d",&iValue1); 

    printf("Enter ending point"); 
    scanf("%d",&iValue2); 

    RangeDisplay(iValue1, iValue2); 

    return 0; 
} 
// Time Complexity: O(N)