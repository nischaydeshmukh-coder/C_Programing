 #include <stdio.h>
 ///////////////////////////////////////////////////////////////////
//
//  Function Name : sum_natural_numbers  
//  Description :   Display Addition of Natural Numbers upto N
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          31/10/2025
//
//////////////////////////////////////////////////////////////////
 int sum_natural_numbers(int limit) 
{
    int sum = 0;
    for(int i = 1; i <=limit; i++)
    {
        sum =sum + i;
    }
    return sum;
 }
 int main() 
{
    int limit;
    printf("Enter number : ");
    scanf("%d", &limit);
    printf("%d\n", sum_natural_numbers(limit));
    return 0;
 }
 //Time Complexity: O(N)