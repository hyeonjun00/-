//1~100 ������ ���� �����ϰ� 5���� ��ȸ�� ���� ���߱� ������Ʈ
#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> 
int main(void) {
	srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("���� : %d\n", num);
	int answer = 0;
	int chance = 5;

	while (true) {
		printf("���� ��ȸ %d�� \n", chance--);
		printf("1���� 100���� ���ڸ� �����:");
		scanf("%d", &answer);
		if (answer > num) {
			printf("Down ��\n\n ");
		}
		else if (answer == num) {
			printf("�����Դϴ�!\n\n");
			break;
		}
		else if (answer < num) {
			printf("UP ��\n\n");
		}
		if (chance == 0) {
			printf("�����߽��ϴ�.\n");
			break;
		}
	}
	return 0;
}