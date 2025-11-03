 #include <stdio.h>
///////////////////////////////////////////////////////////////////
//
//  Function Name : sum_even_numbers  
//  Description :   Display addition of all Numbers up to N
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          31/10/2025
//
//////////////////////////////////////////////////////////////////
 int sum_even_numbers(int limit)                                                  
{
      int sum = 0;
    for(int i = 1; i <=limit; i++)
    {
        sum =2 * i;
    }
    return sum;
}
 int main(void) 
{
    int limit;
    printf("Enter number : ");
    scanf("%d", &limit);
    printf("%d\n", sum_even_numbers(limit));
    return 0;
 }
  //Time Complexity: O(N)