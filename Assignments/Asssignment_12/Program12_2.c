 #include <stdio.h>
 ///////////////////////////////////////////////////////////////////
//
//  Function Name : count_factors  
//  Description :   Count the Number
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          30/10/2025
//
//////////////////////////////////////////////////////////////////
 int count_factors(int number) 
{
    int count = 0;
    for(int i= 2; i <= number; i++)
    {
        if(number % i ==0)
        {
            count++;
        }
    }
    return count;
 }

 int main() 
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);

    printf("%d\n", count_factors(number));
   
    return 0;
 }
//Time Complexity: O(N)