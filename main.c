#include <stdio.h>

int x, y, z;
int result;

void addition()
{
    result = x + y;
    printf("Answer is: %d\n", result);
}

void subtraction()
{
    result = x - y;
    printf("Answer is: %d\n", result);
}

void multiplication()
{
    result = x * y;
    printf("Answer is: %d\n", result);
}

void division()
{
    if (y == 0)
    {
        printf("Can't divide by zero!\n");
        return;
    }
    result = x / y;
    printf("Answer is: %d\n", result);
}

int main()
{
    printf("Give first number: ");
    scanf("%d", &x);

    printf("Give second number: ");
    scanf("%d", &y);

    printf("Pick what u want to do:\n");
    printf("1 = Addition\n2 = Subtraction\n3 = Multiplication\n4 = Division\n");
    scanf("%d", &z);

    if (z == 1)
    {
        addition();
    }
    else if (z == 2)
    {
        subtraction();
    }
    else if (z == 3)
    {
        multiplication();
    }
    else if (z == 4)
    {
        division();
    }
    else
    {
        printf("Wrong choice!\n");
    }

    return 0;
}