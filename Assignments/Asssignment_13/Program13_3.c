 #include <stdio.h>
 ///////////////////////////////////////////////////////////////////
//
//  Function Name : print_odd_numbers  
//  Description :   Display all odd Numbers up to N
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          31/10/2025
//
//////////////////////////////////////////////////////////////////
 void print_odd_numbers(int limit) 
{
    for (int i = 1; i <= limit; i+=2)
    {
        printf("%d\n",i);
    }
    
 }
 int main() 
{
    int limit;

    printf("Enter number : ");
    scanf("%d", &limit);
    
    print_odd_numbers(limit);
    
    return 0;
 }
 //Time Complexity: O(N/2)
