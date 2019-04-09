#include<stdio.h>
 int sumNumbers(int a, int b)
 {
    return a + b;
 }

 int main(void)
 {
    int sum = 0;
    int num1, num2;
    printf("Hello, World!\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = sumNumbers(num1, num2);
    printf("\nSum of two numbers = %ls\n", sum);
    return 0;
 }