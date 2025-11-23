//Input :  5
//Output : 5   #   4   #   3   #   2   #   1   # 

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description :   Print 5   #   4   #   3   #   2   #   1   # .
//  Input :         int
//  Output :        int ,symbol
//  Auther :        Nischay Hemant Deshmukh
//  Date :          21/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h> 
void Pattern(int iNo) 
{ 
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d  #  ",iCnt);
    }
} 

int main() 
{ 
    int iValue = 0; 

    printf("Enter number of elements:"); 
    scanf("%d",&iValue); 
   
    Pattern(iValue); 
   
    return 0; 
} 