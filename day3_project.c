//1~100 ������ ���� �����ϰ� 5���� ��ȸ�� ���� ���߱� ������Ʈ
#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> 
#include <stdio.h>

#include <stdio.h>

int main()
{
    int count = 5;
    int num, answer;
    printf("����: ");
    scanf("%d", &answer);
    while (count > 0)
    {
        printf("���� ��ȸ %d��\n", count);
        printf("���ڸ� ����������.(1~100)");
        scanf("%d", &num);
        if (num == answer) printf("�����Դϴ�!\n");
        else if (num > answer) printf("DOWN ��\n");
        else printf("UP ��\n");

        count--;
    }
    return 0;
}