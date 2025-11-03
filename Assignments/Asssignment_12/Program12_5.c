 #include <stdio.h>
 #include <stdbool.h>
 ///////////////////////////////////////////////////////////////////
//
//  Function Name : is_divisible_by_five  
//  Description :   Check Number is Divisible by 5
//  Input :         Integer
//  Output :        Character
//  Author :        Nischay Hemant Deshmukh
//  Date :          30/10/2025
//
//////////////////////////////////////////////////////////////////
 bool is_divisible_by_five(int number) 
{
    if(number % 5== 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
 int main(void) 
{
    int number;
    
    printf("Enter number : ");
    scanf("%d", &number);
    
    printf("%s\n", is_divisible_by_five(number) ? "Yes" : "No");

    return 0;
 }
  //Time Complexity: O(1)