//Input :  5
//Output : # 1 * # 2 * # 3 * # 4 *  

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description :   Print # 1 * # 2 * # 3 * # 4 *.
//  Input :         int
//  Output :        symbol,int,symbol
//  Auther :        Nischay Hemant Deshmukh
//  Date :          21/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h> 
void Pattern(int iNo) 
{ 
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("#  %d  *  ",iCnt);
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