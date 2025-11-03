#include<stdio.h> 
///////////////////////////////////////////////////////////////////
//
//  Function Name : Table  
//  Description :   Display Table
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          28/10/2025
//
//////////////////////////////////////////////////////////////////
void Table(int iNo) 
{ 
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo= -iNo;
    }
    for(iCnt = 1; iCnt <= 10; iCnt++)
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

Table(iValue); 

return 0; 
}
// Time Complixity: O(n)