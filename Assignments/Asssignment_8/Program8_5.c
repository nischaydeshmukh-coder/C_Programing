#include<stdio.h> 
///////////////////////////////////////////////////////////////////
//
//  Function Name : TableRev  
//  Description :   Rreverse Table
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          28/10/2025
//
//////////////////////////////////////////////////////////////////
void TableRev(int iNo) 
{ 
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo= -iNo;
    }
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iNo * iCnt);
    }
    printf("\n");
} 
                                                    
int main() 
{ 
int iValue = 0; 

printf("Enter number"); 
scanf("%d",&iValue); 

TableRev(iValue); 

return 0;
}
// Time Complixity: O(n)