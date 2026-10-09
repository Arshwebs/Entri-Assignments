/*
Requirement:
Define a Complex structure and write a C program to add two complex numbers.

Design:
List of variables: Complex c1, c2, result

Steps:

- Create a structure named Complex.
- Get the real and imaginary parts of the first number.
- Get the real and imaginary parts of the second number.
- Add the real parts.
- Add the imaginary parts.
- Store the result.
- Display the complex number.

Expected Output:
Enter first complex number: 3 4
Enter second complex number: 2 5
Result = 5 + 9i

Actual Output:
Enter first complex number: 3 4
Enter second complex number: 2 5
Result = 5 + 9i
*/

#include <stdio.h>

struct Complex
{
    float real;
    float imaginary;
};

struct Complex add(struct Complex c1, struct Complex c2)
{
    struct Complex result;

    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;

    return result;
}

void display(struct Complex c)
{
    if (c.imaginary < 0)
    {
        printf("Result = %g - %gi\n", c.real, -c.imaginary);
    }
    else
    {
        printf("Result = %g + %gi\n", c.real, c.imaginary);
    }
}

int main()
{
    struct Complex c1, c2, result;

    printf("Enter first complex number: ");
    scanf("%f %f", &c1.real, &c1.imaginary);

    printf("Enter second complex number: ");
    scanf("%f %f", &c2.real, &c2.imaginary);

    result = add(c1, c2);

    display(result);

    return 0;
}