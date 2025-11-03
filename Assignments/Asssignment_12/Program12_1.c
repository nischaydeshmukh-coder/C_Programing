#include <stdio.h>
///////////////////////////////////////////////////////////////////
//
//  Function Name : print_factors  
//  Description :   All Factors of Number
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          30/10/2025
//
//////////////////////////////////////////////////////////////////
 void print_factors(int number) 
{
    printf("Factors of %d are:", number);
    for(int i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
        printf("%d\n",i);
        }
    }
    printf("\n");
}
//Time Complexity: O(N)
 int main() 
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);

    print_factors(number);
   
    return 0;
 }