#include <stdio.h>
int Factorial(int num)
{
    if (num == 1 || num == 0)
        return 1;
    else
        return Factorial(num - 1) * num;
}
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", Factorial(num));
}