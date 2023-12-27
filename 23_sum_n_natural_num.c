#include <stdio.h>
int sum(int n);
int main(void)
{
    int num;
    do
    {
        printf("Enter a number between 1-1000\n");
        scanf("%d", &num);
    } while (num < 1 || num > 1000);
    int result = sum(num);
    printf ("Result is %d", result);

    return 0;
}
int sum(int n)
{
    if (n > 0)
    {
        return n + sum(n - 1);
    }
    return 0;
}