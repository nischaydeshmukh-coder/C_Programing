#include <stdio.h>
///////////////////////////////////////////////////////////////
//
//  Function Name : MultFact
//  Description :   Print Multiplication Fcators
//  Input :         Integer
//  Output :        Integer
//  Author :        Nischay Hemant Deshmukh
//  Date :          26/10/2025
//
//////////////////////////////////////////////////////////////////
int MultFact(int iNo)
{
    int i = 0;
    int iMult = 1;

    if (iNo <= 0)
    {
        iNo = -iNo;   
    }

    for (i = 1; i <= iNo / 2; i++)
    {
        if (iNo % i == 0)
        {
            iMult = iMult * i;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors is: %d\n", iRet);

    return 0;
}