/*
Requirement:
Write a C program that uses functions to evaluate an arithmetic expression with two numbers and an operator.

Design:
List of variables: a, b, op, result

Steps:

- Get two numbers from the user.
- Get the operator.
- Check the operator.
- Call the required function.
- Handle division by zero.
- Display the result.

Expected Output:
Enter two numbers: 10 5
Enter operator: +
Result = 15.00

Actual Output:
Enter two numbers: 10 5
Enter operator: +
Result = 15.00
*/

#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Cannot divide by zero.\n");
        return 0;
    }

    return a / b;
}

float calculate(float a, float b, char op)
{
    switch (op)
    {
        case '+':
            return add(a, b);
        case '-':
            return subtract(a, b);
        case '*':
            return multiply(a, b);
        case '/':
            return divide(a, b);
        default:
            printf("Invalid operator.\n");
            return 0;
    }
}

int main()
{
    float a, b, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter operator: ");
    scanf(" %c", &op);

    result = calculate(a, b, op);

    printf("Result = %.2f\n", result);

    return 0;
}