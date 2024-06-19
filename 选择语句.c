#include<stdio.h>
//分数等级判断：90分及以上输出A，60-89输出B，剩下输出C
int main()
{
    int score;
    char grade;
    printf("请输入分数： ");
    scanf("%d", &score);
    grade = (score >= 90) ? 'A' : ((score >= 60) ? 'B' : 'C');
    printf("%c\n", grade);
    return 0;
}