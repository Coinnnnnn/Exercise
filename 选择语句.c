#include<stdio.h>
//�����ȼ��жϣ�90�ּ��������A��60-89���B��ʣ�����C
int main()
{
    int score;
    char grade;
    printf("����������� ");
    scanf("%d", &score);
    grade = (score >= 90) ? 'A' : ((score >= 60) ? 'B' : 'C');
    printf("%c\n", grade);
    return 0;
}