 #include <stdio.h>
///////////////////////////////////////////////////////////////////
//
//  Function Name : print_numbers  
//  Description :   Display Numbers from 1 to N
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          31/10/2025
//
//////////////////////////////////////////////////////////////////
 void print_numbers(int limit) 
{
    for(int i=1;i <= limit;i++)
    {
    printf("%d\n",i);
    }
 }
 int main() 
{
    int limit;
    printf("Enter number : ");
    scanf("%d", &limit);

    print_numbers(limit);
    
    return 0;
}
//Time Complexity: O(N)