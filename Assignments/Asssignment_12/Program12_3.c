 #include<stdio.h>
 ///////////////////////////////////////////////////////////////////
//
//  Function Name : sum_of_factors  
//  Description :   Addition of all Factors of a Number
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          30/10/2025
//
//////////////////////////////////////////////////////////////////
 int sum_of_factors(int number) 
{
     int sum = 0;
    for(int i= 2; i <= number; i++)
    {
        if(number % i ==0)
        {
            sum = sum + i;
        }
    }
    return sum;
 }
 int main(void) 
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    printf("%d\n", sum_of_factors(number));
    
    return 0;
 }
 //Time Complexity: O(N)