#include <stdio.h>
#define MAX 500
int multiply(int x, int result[], int result_size)
{
    int carry = 0;
    for (int i = 0; i < result_size; i++)
    {
        int prod = result[i] * x + carry;
        result[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry)
    {
        result[result_size] = carry % 10;
        carry = carry / 10;
        result_size++;
    }

    return result_size;
}
void factorial(int n)
{
    int result[MAX];
    result[0] = 1;
    int result_size = 1;
    for (int x = 2; x <= n; x++)
    {
        result_size = multiply(x, result, result_size);
    }
    printf("Factorial of %d is:\n", n);
    for (int i = result_size - 1; i >= 0; i--)
    {
        printf("%d", result[i]);
    }
    printf("\n");
}
void main()
{
    int n;
    printf("ENTER THE NO. :- ");
    scanf("%d", &n);
    factorial(n);
}