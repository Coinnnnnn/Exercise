#include <stdio.h>
int main()
{
    int firstNumber, secondNumber, sum;

    printf("����������(�Կո�ָ�): ");

    // ͨ�� scanf() �����û��������������
    scanf("%d %d", &firstNumber, &secondNumber);

    // �����������
    sum = firstNumber + secondNumber;

    // ������
    printf("%d + %d = %d", firstNumber, secondNumber, sum);

    return 0;
}