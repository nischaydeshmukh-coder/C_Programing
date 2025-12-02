#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayASCII
//  Description :   Display ASCHII table.
//  Input :         Stirng 
//  Output :        String
//  Auther :        Nischay Hemant Deshmukh
//  Date :          1/12/2025
//
/////////////////////////////////////////////////////////////////////

void DisplayASCII() 
{ 
    int i =0;

    printf("--------\n");
    printf("Decimal\tHexadecimal\tOctal\tSymbol\n");

    for(i = 0; i <= 255 ; i++)
    {
        if(i >= 32 && i <= 126)
        {
            printf("%d\t\t%X\t\t%o\t\t%c\n",i,i,i,i);
        }
        else
        {
            printf("%d\t\t%X\t\t%o\t\t-\n",i,i,i);
        }
    }
}

int main() 
{ 
    DisplayASCII(); 
    return 0; 
} 