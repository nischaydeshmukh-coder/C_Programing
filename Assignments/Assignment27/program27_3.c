//Input :  iRow = 4  iCol = 5
//Output : 
//          5   4   3   2   1
//          5   4   3   2   1
//          5   4   3   2   1

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description :   Display the given pattern.
//  Input :         int,int
//  Output :        pattern
//  Auther :        Nischay Hemant Deshmukh
//  Date :          21/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h> 
void Pattern(int iRow, int iCol) 
{ 
    int i = 0, j = 0;

    for(i = 1; i <= iRow ; i++)
    {
        for(j = iCol; j >= 1 ; j--)
        {
            printf("  %d  ",j);
        }
        printf("\n");
    }
} 

int main() 
{ 
    int iValue1 = 0, iValue2 = 0; 

    printf("Enter number of Rows:"); 
    scanf("%d",&iValue1); 

    printf("Enter number of Cols:"); 
    scanf("%d",&iValue2);
    
    Pattern(iValue1,iValue2); 
   
    return 0; 
} 