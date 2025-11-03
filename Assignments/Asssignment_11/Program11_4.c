#include<stdio.h> 
///////////////////////////////////////////////////////////////////
//
//  Function Name : RangeSumEven 
//  Description :   Adddition of Even Numbers between Range
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          30/10/2025
//
//////////////////////////////////////////////////////////////////
int RangeSumEven(int iStart , int iEnd) 
{ 
     int Isum =0;
    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        printf("Invlid range\n");
        return;
    }
    for(int i= iStart;i <= iEnd; i++)
    {
        if(i % 2 == 0)
        {
        Isum= Isum + i;
        }
    }
    return Isum;
} 

int main() 
{ 
    int iValue1 = 0, iValue2 = 0,iRet = 0; 

    printf("Enter starting point"); 
    scanf("%d",&iValue1); 

    printf("Enter ending point"); 
    scanf("%d",&iValue2); 

    iRet=RangeSumEven(iValue1, iValue2); 
    if(iRet != 0)
    {
        printf("Addition is :%d", iRet);
    }

    return 0; 
}
// Time Complexity: O(N)