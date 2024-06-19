#include <stdio.h>
int main()
{
    int firstNumber, secondNumber, sum;

    printf("输入两个数(以空格分隔): ");

    // 通过 scanf() 接收用户输入的两个整数
    scanf("%d %d", &firstNumber, &secondNumber);

    // 两个数字相加
    sum = firstNumber + secondNumber;

    // 输出结果
    printf("%d + %d = %d", firstNumber, secondNumber, sum);

    return 0;
}