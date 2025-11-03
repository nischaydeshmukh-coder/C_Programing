#include<stdio.h> 
///////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayEven 
//  Description :   Even Numbers between Range
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          30/10/2025
//
//////////////////////////////////////////////////////////////////
int RangeDisplayEven(int iStart , int iEnd) 
{ 
    int i = 0;
    if(iStart > iEnd)
    {
        printf("Invlid range\n");
        return;
    }
    for(int i= iStart;i <= iEnd; i++)
    {
        if(i % 2 == 0)
        {
        printf("%d\t",i);
        }
    }
} 

int main() 
{ 
    int iValue1 = 0, iValue2 = 0; 

    printf("Enter starting point"); 
    scanf("%d",&iValue1); 

    printf("Enter ending point"); 
    scanf("%d",&iValue2); 

    RangeDisplayEven(iValue1, iValue2); 

    return 0; 
}
// Time Complexity: O(N)